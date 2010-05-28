(use tcp)
(use srfi-18)

;; (repl-prompt "[iPhone] #; ")

(define (my-repl)
  (display "[iPhone] #; ")
  (let ([result (eval (read))])
    (print result)))

(define (my-exception-handler exception return)
  (print-error-message exception)
  (print)
  (return))

(define (start-server #!key (port 1100))
  (print "Chicken server starting at port: " port)
  (print)
  (thread-start!
   (lambda ()
     (let ([listener (tcp-listen port)])
       (let accept ()
         (if (tcp-accept-ready? listener)
             (let-values ([(input-port output-port) (tcp-accept listener)])
               (with-output-to-port output-port
                 (lambda ()
                   (with-input-from-port input-port
                     (lambda ()
                       (print "Welcome to the Chicken Repl!")
                       (print)
                       (let back-to-repl ()
                         (condition-case
                          (begin
                            (my-repl)
                            (thread-yield!)
                            (back-to-repl))
                          [(exn io) (begin
                                      (tcp-close listener)
                                      (print "Connection closed.")
                                      (accept))]
                          ;; [exception (exn runtime) (my-exception-handler exception back-to-repl)]
                          ;; [exception (exn arity) (my-exception-handler exception back-to-repl)]
                          ;; [exception (exn i/o) (my-exception-handler exception back-to-repl)]
                          ;; [exception (exn arithmetic) (my-exception-handler exception back-to-repl)]
                          ;; [exception (exn bounds) (my-exception-handler exception back-to-repl)]
                          ;; [exception (exn match) (my-exception-handler exception back-to-repl)]
                          ;; [exception (exn syntax) (my-exception-handler exception back-to-repl)]
                          [exception (exn) (my-exception-handler exception back-to-repl)]))))))))
         (accept))))))
