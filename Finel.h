#pragma once
#include <SFML/Graphics.hpp>
// Финальная комната 
class Finel
{
public:
	Finel(); //конструктор
	void Update(sf::RenderWindow *window);
private:
	sf::RectangleShape R10background; //Этот и следующие компоненты- объекты, которые рисуются на карте
	sf::RectangleShape R10wall_1;
	sf::RectangleShape R10wall_2;
	sf::RectangleShape R10wall_door2;
	sf::RectangleShape Portal1;
	sf::RectangleShape Portal2;
};