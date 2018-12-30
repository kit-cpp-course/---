#include "Easter_egg.h"
#include <SFML/Graphics.hpp>

Easter_egg::Easter_egg()
{
	EEbackground = sf::RectangleShape(sf::Vector2f(1200, 800));
	EEbackground.setFillColor(sf::Color::Cyan);
	EEbackground.setPosition(sf::Vector2f(0, 0));

	EEwall_1 = sf::RectangleShape(sf::Vector2f(10, 800));
	EEwall_1.setFillColor(sf::Color::Magenta);

	EEwall_2 = sf::RectangleShape(sf::Vector2f(1180, 10));
	EEwall_2.setFillColor(sf::Color::Magenta);

	EEwall_door2 = sf::RectangleShape(sf::Vector2f(10, 60));
	EEwall_door2.setFillColor(sf::Color::Cyan);
	EEwall_door2.setPosition(sf::Vector2f(0, 100));

	EE1 = sf::RectangleShape(sf::Vector2f(10, 70));
	EE1.setFillColor(sf::Color::Yellow);

	EE2 = sf::RectangleShape(sf::Vector2f(30, 10));
	EE2.setFillColor(sf::Color::Yellow);

	EE3 = sf::RectangleShape(sf::Vector2f(10, 30));
	EE3.setFillColor(sf::Color::Yellow);

	EE4 = sf::RectangleShape(sf::Vector2f(10, 10));
	EE4.setFillColor(sf::Color::Yellow);

	EE5 = sf::RectangleShape(sf::Vector2f(10, 20));
	EE5.setFillColor(sf::Color::Yellow);

	EE6 = sf::RectangleShape(sf::Vector2f(15, 10));
	EE6.setFillColor(sf::Color::Yellow);

	EEPortal1 = sf::RectangleShape(sf::Vector2f(40, 10));
	EEPortal1.setFillColor(sf::Color::Black);

	EEPortal2 = sf::RectangleShape(sf::Vector2f(10, 80));
	EEPortal2.setFillColor(sf::Color::Black);
}
void Easter_egg::Update(sf::RenderWindow *window)
{
	window->draw(EEbackground);
	EEwall_1.setPosition(sf::Vector2f(0, 0));
	window->draw(EEwall_1);
	EEwall_1.setPosition(sf::Vector2f(1190, 0));
	window->draw(EEwall_1);
	EEwall_2.setPosition(sf::Vector2f(10, 0));
	window->draw(EEwall_2);
	EEwall_2.setPosition(sf::Vector2f(10, 790));
	window->draw(EEwall_2);
	window->draw(EEwall_door2);
	EEPortal1.setPosition(sf::Vector2f(1130, 700));
	window->draw(EEPortal1);
	EEPortal1.setPosition(sf::Vector2f(1130, 770));
	window->draw(EEPortal1);
	EEPortal2.setPosition(sf::Vector2f(1120, 700));
	window->draw(EEPortal2);
	EEPortal2.setPosition(sf::Vector2f(1170, 700));
	window->draw(EEPortal2);
	EE1.setPosition(sf::Vector2f(570, 10));
	window->draw(EE1);
	EE2.setPosition(sf::Vector2f(580, 10));
	window->draw(EE2);
	EE2.setPosition(sf::Vector2f(580, 40));
	window->draw(EE2);
	EE2.setPosition(sf::Vector2f(580, 70));
	window->draw(EE2);
	EE4.setPosition(sf::Vector2f(590, 91));
	window->draw(EE4);
	EE3.setPosition(sf::Vector2f(580, 101));
	window->draw(EE3);
	EE3.setPosition(sf::Vector2f(570, 131));
	window->draw(EE3);
	EE4.setPosition(sf::Vector2f(590, 121));
	window->draw(EE4);
	EE3.setPosition(sf::Vector2f(600, 101));
	window->draw(EE3);
	EE3.setPosition(sf::Vector2f(610, 131));
	window->draw(EE3);
	EE2.setPosition(sf::Vector2f(580, 172));
	window->draw(EE2);
	EE4.setPosition(sf::Vector2f(570, 172));
	window->draw(EE4);
	EE5.setPosition(sf::Vector2f(570, 182));
	window->draw(EE5);
	EE2.setPosition(sf::Vector2f(580, 202));
	window->draw(EE2);
	EE4.setPosition(sf::Vector2f(570, 202));
	window->draw(EE4);
	EE5.setPosition(sf::Vector2f(600, 212));
	window->draw(EE5);
	EE2.setPosition(sf::Vector2f(580, 232));
	window->draw(EE2);
	EE4.setPosition(sf::Vector2f(570, 232));
	window->draw(EE4);
	EE1.setPosition(sf::Vector2f(585, 253));
	window->draw(EE1);
	EE6.setPosition(sf::Vector2f(570, 253));
	window->draw(EE6);
	EE6.setPosition(sf::Vector2f(595, 253));
	window->draw(EE6);
	EE1.setPosition(sf::Vector2f(570, 334));
	window->draw(EE1);
	EE2.setPosition(sf::Vector2f(580, 334));
	window->draw(EE2);
	EE2.setPosition(sf::Vector2f(580, 364));
	window->draw(EE2);
	EE2.setPosition(sf::Vector2f(580, 394));
	window->draw(EE2);
	EE1.setPosition(sf::Vector2f(570, 415));
	window->draw(EE1);
	EE2.setPosition(sf::Vector2f(580, 415));
	window->draw(EE2);
	EE2.setPosition(sf::Vector2f(580, 445));
	window->draw(EE2);
	EE4.setPosition(sf::Vector2f(600, 455));
	window->draw(EE4);
	EE4.setPosition(sf::Vector2f(600, 465));
	window->draw(EE4);
	EE4.setPosition(sf::Vector2f(600, 435));
	window->draw(EE4);
	EE4.setPosition(sf::Vector2f(600, 425));
	window->draw(EE4);
	EE4.setPosition(sf::Vector2f(600, 475));
	window->draw(EE4);
	EE1.setPosition(sf::Vector2f(570, 545));
	window->draw(EE1);
	EE2.setPosition(sf::Vector2f(580, 545));
	window->draw(EE2);
	EE2.setPosition(sf::Vector2f(580, 575));
	window->draw(EE2);
	EE2.setPosition(sf::Vector2f(580, 605));
	window->draw(EE2);
	EE2.setPosition(sf::Vector2f(580, 626));
	window->draw(EE2);
	EE4.setPosition(sf::Vector2f(570, 626));
	window->draw(EE4);
	EE5.setPosition(sf::Vector2f(570, 636));
	window->draw(EE5);
	EE2.setPosition(sf::Vector2f(580, 656));
	window->draw(EE2);
	EE4.setPosition(sf::Vector2f(570, 656));
	window->draw(EE4);
	EE5.setPosition(sf::Vector2f(600, 666));
	window->draw(EE5);
	EE2.setPosition(sf::Vector2f(580, 686));
	window->draw(EE2);
	EE4.setPosition(sf::Vector2f(570, 686));
	window->draw(EE4);
	EE5.setPosition(sf::Vector2f(600, 636));
	window->draw(EE5);
	EE2.setPosition(sf::Vector2f(580, 707));
	window->draw(EE2);
	EE4.setPosition(sf::Vector2f(570, 707));
	window->draw(EE4);
	EE5.setPosition(sf::Vector2f(570, 717));
	window->draw(EE5);
	EE2.setPosition(sf::Vector2f(580, 737));
	window->draw(EE2);
	EE4.setPosition(sf::Vector2f(570, 737));
	window->draw(EE4);
	EE5.setPosition(sf::Vector2f(600, 747));
	window->draw(EE5);
	EE2.setPosition(sf::Vector2f(580, 767));
	window->draw(EE2);
	EE4.setPosition(sf::Vector2f(570, 767));
	window->draw(EE4);
	EE5.setPosition(sf::Vector2f(600, 717));
	window->draw(EE5);
}

Easter_egg::~Easter_egg()
{
}