#pragma once
#include <functional>

#include "platformer/entities/Entity.h"
#include "SFML/System/Time.hpp"

namespace core
{
    struct Command
    {
        std::function<void(entities::Entity&, sf::Time)> action;

        unsigned int category = 0;
    };
}
