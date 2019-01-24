#pragma once
#include <SFML/Graphics.hpp>
// одна из комнат лабиринта
class Room1
{
public:
	Room1(); //конструктор
	void Update(sf::RenderWindow *window);
private:
	sf::RectangleShape R6background; //Этот и следующие компоненты- объекты, которые рисуются на карте
	sf::RectangleShape R6wall_1;
	sf::RectangleShape R6wall_2;
	sf::RectangleShape R6wall_door1;
	sf::RectangleShape R6wall_door2;
};