(use tcp)
(use srfi-18)

(repl-prompt "[iPhone] #; ")

(define (start-server #!key (port 1100))
  (print "Chicken server starting at port: " port)
  (print)
  (let ([listener (tcp-listen port)])
    (let accept ()
      (if (tcp-accept-ready? listener)
          (thread-start!
           (lambda ()
          (let-values ([(input-port output-port) (tcp-accept listener)])
            (with-output-to-port output-port
              (lambda ()
                (with-input-from-port input-port
                  (lambda ()
                    (print "Welcome to the Chicken Repl!")
                    (print)
                    (let back-to-repl ()
                      (condition-case
                       (repl)
                       [(exn io) (begin
                                   (tcp-close listener)
                                   (print "Connection closed.")
                                   (accept))]
                       [exception (exn runtime) (begin
                                                  (print "Exception: " exception)
                                                  (print)
                                                  (back-to-repl))]
                       [exception (exn) (begin
                                          (print "Unknown error: " exception)
                                          (abort exception))])))))))))
          (begin
            (accept))))))
