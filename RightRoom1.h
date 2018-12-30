#pragma once
#include <SFML/Graphics.hpp>

class RightRoom1
{
public:
	RightRoom1();
	~RightRoom1();
	void Update(sf::RenderWindow *window);
private:
	sf::RectangleShape R4background;
	sf::RectangleShape R4wall_1;
	sf::RectangleShape R4wall_2;
	sf::RectangleShape R4wall_door1;
	sf::RectangleShape R4wall_door2;
};