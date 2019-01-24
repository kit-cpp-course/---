#pragma once
#include <SFML/Graphics.hpp>
// одна из комнат лабиринта
class RightRoom1
{
public:
	RightRoom1(); //конструктор
	void Update(sf::RenderWindow *window);
private:
	sf::RectangleShape R4background; //Этот и следующие компоненты- объекты, которые рисуются на карте
	sf::RectangleShape R4wall_1;
	sf::RectangleShape R4wall_2;
	sf::RectangleShape R4wall_door1;
	sf::RectangleShape R4wall_door2;
};