#pragma once
#include <SFML/Graphics.hpp>
class Room2
{
public:
	Room2();
	~Room2();
	void Update(sf::RenderWindow *window);
private:
	sf::RectangleShape R8background;
	sf::RectangleShape R8wall_1;
	sf::RectangleShape R8wall_2;
	sf::RectangleShape R8wall_door1;
	sf::RectangleShape R8wall_door2;
};