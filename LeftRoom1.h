#pragma once
#include <SFML/Graphics.hpp>

class LeftRoom1
{
public:
	LeftRoom1();
	~LeftRoom1();
	void Update(sf::RenderWindow *window);
private:
	sf::RectangleShape R5background;
	sf::RectangleShape R5wall_1;
	sf::RectangleShape R5wall_2;
	sf::RectangleShape R5wall_door1;
	sf::RectangleShape R5wall_door2;
};