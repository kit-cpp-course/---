#pragma once
#include <SFML/Graphics.hpp>

class RightRoom
{
public:
	RightRoom();
	~RightRoom();
	void Update(sf::RenderWindow *window);
private:
	sf::RectangleShape R3background;
	sf::RectangleShape R3wall_1;
	sf::RectangleShape R3wall_2;
	sf::RectangleShape R3wall_door1;
	sf::RectangleShape R3wall_door2;
};