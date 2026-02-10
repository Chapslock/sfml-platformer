#include <iostream>
#include <platformer/core/World.h>

#include "platformer/entities/Player.h"

core::World::World(sf::RenderWindow& window)
    : mWindow(window)
{
    loadTextures();
    buildScene();
}

void core::World::update(sf::Time dt)
{
    for (auto& entity: mSceneObjects)
    {
        entity->update(dt);
    }
}

void core::World::draw()
{
    for (std::unique_ptr<entities::Entity>& entity : mSceneObjects)
    {
        mWindow.draw(*entity);
    }
}

void core::World::loadTextures()
{
}

void core::World::buildScene()
{
    mSceneObjects.push_back(std::make_unique<entities::Player>());
}
