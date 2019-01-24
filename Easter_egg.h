#pragma once
#include <SFML/Graphics.hpp>
//пасхальная комната
class Easter_egg
{
public:
	Easter_egg(); //Конструктор Easter_egg
	void Update(sf::RenderWindow *window);
private:
	sf::RectangleShape EEbackground; //Этот и следующие компоненты- объекты, которые рисуются на карте
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