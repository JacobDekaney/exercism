namespace targets {
    class Alien {
        public:
            Alien (int x, int y) {
                x_coordinate = x;
                y_coordinate = y;
            }
            int x_coordinate = 0;
            int y_coordinate = 0;
            int get_health () {
                return health;
            }
            int hit() {
                if (health > 0) {
                    return health--;
                }
                return health;
            }
            bool is_alive () {
                return health != 0;
            }
            bool teleport(int x_new, int y_new) {
                x_coordinate = x_new;
                y_coordinate = y_new;

                return true;
            }

            bool collision_detection (Alien alien) {
                if (x_coordinate == alien.x_coordinate && y_coordinate == alien.y_coordinate) {
                    return true;
                }
                return false;
            }
        private:
            int health = 3;
    };

}  // namespace targets
