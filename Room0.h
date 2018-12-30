#pragma once
#include <SFML/Graphics.hpp>
class Room0
{
public:
	Room0();
	~Room0();
	void Update(sf::RenderWindow *window);
private:
	sf::RectangleShape R1background;
	sf::RectangleShape R1wall_1;
	sf::RectangleShape R1wall_2;
	sf::RectangleShape R1wall_door1;
	sf::RectangleShape R1wall_door2;
};