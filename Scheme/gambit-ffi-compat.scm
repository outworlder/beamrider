(define-foreign-type unsigned-int8 unsigned-byte)

(define-syntax c-lambda
  (syntax-rules ()
    ([_ (arg ...) return-type name] (foreign-lambda return-type name arg ...))))

(define-syntax c-define-type
  (syntax-rules ()
    ([_ name type] (define-foreign-type name type))))