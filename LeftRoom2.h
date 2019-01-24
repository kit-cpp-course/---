#pragma once
#include <SFML/Graphics.hpp>
// one of the rooms
class LeftRoom2
{
public:
	LeftRoom2(); //constructor
	void Update(sf::RenderWindow *window); // Drawing walls
private:
	sf::RectangleShape R9background; //This and the following components are objects that are drawn on the map
	sf::RectangleShape R9wall_1;
	sf::RectangleShape R9wall_2;
	sf::RectangleShape R9wall_door1;
	sf::RectangleShape R9wall_door2;
};