#pragma once
#include <SFML/Graphics.hpp>

class LeftRoom
{
public:
	LeftRoom();
	~LeftRoom();
	void Update(sf::RenderWindow *window);
private:
	sf::RectangleShape R2background;
	sf::RectangleShape R2wall_1;
	sf::RectangleShape R2wall_2;
	sf::RectangleShape R2wall_door1;
	sf::RectangleShape R2wall_door2;
};