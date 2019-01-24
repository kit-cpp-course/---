#include "StartMap.h"
#include <SFML/Graphics.hpp>

StartMap::StartMap()
{
	Rbackground = sf::RectangleShape(sf::Vector2f(1200, 800));
	Rbackground.setFillColor(sf::Color::White);
	Rbackground.setPosition(sf::Vector2f(0, 0));

	Rwall_1 = sf::RectangleShape(sf::Vector2f(10, 800));
	Rwall_1.setFillColor(sf::Color::Red);

	Rwall_2 = sf::RectangleShape(sf::Vector2f(1180, 10));
	Rwall_2.setFillColor(sf::Color::Red);

	Rwall_door = sf::RectangleShape(sf::Vector2f(60, 10));
	Rwall_door.setFillColor(sf::Color::White);
	Rwall_door.setPosition(sf::Vector2f(580, 790));
}
void StartMap::Update(sf::RenderWindow *window)
{
	window->draw(Rbackground);
	Rwall_1.setPosition(sf::Vector2f(0, 0));
	window->draw(Rwall_1);
	Rwall_1.setPosition(sf::Vector2f(1190, 0));
	window->draw(Rwall_1);
	Rwall_2.setPosition(sf::Vector2f(10, 0));
	window->draw(Rwall_2);
	Rwall_2.setPosition(sf::Vector2f(10, 790));
	window->draw(Rwall_2);
	window->draw(Rwall_door);
}