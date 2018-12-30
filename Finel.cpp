#include "Finel.h"
#include <SFML/Graphics.hpp>

Finel::Finel()
{
	R10background = sf::RectangleShape(sf::Vector2f(1200, 800));
	R10background.setFillColor(sf::Color::White);
	R10background.setPosition(sf::Vector2f(0, 0));

	R10wall_1 = sf::RectangleShape(sf::Vector2f(10, 800));
	R10wall_1.setFillColor(sf::Color::Yellow);

	R10wall_2 = sf::RectangleShape(sf::Vector2f(1180, 10));
	R10wall_2.setFillColor(sf::Color::Yellow);

	R10wall_door2 = sf::RectangleShape(sf::Vector2f(10, 100));
	R10wall_door2.setFillColor(sf::Color::White);
	R10wall_door2.setPosition(sf::Vector2f(1190, 370));

	Portal1 = sf::RectangleShape(sf::Vector2f(40, 10));
	Portal1.setFillColor(sf::Color::Black);

	Portal2 = sf::RectangleShape(sf::Vector2f(10, 80));
	Portal2.setFillColor(sf::Color::Black);
}
void Finel::Update(sf::RenderWindow *window)
{
	window->draw(R10background);
	R10wall_1.setPosition(sf::Vector2f(0, 0));
	window->draw(R10wall_1);
	R10wall_1.setPosition(sf::Vector2f(1190, 0));
	window->draw(R10wall_1);
	R10wall_2.setPosition(sf::Vector2f(10, 0));
	window->draw(R10wall_2);
	R10wall_2.setPosition(sf::Vector2f(10, 790));
	window->draw(R10wall_2);
	window->draw(R10wall_door2);
	Portal1.setPosition(sf::Vector2f(580, 370));
	window->draw(Portal1);
	Portal1.setPosition(sf::Vector2f(580, 440));
	window->draw(Portal1);
	Portal2.setPosition(sf::Vector2f(570, 370));
	window->draw(Portal2);
	Portal2.setPosition(sf::Vector2f(620, 370));
	window->draw(Portal2);
}

Finel::~Finel()
{
}