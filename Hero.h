#include <SFML/Graphics.hpp>
#pragma once
#include "StartMap.h"
// Class responsible for the movement of the character
class Hero
{
public:
	Hero(); //constructor
	sf::RectangleShape Return_Rshape() { return Rshape; };  //Character movement
	void walking();
	void CheckTransition();
	int counter() { return i; };
	bool CheckWalking(sf::Vector2f Angle1, sf::Vector2f Angle2, float x, float y);
private:
	sf::RectangleShape Rshape;
	int i = 0;
};

