#pragma once
#include <SFML/Graphics.hpp>

class EndGame
{
public:
	EndGame();
	~EndGame();
	void Update(sf::RenderWindow *window);
private:
	sf::RectangleShape Endbackground;
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