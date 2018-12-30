#pragma once
#include <SFML/Graphics.hpp>

class RightRoom2
{
public:
	RightRoom2();
	~RightRoom2();
	void Update(sf::RenderWindow *window);
private:
	sf::RectangleShape R7background;
	sf::RectangleShape R7wall_1;
	sf::RectangleShape R7wall_2;
	sf::RectangleShape R7wall_door1;
	sf::RectangleShape R7wall_door2;
};