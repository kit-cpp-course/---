#pragma once
#include <SFML/Graphics.hpp>
// одна из комнат лабиринта
class RightRoom
{
public:
	RightRoom(); //конструктор
	void Update(sf::RenderWindow *window);
private:
	sf::RectangleShape R3background; //Этот и следующие компоненты- объекты, которые рисуются на карте
	sf::RectangleShape R3wall_1;
	sf::RectangleShape R3wall_2;
	sf::RectangleShape R3wall_door1;
	sf::RectangleShape R3wall_door2;
};