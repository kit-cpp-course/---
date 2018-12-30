#include "LeftRoom.h"
#include <SFML/Graphics.hpp>

LeftRoom::LeftRoom()
{
	R2background = sf::RectangleShape(sf::Vector2f(1200, 800));
	R2background.setFillColor(sf::Color::White);
	R2background.setPosition(sf::Vector2f(0, 0));

	R2wall_1 = sf::RectangleShape(sf::Vector2f(10, 800));
	R2wall_1.setFillColor(sf::Color::Red);

	R2wall_2 = sf::RectangleShape(sf::Vector2f(1180, 10));
	R2wall_2.setFillColor(sf::Color::Red);

	R2wall_door1 = sf::RectangleShape(sf::Vector2f(60, 10));
	R2wall_door1.setFillColor(sf::Color::White);
	R2wall_door1.setPosition(sf::Vector2f(580, 790));

	R2wall_door2 = sf::RectangleShape(sf::Vector2f(10, 100));
	R2wall_door2.setFillColor(sf::Color::White);
	R2wall_door2.setPosition(sf::Vector2f(1190, 370));
}
void LeftRoom::Update(sf::RenderWindow *window)
{
	window->draw(R2background);
	R2wall_1.setPosition(sf::Vector2f(0, 0));
	window->draw(R2wall_1);
	R2wall_1.setPosition(sf::Vector2f(1190, 0));
	window->draw(R2wall_1);
	R2wall_2.setPosition(sf::Vector2f(10, 0));
	window->draw(R2wall_2);
	R2wall_2.setPosition(sf::Vector2f(10, 790));
	window->draw(R2wall_2);
	window->draw(R2wall_door1);
	window->draw(R2wall_door2);
}

LeftRoom::~LeftRoom()
{
}