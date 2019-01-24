#pragma once
#include <SFML/Graphics.hpp>
// one of the rooms
class LeftRoom
{
public:
	LeftRoom(); //constructor
	void Update(sf::RenderWindow *window); // Drawing walls
private:
	sf::RectangleShape R2background; //This and the following components are objects that are drawn on the map
	sf::RectangleShape R2wall_1;
	sf::RectangleShape R2wall_2;
	sf::RectangleShape R2wall_door1;
	sf::RectangleShape R2wall_door2;
};