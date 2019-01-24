#pragma once
#include <SFML/Graphics.hpp>
//one of the rooms
class Room0
{
public:
	Room0(); //constructor
	void Update(sf::RenderWindow *window); // Drawing walls
private:
	sf::RectangleShape R1background; //This and the following components are objects that are drawn on the map
	sf::RectangleShape R1wall_1;
	sf::RectangleShape R1wall_2;
	sf::RectangleShape R1wall_door1;
	sf::RectangleShape R1wall_door2;
};