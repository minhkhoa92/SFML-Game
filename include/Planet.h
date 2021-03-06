// Planet.h
// Author: Michael Kotzjan

#ifndef PLANET_H_
#define PLANET_H_

#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>
#include "Object.h"

// A Planet
class Planet : public sf::CircleShape, public Object
{
  public:
    double size;
    sf::Vector2f velocity;

    // Constructor
    Planet();

    // Set position
    void setPos(sf::Vector2f pos);

    // Set the mass
    void setMass(double m);

    // Set veloctity
    void setVelo(sf::Vector2f velo);
    
    // Update the planet
    void update();
    
    // Draw the planet
    void draw(sf::RenderWindow& window);
};

#endif // PLANET_H_
