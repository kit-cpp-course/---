#pragma once
#include <SFML/Graphics.hpp>

class Finel
{
public:
	Finel();
	~Finel();
	void Update(sf::RenderWindow *window);
private:
	sf::RectangleShape R10background;
	sf::RectangleShape R10wall_1;
	sf::RectangleShape R10wall_2;
	sf::RectangleShape R10wall_door2;
	sf::RectangleShape Portal1;
	sf::RectangleShape Portal2;
};