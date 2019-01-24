#pragma once
#include <SFML/Graphics.hpp>
// one of the rooms
class Room2
{
public:
	Room2(); //constructor
	void Update(sf::RenderWindow *window); // Drawing walls
private:
	sf::RectangleShape R8background; //This and the following components are objects that are drawn on the map
	sf::RectangleShape R8wall_1;
	sf::RectangleShape R8wall_2;
	sf::RectangleShape R8wall_door1;
	sf::RectangleShape R8wall_door2;
};