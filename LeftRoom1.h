#pragma once
#include <SFML/Graphics.hpp>
// one of the rooms
class LeftRoom1
{
public:
	LeftRoom1(); //constructor
	void Update(sf::RenderWindow *window); // Drawing walls
private:
	sf::RectangleShape R5background; // This and the following components are objects that are drawn on the map
	sf::RectangleShape R5wall_1;
	sf::RectangleShape R5wall_2;
	sf::RectangleShape R5wall_door1;
	sf::RectangleShape R5wall_door2;
};