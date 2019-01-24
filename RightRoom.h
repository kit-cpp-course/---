#pragma once
#include <SFML/Graphics.hpp>
//one of the rooms
class RightRoom
{
public:
	RightRoom(); //constructor
	void Update(sf::RenderWindow *window); // Drawing walls
private:
	sf::RectangleShape R3background; //This and the following components are objects that are drawn on the map
	sf::RectangleShape R3wall_1;
	sf::RectangleShape R3wall_2;
	sf::RectangleShape R3wall_door1;
	sf::RectangleShape R3wall_door2;
};