#pragma once
#include <SFML/Graphics.hpp>

class LeftRoom2
{
public:
	LeftRoom2();
	~LeftRoom2();
	void Update(sf::RenderWindow *window);
private:
	sf::RectangleShape R9background;
	sf::RectangleShape R9wall_1;
	sf::RectangleShape R9wall_2;
	sf::RectangleShape R9wall_door1;
	sf::RectangleShape R9wall_door2;
};