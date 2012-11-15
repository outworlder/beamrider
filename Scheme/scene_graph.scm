;; Basic Scene graph

(define-record opengl-state texture blend)
(define-record scene-object name location orientation data state)
(define-record object-data vertexes normals texture)
(dinfe-record scene-node 

(define scene-graph
  '(make-scene-object 'root #f #f #f #F))

;; Adds a new object to the scene graph. If not specified, will add a new node under the root node.
(define (add-to-scene-graph object #!key (parent 'root))
  