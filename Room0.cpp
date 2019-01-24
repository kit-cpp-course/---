#include "Room0.h"
#include <SFML/Graphics.hpp>

Room0::Room0()
{
	R1background = sf::RectangleShape(sf::Vector2f(1200, 800));
	R1background.setFillColor(sf::Color::White);
	R1background.setPosition(sf::Vector2f(0, 0));

	R1wall_1 = sf::RectangleShape(sf::Vector2f(10, 800));
	R1wall_1.setFillColor(sf::Color::Red);

	R1wall_2 = sf::RectangleShape(sf::Vector2f(1180, 10));
	R1wall_2.setFillColor(sf::Color::Red);

	R1wall_door1 = sf::RectangleShape(sf::Vector2f(60, 10));
	R1wall_door1.setFillColor(sf::Color::White);
	R1wall_door1.setPosition(sf::Vector2f(580, 0));

	R1wall_door2 = sf::RectangleShape(sf::Vector2f(10, 100));
	R1wall_door2.setFillColor(sf::Color::White);

}
void Room0::Update(sf::RenderWindow *window)
{
	window->draw(R1background);
	R1wall_1.setPosition(sf::Vector2f(0, 0));
	window->draw(R1wall_1);
	R1wall_1.setPosition(sf::Vector2f(1190, 0));
	window->draw(R1wall_1);
	R1wall_2.setPosition(sf::Vector2f(10, 0));
	window->draw(R1wall_2);
	R1wall_2.setPosition(sf::Vector2f(10, 790));
	window->draw(R1wall_2);
	window->draw(R1wall_door1);
	R1wall_door2.setPosition(sf::Vector2f(0, 370));
	window->draw(R1wall_door2);
	R1wall_door2.setPosition(sf::Vector2f(1190, 370));
	window->draw(R1wall_door2);
}