#pragma once
#include <SFML/Graphics.hpp>
// one of the rooms
class RightRoom1
{
public:
	RightRoom1(); //constructor
	void Update(sf::RenderWindow *window); // Drawing walls
private:
	sf::RectangleShape R4background; //This and the following components are objects that are drawn on the map
	sf::RectangleShape R4wall_1;
	sf::RectangleShape R4wall_2;
	sf::RectangleShape R4wall_door1;
	sf::RectangleShape R4wall_door2;
};