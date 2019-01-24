#include <SFML/Graphics.hpp>
#pragma once
// Начальная комната
class StartMap
{
public:
	StartMap(); //конструктор
	void Update(sf::RenderWindow *window);
private:
	sf::RectangleShape Rbackground; //Этот и следующие компоненты- объекты, которые рисуются на карте
	sf::RectangleShape Rwall_1;
	sf::RectangleShape Rwall_2;
	sf::RectangleShape Rwall_door;
};