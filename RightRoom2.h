#pragma once
#include <SFML/Graphics.hpp>
// one of the rooms
class RightRoom2
{
public:
	RightRoom2(); //constructor
	void Update(sf::RenderWindow *window); // Drawing walls
private:
	sf::RectangleShape R7background; //This and the following components are objects that are drawn on the map
	sf::RectangleShape R7wall_1;
	sf::RectangleShape R7wall_2;
	sf::RectangleShape R7wall_door1;
	sf::RectangleShape R7wall_door2;
};