#pragma once
#include <SFML/Graphics.hpp>
// one of the rooms
class Room1
{
public:
	Room1(); //constructor
	void Update(sf::RenderWindow *window); // Drawing walls
private:
	sf::RectangleShape R6background; //This and the following components are objects that are drawn on the map
	sf::RectangleShape R6wall_1;
	sf::RectangleShape R6wall_2;
	sf::RectangleShape R6wall_door1;
	sf::RectangleShape R6wall_door2;
};