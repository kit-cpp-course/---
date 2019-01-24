#pragma once
#include <SFML/Graphics.hpp>
// A room where you can start the game again or close it
class EndGame
{
public:
	EndGame(); //constructor
	void Update(sf::RenderWindow *window); // Drawing walls
private:
	sf::RectangleShape Endbackground; //This and the following components are objects that are drawn on the map
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