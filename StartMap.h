#include <SFML/Graphics.hpp>
#pragma once
class StartMap
{
public:
	StartMap();
	~StartMap();
	void Update(sf::RenderWindow *window);
private:
	sf::RectangleShape Rbackground;
	sf::RectangleShape Rwall_1;
	sf::RectangleShape Rwall_2;
	sf::RectangleShape Rwall_door;

};