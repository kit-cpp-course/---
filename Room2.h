#pragma once
#include <SFML/Graphics.hpp>
// одна из комнат лабиринта
class Room2
{
public:
	Room2(); //конструктор
	void Update(sf::RenderWindow *window);
private:
	sf::RectangleShape R8background; //Этот и следующие компоненты- объекты, которые рисуются на карте
	sf::RectangleShape R8wall_1;
	sf::RectangleShape R8wall_2;
	sf::RectangleShape R8wall_door1;
	sf::RectangleShape R8wall_door2;
};