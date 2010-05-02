(include "gambit-ffi-compat")
(include "gl")

(use srfi-4)

(define-external (test_chicken (int interval)) int
  5)

(define-external (render_scene) void
  (render-grid))

(define-record triangle x y z)

(define (triangle->list triangle)
  (list (triangle-x triangle) (triangle-y triangle) (triangle-z triangle)))

(define grid
  (make-grid))

(define grid-length
  (- (f32vector-length grid) 1))

(define (make-grid #!key (amount 10) (linesx 1) (linesy 1) (spacing 0.1))
  (let loop ([i amount]
             [lst '()])
    (if (> i 0)
        (loop
         (- i 1)
         (append lst
                 (list
                  (make-triangle 0 (* i spacing) 0)
                  (make-triangle linesx (* i spacing) 0)
                  (make-triangle (* i spacing) 0 0)
                  (make-triangle (* i spacing) linesy 0))))
        (list->f32vector (flatten
                          (map triangle->list lst))))))

(define (flatten list)
  (cond ((null? list) '())
	((list? (car list)) (append (flatten (car list)) (flatten (cdr list))))
	(else
	 (cons (car list) (flatten (cdr list))))))

(define (render-grid)
  (glClearColor 0 0 0 1)
  (glClear GL_COLOR_BUFFER_BIT)
  (glEnableClientState GL_VERTEX_ARRAY)
  (glDisableClientState GL_COLOR_ARRAY)
  (glVertexPointer 3 GL_FLOAT 0 grid)
  (glDrawArrays GL_LINES 0 grid-length))

(return-to-host)