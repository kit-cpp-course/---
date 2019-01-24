#include "RightRoom1.h"
#include <SFML/Graphics.hpp>

RightRoom1::RightRoom1()
{
	R4background = sf::RectangleShape(sf::Vector2f(1200, 800));
	R4background.setFillColor(sf::Color::White);
	R4background.setPosition(sf::Vector2f(0, 0));

	R4wall_1 = sf::RectangleShape(sf::Vector2f(10, 800));
	R4wall_1.setFillColor(sf::Color::Red);

	R4wall_2 = sf::RectangleShape(sf::Vector2f(1180, 10));
	R4wall_2.setFillColor(sf::Color::Red);

	R4wall_door1 = sf::RectangleShape(sf::Vector2f(60, 10));
	R4wall_door1.setFillColor(sf::Color::White);

	R4wall_door2 = sf::RectangleShape(sf::Vector2f(10, 60));
	R4wall_door2.setFillColor(sf::Color::White);
	R4wall_door2.setPosition(sf::Vector2f(0, 695));

}
void RightRoom1::Update(sf::RenderWindow *window)
{
	window->draw(R4background);
	R4wall_1.setPosition(sf::Vector2f(0, 0));
	window->draw(R4wall_1);
	R4wall_1.setPosition(sf::Vector2f(1190, 0));
	window->draw(R4wall_1);
	R4wall_2.setPosition(sf::Vector2f(10, 0));
	window->draw(R4wall_2);
	R4wall_2.setPosition(sf::Vector2f(10, 650));
	window->draw(R4wall_2);
	R4wall_2.setPosition(sf::Vector2f(10, 790));
	window->draw(R4wall_2);
	R4wall_door1.setPosition(sf::Vector2f(580, 0));
	window->draw(R4wall_door1);
	R4wall_door1.setPosition(sf::Vector2f(580, 790));
	window->draw(R4wall_door1);
	window->draw(R4wall_door2);
}