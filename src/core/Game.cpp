#include <platformer/core/Game.h>

#include "platformer/core/World.h"
#include "platformer/util/ResourceHolder.h"

core::Game::Game() :
    mWindow(sf::RenderWindow(sf::VideoMode({1920, 1080}), "Stick Platformer")),
    mWorld(mWindow)
{
}

void core::Game::run()
{
    sf::Clock clock = sf::Clock();
    while (mWindow.isOpen())
    {
        processEvents();
        update(clock.restart());
        render();
    }
}

void core::Game::processEvents()
{
    while (const std::optional event = mWindow.pollEvent())
    {
        if (event->is<sf::Event::Closed>())
        {
            mWindow.close();
        }
    }
}

void core::Game::update(sf::Time dt)
{
    mWorld.update(dt);
}

void core::Game::render()
{
    mWindow.clear();
    mWorld.draw();
    mWindow.display();
}
