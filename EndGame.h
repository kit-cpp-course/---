#pragma once
#include <SFML/Graphics.hpp>
// Комната, где можно либо начать игра заного или закрыть её
class EndGame
{
public:
	EndGame(); //Конструктор класса EndGame
	void Update(sf::RenderWindow *window); // Выресовка стен
private:
	sf::RectangleShape Endbackground; //Этот и следующие компоненты- объекты, которые рисуются на карте
	sf::RectangleShape Endwall_1;
	sf::RectangleShape Endwall_2;
	sf::RectangleShape EndPortal1;
	sf::RectangleShape EndPortal2;
	sf::RectangleShape End1;
	sf::RectangleShape End2;
	sf::RectangleShape End3;
	sf::RectangleShape End4;
	sf::RectangleShape End5;
};