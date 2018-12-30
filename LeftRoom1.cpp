#include "LeftRoom1.h"
#include <SFML/Graphics.hpp>

LeftRoom1::LeftRoom1()
{
	R5background = sf::RectangleShape(sf::Vector2f(1200, 800));
	R5background.setFillColor(sf::Color::White);
	R5background.setPosition(sf::Vector2f(0, 0));

	R5wall_1 = sf::RectangleShape(sf::Vector2f(10, 800));
	R5wall_1.setFillColor(sf::Color::Red);

	R5wall_2 = sf::RectangleShape(sf::Vector2f(1180, 10));
	R5wall_2.setFillColor(sf::Color::Red);

	R5wall_door1 = sf::RectangleShape(sf::Vector2f(60, 10));
	R5wall_door1.setFillColor(sf::Color::White);

	R5wall_door2 = sf::RectangleShape(sf::Vector2f(10, 60));
	R5wall_door2.setFillColor(sf::Color::White);
}
void LeftRoom1::Update(sf::RenderWindow *window)
{
	window->draw(R5background);
	R5wall_1.setPosition(sf::Vector2f(0, 0));
	window->draw(R5wall_1);
	R5wall_1.setPosition(sf::Vector2f(1190, 0));
	window->draw(R5wall_1);
	R5wall_2.setPosition(sf::Vector2f(10, 0));
	window->draw(R5wall_2);
	R5wall_2.setPosition(sf::Vector2f(10, 790));
	window->draw(R5wall_2);
	R5wall_2.setPosition(sf::Vector2f(10, 390));
	window->draw(R5wall_2);
	R5wall_door1.setPosition(sf::Vector2f(580, 0));
	window->draw(R5wall_door1);
	R5wall_door1.setPosition(sf::Vector2f(580, 790));
	window->draw(R5wall_door1);
	R5wall_door2.setPosition(sf::Vector2f(0, 570));
	window->draw(R5wall_door2);
	R5wall_door2.setPosition(sf::Vector2f(1190, 200));
	window->draw(R5wall_door2);

}

LeftRoom1::~LeftRoom1()
{
}