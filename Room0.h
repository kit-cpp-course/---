#pragma once
#include <SFML/Graphics.hpp>
// одна из комнат лабиринта
class Room0
{
public:
	Room0(); //конструктор
	void Update(sf::RenderWindow *window);
private:
	sf::RectangleShape R1background; //Этот и следующие компоненты- объекты, которые рисуются на карте
	sf::RectangleShape R1wall_1;
	sf::RectangleShape R1wall_2;
	sf::RectangleShape R1wall_door1;
	sf::RectangleShape R1wall_door2;
};