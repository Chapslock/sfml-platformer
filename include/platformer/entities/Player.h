#pragma once
#include "Entity.h"


namespace entities
{
    class Player : public Entity
    {
    public:
        Player();
        virtual void update(sf::Time dt) override;
        virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
    private:
        sf::CircleShape mSprite;
    };
}
