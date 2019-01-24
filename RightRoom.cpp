#include "RightRoom.h"
#include <SFML/Graphics.hpp>

RightRoom::RightRoom()
{
	R3background = sf::RectangleShape(sf::Vector2f(1200, 800));
	R3background.setFillColor(sf::Color::White);
	R3background.setPosition(sf::Vector2f(0, 0));

	R3wall_1 = sf::RectangleShape(sf::Vector2f(10, 800));
	R3wall_1.setFillColor(sf::Color::Red);

	R3wall_2 = sf::RectangleShape(sf::Vector2f(1180, 10));
	R3wall_2.setFillColor(sf::Color::Red);

	R3wall_door1 = sf::RectangleShape(sf::Vector2f(60, 10));
	R3wall_door1.setFillColor(sf::Color::White);
	R3wall_door1.setPosition(sf::Vector2f(580, 790));

	R3wall_door2 = sf::RectangleShape(sf::Vector2f(10, 100));
	R3wall_door2.setFillColor(sf::Color::White);
	R3wall_door2.setPosition(sf::Vector2f(0, 370));
}
void RightRoom::Update(sf::RenderWindow *window)
{
	window->draw(R3background);
	R3wall_1.setPosition(sf::Vector2f(0, 0));
	window->draw(R3wall_1);
	R3wall_1.setPosition(sf::Vector2f(1190, 0));
	window->draw(R3wall_1);
	R3wall_2.setPosition(sf::Vector2f(10, 0));
	window->draw(R3wall_2);
	R3wall_2.setPosition(sf::Vector2f(10, 790));
	window->draw(R3wall_2);
	window->draw(R3wall_door1);
	window->draw(R3wall_door2);
}