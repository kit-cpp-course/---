#pragma once
#include <SFML/Graphics.hpp>
// одна из комнат лабиринта
class LeftRoom
{
public:
	LeftRoom(); //конструктор
	void Update(sf::RenderWindow *window);
private:
	sf::RectangleShape R2background; //Этот и следующие компоненты- объекты, которые рисуются на карте
	sf::RectangleShape R2wall_1;
	sf::RectangleShape R2wall_2;
	sf::RectangleShape R2wall_door1;
	sf::RectangleShape R2wall_door2;
};