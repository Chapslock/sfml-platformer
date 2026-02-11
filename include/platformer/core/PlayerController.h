#pragma once
#include <map>

#include "Command.h"
#include "CommandQueue.h"
#include "SFML/Window/Keyboard.hpp"

namespace core
{
    class PlayerController
    {
    public:
        PlayerController();
        void handleEvent(const sf::Event& event, CommandQueue& commands);
        void handleRealtimeInput(CommandQueue& commands);
    private:
        std::map<sf::Keyboard::Key, Command> mKeyBindings;
    };
}
