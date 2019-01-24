#pragma once
#include <SFML/Graphics.hpp>
// одна из комнат лабиринта
class LeftRoom2
{
public:
	LeftRoom2(); //конструктор
	void Update(sf::RenderWindow *window);
private:
	sf::RectangleShape R9background; //Этот и следующие компоненты- объекты, которые рисуются на карте
	sf::RectangleShape R9wall_1;
	sf::RectangleShape R9wall_2;
	sf::RectangleShape R9wall_door1;
	sf::RectangleShape R9wall_door2;
};