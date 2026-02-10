#pragma once
#include <SFML/Graphics.hpp>
#include <platformer/entities/Entity.h>
#include <platformer/util/ResourceHolder.h>

namespace core
{
    class World
    {
    public:
        explicit World(sf::RenderWindow& window);
        void update(sf::Time dt);
        void draw();

    private:
        void loadTextures();
        void buildScene();

        sf::RenderWindow& mWindow;
        util::ResourceHolder<std::string, std::string> mTextures;
        std::vector<std::unique_ptr<entities::Entity>> mSceneObjects;
    };
}
