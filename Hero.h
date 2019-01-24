#include <SFML/Graphics.hpp>
#pragma once
#include "StartMap.h"
// Класс отвечающий за передвижения персонажа
class Hero
{
public:
	Hero(); //конструктор
	sf::RectangleShape Return_Rshape() { return Rshape; };  //Передвижение персонажа
	void walking();
	void CheckTransition();
	int counter() { return i; };
	bool CheckWalking(sf::Vector2f Angle1, sf::Vector2f Angle2, float x, float y);
private:
	sf::RectangleShape Rshape;
	int i = 0;
};

