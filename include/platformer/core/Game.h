#pragma once
#include <SFML/Graphics.hpp>
#include <memory>

#include "World.h"
#include "platformer/util/ResourceHolder.h"

namespace core {
    class Game {
    public:
        Game();
        void run();
    private:
        void processEvents();
        void update(sf::Time dt);
        void render();

        sf::RenderWindow mWindow;
        World mWorld;
    };
}
