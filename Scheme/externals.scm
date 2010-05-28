(define-external (test_chicken (int interval)) int
  5)

(define-external (render_scene) void
  (render-scene))

(define-external (scene_setup (int width) (int height)) void
  (setup-scene width height))


(define-external (start_server (int port)) void
  (start-server port))