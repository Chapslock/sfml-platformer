#include <platformer/core/PlayerController.h>

core::PlayerController::PlayerController()
{
    mKeyBindings[sf::Keyboard::Key::A] = Command {
        [](entities::Entity& e, sf::Time dt) { e.move(sf::Vector2f(-1.f, 0));}
    };

    mKeyBindings[sf::Keyboard::Key::D] = Command {

    };
}

void core::PlayerController::handleEvent(const sf::Event& event, CommandQueue& commands)
{
}

void core::PlayerController::handleRealtimeInput(CommandQueue& commands)
{
}
