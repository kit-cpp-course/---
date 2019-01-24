#include "Room2.h"
#include <SFML/Graphics.hpp>

Room2::Room2()
{
	R8background = sf::RectangleShape(sf::Vector2f(1200, 800));
	R8background.setFillColor(sf::Color::White);
	R8background.setPosition(sf::Vector2f(0, 0));

	R8wall_1 = sf::RectangleShape(sf::Vector2f(10, 800));
	R8wall_1.setFillColor(sf::Color::Red);

	R8wall_2 = sf::RectangleShape(sf::Vector2f(1180, 10));
	R8wall_2.setFillColor(sf::Color::Red);

	R8wall_door1 = sf::RectangleShape(sf::Vector2f(60, 10));
	R8wall_door1.setFillColor(sf::Color::White);
	R8wall_door1.setPosition(sf::Vector2f(580, 0));

	R8wall_door2 = sf::RectangleShape(sf::Vector2f(10, 100));
	R8wall_door2.setFillColor(sf::Color::White);

}
void Room2::Update(sf::RenderWindow *window)
{
	window->draw(R8background);
	R8wall_1.setPosition(sf::Vector2f(0, 0));
	window->draw(R8wall_1);
	R8wall_1.setPosition(sf::Vector2f(1190, 0));
	window->draw(R8wall_1);
	R8wall_2.setPosition(sf::Vector2f(10, 0));
	window->draw(R8wall_2);
	R8wall_2.setPosition(sf::Vector2f(10, 790));
	window->draw(R8wall_2);
	R8wall_2.setPosition(sf::Vector2f(10, 290));
	window->draw(R8wall_2);
	window->draw(R8wall_door1);
	R8wall_door2.setPosition(sf::Vector2f(0, 370));
	window->draw(R8wall_door2);
	R8wall_door2.setPosition(sf::Vector2f(1190, 370));
	window->draw(R8wall_door2);
}