#include "LeftRoom2.h"
#include <SFML/Graphics.hpp>

LeftRoom2::LeftRoom2()
{
	R9background = sf::RectangleShape(sf::Vector2f(1200, 800));
	R9background.setFillColor(sf::Color::White);
	R9background.setPosition(sf::Vector2f(0, 0));

	R9wall_1 = sf::RectangleShape(sf::Vector2f(10, 800));
	R9wall_1.setFillColor(sf::Color::Red);

	R9wall_2 = sf::RectangleShape(sf::Vector2f(1180, 10));
	R9wall_2.setFillColor(sf::Color::Red);

	R9wall_door1 = sf::RectangleShape(sf::Vector2f(60, 10));
	R9wall_door1.setFillColor(sf::Color::White);
	R9wall_door1.setPosition(sf::Vector2f(580, 0));

	R9wall_door2 = sf::RectangleShape(sf::Vector2f(10, 100));
	R9wall_door2.setFillColor(sf::Color::White);
	R9wall_door2.setPosition(sf::Vector2f(1190, 370));
}
void LeftRoom2::Update(sf::RenderWindow *window)
{
	window->draw(R9background);
	R9wall_1.setPosition(sf::Vector2f(0, 0));
	window->draw(R9wall_1);
	R9wall_1.setPosition(sf::Vector2f(1190, 0));
	window->draw(R9wall_1);
	R9wall_2.setPosition(sf::Vector2f(10, 0));
	window->draw(R9wall_2);
	R9wall_2.setPosition(sf::Vector2f(10, 790));
	window->draw(R9wall_2);
	window->draw(R9wall_door1);
	window->draw(R9wall_door2);
}