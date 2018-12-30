#include "Room1.h"
#include <SFML/Graphics.hpp>

Room1::Room1()
{
	R6background = sf::RectangleShape(sf::Vector2f(1200, 800));
	R6background.setFillColor(sf::Color::White);
	R6background.setPosition(sf::Vector2f(0, 0));

	R6wall_1 = sf::RectangleShape(sf::Vector2f(10, 800));
	R6wall_1.setFillColor(sf::Color::Red);

	R6wall_2 = sf::RectangleShape(sf::Vector2f(1180, 10));
	R6wall_2.setFillColor(sf::Color::Red);

	R6wall_door1 = sf::RectangleShape(sf::Vector2f(60, 10));
	R6wall_door1.setFillColor(sf::Color::White);
	R6wall_door1.setPosition(sf::Vector2f(580, 790));

	R6wall_door2 = sf::RectangleShape(sf::Vector2f(10, 60));
	R6wall_door2.setFillColor(sf::Color::White);

}
void Room1::Update(sf::RenderWindow *window)
{
	window->draw(R6background);
	R6wall_1.setPosition(sf::Vector2f(0, 0));
	window->draw(R6wall_1);
	R6wall_1.setPosition(sf::Vector2f(1190, 0));
	window->draw(R6wall_1);
	R6wall_2.setPosition(sf::Vector2f(10, 0));
	window->draw(R6wall_2);
	R6wall_2.setPosition(sf::Vector2f(10, 790));
	window->draw(R6wall_2);
	window->draw(R6wall_door1);
	R6wall_door2.setPosition(sf::Vector2f(0, 200));
	window->draw(R6wall_door2);
	R6wall_door2.setPosition(sf::Vector2f(1190, 695));
	window->draw(R6wall_door2);
}

Room1::~Room1()
{
}
