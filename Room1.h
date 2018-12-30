#pragma once
#include <SFML/Graphics.hpp>
class Room1
{
public:
	Room1();
	~Room1();
	void Update(sf::RenderWindow *window);
private:
	sf::RectangleShape R6background;
	sf::RectangleShape R6wall_1;
	sf::RectangleShape R6wall_2;
	sf::RectangleShape R6wall_door1;
	sf::RectangleShape R6wall_door2;
};