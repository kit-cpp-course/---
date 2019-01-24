#pragma once
#include <SFML/Graphics.hpp>
//Easter room
class Easter_egg
{
public:
	Easter_egg(); //constructor
	void Update(sf::RenderWindow *window); // Drawing walls
private:
	sf::RectangleShape EEbackground; //This and the following components are objects that are drawn on the map
	sf::RectangleShape EEwall_1;
	sf::RectangleShape EEwall_2;
	sf::RectangleShape EEwall_door2;
	sf::RectangleShape EE1;
	sf::RectangleShape EE2;
	sf::RectangleShape EE3;
	sf::RectangleShape EE4;
	sf::RectangleShape EE5;
	sf::RectangleShape EE6;
	sf::RectangleShape EEPortal1;
	sf::RectangleShape EEPortal2;
};