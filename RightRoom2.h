#pragma once
#include <SFML/Graphics.hpp>
// одна из комнат лабиринта
class RightRoom2
{
public:
	RightRoom2(); //конструктор
	void Update(sf::RenderWindow *window);
private:
	sf::RectangleShape R7background; //Этот и следующие компоненты- объекты, которые рисуются на карте
	sf::RectangleShape R7wall_1;
	sf::RectangleShape R7wall_2;
	sf::RectangleShape R7wall_door1;
	sf::RectangleShape R7wall_door2;
};