#pragma once
#include <SFML/Graphics.hpp>
// одна из комнат лабиринта
class LeftRoom1
{
public:
	LeftRoom1(); //конструктор
	void Update(sf::RenderWindow *window);
private:
	sf::RectangleShape R5background; //Этот и следующие компоненты- объекты, которые рисуются на карте
	sf::RectangleShape R5wall_1;
	sf::RectangleShape R5wall_2;
	sf::RectangleShape R5wall_door1;
	sf::RectangleShape R5wall_door2;
};