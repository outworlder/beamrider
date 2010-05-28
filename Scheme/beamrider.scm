(include "gambit-ffi-compat")
(include "gl")
(include "config")
(include "externals")
(include "remote-repl")

(use srfi-4)

(define-record point x y z)

(define-record grid size divisions geometry number-vertexes)

(define-syntax with-transform
  (syntax-rules ()
    ([_ body ...] (begin
                    (glPushMatrix)
                    body ...
                    (glPopMatrix)))))

(define (make-perspective fov aspect znear zfar)
  (let* ([DEG2RAD (/ PI 180)]
         [tangent (tan (* (/ fov 2) DEG2RAD))]
         [height (* znear tangent)]
         [width (* height aspect)])
    (glFrustumf (- width) width (- height) height znear zfar)))

(define (point->list point)
  (list (point-x point) (point-y point) (point-z point)))

(define (make-line x1 y1 z1 x2 y2 z2)
  (list (make-point x1 y1 z1) (make-point x2 y2 z2)))

(define (line->list l)
  (let ([l1 (car l)]
        [l2 (cadr l)])
    (list (point-x l1) (point-y l1) (point-z l1)
          (point-x l2) (point-y l2) (point-z l2))))

(define (make-grid-geometry side divisions)
  (let ([spacing (/ side divisions)]
        [side/2 (/ side 2)])
    (let loop ([i divisions] [acum '()])
      (if (< i 0)
          (list->f32vector acum)
          (loop (- i 1)
                (append
                 acum
                 (line->list
                  (make-line (- side/2)               ;x1
                             (+ (* i spacing) (- side/2)) ;y1
                             0                        ;z1
                             side/2                   ;x2
                             (+ (* i spacing) (- side/2)) ;y2
                             0))                      ;z2
                 (line->list
                  (make-line (+ (* i spacing) (- side/2)) ;x1
                             (- side/2)               ;y1
                             0                        ;z1
                             (+ (* i spacing) (- side/2)) ;x2
                             side/2                   ;y2
                             0))))))))                ;z2


(define (setup-scene width height)
  (print "Width: " width)
  (print "Height: " height)
  (apply glClearColor clear-color)
  (glClearDepth 100.0)
  (glViewport 0 0 width height)
  (glMatrixMode GL_PROJECTION)
  (glLoadIdentity)
  (make-perspective field-of-view (/ width height) zNear zFar)  
  (glMatrixMode GL_MODELVIEW)
  (glLoadIdentity)
  (glEnable GL_BLEND)
  (glBlendFunc GL_SRC_ALPHA GL_ONE_MINUS_SRC_ALPHA)
  (glHint GL_LINE_SMOOTH_HINT GL_NICEST)
  (glLineWidth 1.5)
  (glEnable GL_LINE_SMOOTH)
  (glEnableClientState GL_VERTEX_ARRAY)
  (glDisableClientState GL_COLOR_ARRAY))

(define (update-world deltat)
  #f)

(define (set-device-orientation! direction)
  (let ([orientations (vector 'UNKNOWN 'UP 'DOWN 'LEFT 'RIGHT 'FACE-UP 'FACE-DOWN)]
        [angles '((UNKNOWN . 0) (UP . 0) (DOWN . 180) (LEFT . -90) (RIGHT . 90) (FACE-UP . 0) (FACE-DOWN . 0))])
    (glMatrixMode GL_MODELVIEW)
    (print "Device orientation: " (symbol->string (car (assoc (vector-ref orientations direction) angles))))
    (glRotatef (cdr (assoc (vector-ref orientations direction) angles)) 0.0 0.0 1.0)))

(define (render-scene)
  (glClear (bitwise-ior GL_COLOR_BUFFER_BIT GL_DEPTH_BUFFER_BIT))
  (with-transform
   (glVertexPointer 3 GL_FLOAT 0 (grid-geometry grid))
   (with-transform
    (glColor4f 0.0 0.0 1.0 1.0)
    (glTranslatef 0.0 -1.5 (- 9.5))
    (glRotatef -85.0 1.0 0.0 0.0)
    (glDrawArrays GL_LINES 0 (grid-number-vertexes grid)))))

(define (generate-grid side divisions)
  (let ([grid-data (make-grid-geometry side divisions)])
    (make-grid side divisions grid-data (/ (f32vector-length grid-data) 3))))

(define grid
  (generate-grid 80 100))

(generate-grid 80 100)

(return-to-host)