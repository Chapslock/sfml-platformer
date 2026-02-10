#pragma once
#include <SFML/Graphics.hpp>


namespace entities
{
    class Entity: public sf::Drawable, public sf::Transformable
    {
    public:
        virtual ~Entity() = default;
        virtual void update(sf::Time dt) = 0;
    protected:
        virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const override = 0;
    };
}
