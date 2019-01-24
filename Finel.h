#pragma once
#include <SFML/Graphics.hpp>
// Finel room 
class Finel
{
public:
	Finel(); //constructor
	void Update(sf::RenderWindow *window); // Drawing walls
private:
	sf::RectangleShape R10background; //This and the following components are objects that are drawn on the map
	sf::RectangleShape R10wall_1;
	sf::RectangleShape R10wall_2;
	sf::RectangleShape R10wall_door2;
	sf::RectangleShape Portal1;
	sf::RectangleShape Portal2;
};