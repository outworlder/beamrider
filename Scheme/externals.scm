(define-external (render_scene) void
  (render-scene))

(define-external (scene_setup (int width) (int height)) void
  (setup-scene width height))

(define-external (set_orientation (int orientation)) void
  (set-device-orientation! orientation))

(define-external (start_server (int port)) void
  (start-server port))

(define-external (update_world (float delta)) void
  (update-world! delta))