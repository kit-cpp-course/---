#include <SFML/Graphics.hpp>
#pragma once
// Start room
class StartMap
{
public:
	StartMap(); //constructor
	void Update(sf::RenderWindow *window); // Drawing walls
private:
	sf::RectangleShape Rbackground; //This and the following components are objects that are drawn on the map
	sf::RectangleShape Rwall_1;
	sf::RectangleShape Rwall_2;
	sf::RectangleShape Rwall_door;
};