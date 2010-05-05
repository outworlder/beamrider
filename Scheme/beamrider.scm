(include "gambit-ffi-compat")
(include "gl")

(use srfi-4)

(define-external (test_chicken (int interval)) int
  5)

(define-external (render_scene) void
  (render-scene))

(define clear-color
  '(0.0 0.0 0.0 1))

(define field-of-view
  45.0)

(define zNear
  0.1)

(define zFar
  100)

(define-record point x y z)

(define PI
  3.141926535)

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

(define grid
  (make-grid 10 8))

(define grid-length
  (- (f32vector-length grid) 1))

(define (make-line x1 y1 z1 x2 y2 z2)
  (list (make-point x1 y1 z1) (make-point x2 y2 z2)))

(define (line->list l)
  (let ([l1 (car l)]
        [l2 (cadr l)])
    (list (point-x l1) (point-y l1) (point-z l1)
          (point-x l2) (point-y l2) (point-z l2))))

(define (make-grid side divisions)
  (let ([spacing (/ side divisions)]
        [side/2 (/ side 2)])
    (let loop ([i divisions] [acum '()])
      (if (< i 0)
          (list->f32vector acum)
          (loop
           (- i 1)
           (append
            acum
            (line->list
             (make-line (- side/2) (- (* i spacing) side/2) 0 side/2 (- (* i spacing) side/2) 0)) ; X
            (line->list
             (make-line (- (* i spacing) side/2) (- side/2) 0 (- (* i spacing) side/2) side/2 0)))))))) ;Y

(define (flatten list)
  (cond ((null? list) '())
	((list? (car list)) (append (flatten (car list)) (flatten (cdr list))))
	(else
	 (cons (car list) (flatten (cdr list))))))

(define-external (scene_setup (int width) (int height)) void
  (print "Width: " width)
  (print "Height: " height)
  (apply glClearColor clear-color)
  (glClearDepth 100.0)
  (glViewport 0 0 width height)
  (glMatrixMode GL_PROJECTION)
  (glLoadIdentity)
  (make-perspective field-of-view (/ width height) zNear zFar)  
  (glMatrixMode GL_MODELVIEW)
  (glLoadIdentity))

(define (render-scene)
  (glClear (bitwise-ior GL_COLOR_BUFFER_BIT GL_DEPTH_BUFFER_BIT))
  (with-transform
   (glEnableClientState GL_VERTEX_ARRAY)
   (glDisableClientState GL_COLOR_ARRAY)
   (glVertexPointer 3 GL_FLOAT 0 grid)
   (with-transform
    (glColor4f 0.0 0.0 1.0 1.0)
    (glTranslatef 0.0 0.0 -15.0)
    ;;(glRotatef (- 45) 1.0 0.0 0.0)
    (glDrawArrays GL_LINES 0 grid-length))))

(return-to-host)