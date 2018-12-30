#include "RightRoom2.h"
#include <SFML/Graphics.hpp>

RightRoom2::RightRoom2()
{
	R7background = sf::RectangleShape(sf::Vector2f(1200, 800));
	R7background.setFillColor(sf::Color::White);
	R7background.setPosition(sf::Vector2f(0, 0));

	R7wall_1 = sf::RectangleShape(sf::Vector2f(10, 800));
	R7wall_1.setFillColor(sf::Color::Red);

	R7wall_2 = sf::RectangleShape(sf::Vector2f(1180, 10));
	R7wall_2.setFillColor(sf::Color::Red);

	R7wall_door1 = sf::RectangleShape(sf::Vector2f(60, 10));
	R7wall_door1.setFillColor(sf::Color::White);
	R7wall_door1.setPosition(sf::Vector2f(580, 0));

	R7wall_door2 = sf::RectangleShape(sf::Vector2f(10, 100));
	R7wall_door2.setFillColor(sf::Color::White);
	R7wall_door2.setPosition(sf::Vector2f(0, 370));
}
void RightRoom2::Update(sf::RenderWindow *window)
{
	window->draw(R7background);
	R7wall_1.setPosition(sf::Vector2f(0, 0));
	window->draw(R7wall_1);
	R7wall_1.setPosition(sf::Vector2f(1190, 0));
	window->draw(R7wall_1);
	R7wall_2.setPosition(sf::Vector2f(10, 0));
	window->draw(R7wall_2);
	R7wall_2.setPosition(sf::Vector2f(10, 790));
	window->draw(R7wall_2);
	window->draw(R7wall_door1);
	window->draw(R7wall_door2);
}

RightRoom2::~RightRoom2()
{
}