#include <platformer/entities/Player.h>

entities::Player::Player()
{
    mSprite = sf::CircleShape(100.0f);
    mSprite.setFillColor(sf::Color::Cyan);
    setPosition(sf::Vector2f(0.f, 0.f));
}

void entities::Player::update(sf::Time dt)
{
    //setPosition(sf::Vector2f(getPosition().x + 1, getPosition().y));
}

void entities::Player::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    states.transform *= getTransform();
    target.draw(mSprite, states);
}
