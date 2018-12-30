#include "EndGame.h"
#include <SFML/Graphics.hpp>

EndGame::EndGame()
{
	Endbackground = sf::RectangleShape(sf::Vector2f(1200, 800));
	Endbackground.setFillColor(sf::Color::Magenta);
	Endbackground.setPosition(sf::Vector2f(0, 0));

	Endwall_1 = sf::RectangleShape(sf::Vector2f(10, 800));
	Endwall_1.setFillColor(sf::Color::Red);

	Endwall_2 = sf::RectangleShape(sf::Vector2f(1180, 10));
	Endwall_2.setFillColor(sf::Color::Red);

	EndPortal1 = sf::RectangleShape(sf::Vector2f(40, 10));
	EndPortal1.setFillColor(sf::Color::Black);

	EndPortal2 = sf::RectangleShape(sf::Vector2f(10, 80));
	EndPortal2.setFillColor(sf::Color::Black);

	End1 = sf::RectangleShape(sf::Vector2f(10, 50));
	End1.setFillColor(sf::Color::Yellow);

	End2 = sf::RectangleShape(sf::Vector2f(10, 10));
	End2.setFillColor(sf::Color::Yellow);

	End3 = sf::RectangleShape(sf::Vector2f(10, 20));
	End3.setFillColor(sf::Color::Yellow);

	End4 = sf::RectangleShape(sf::Vector2f(20, 10));
	End4.setFillColor(sf::Color::Yellow);

	End5 = sf::RectangleShape(sf::Vector2f(10, 30));
	End5.setFillColor(sf::Color::Yellow);
}
void EndGame::Update(sf::RenderWindow *window)
{
	window->draw(Endbackground);
	End1.setPosition(sf::Vector2f(20, 640));
	window->draw(End1);
	End1.setPosition(sf::Vector2f(40, 640));
	window->draw(End1);
	End2.setPosition(sf::Vector2f(30, 660));
	window->draw(End2);
	End3.setPosition(sf::Vector2f(71, 650));
	window->draw(End3);
	End3.setPosition(sf::Vector2f(91, 650));
	window->draw(End3);
	End3.setPosition(sf::Vector2f(61, 670));
	window->draw(End3);
	End3.setPosition(sf::Vector2f(101, 670));
	window->draw(End3);
	End2.setPosition(sf::Vector2f(81, 640));
	window->draw(End2);
	End2.setPosition(sf::Vector2f(81, 660));
	window->draw(End2);
	End1.setPosition(sf::Vector2f(152, 640));
	window->draw(End1);
	End4.setPosition(sf::Vector2f(162, 640));
	window->draw(End4);
	End4.setPosition(sf::Vector2f(162, 680));
	window->draw(End4);
	End1.setPosition(sf::Vector2f(203, 640));
	window->draw(End1);
	End2.setPosition(sf::Vector2f(193, 640));
	window->draw(End2);
	End2.setPosition(sf::Vector2f(213, 640));
	window->draw(End2);
	End3.setPosition(sf::Vector2f(244, 650));
	window->draw(End3);
	End3.setPosition(sf::Vector2f(264, 650));
	window->draw(End3);
	End3.setPosition(sf::Vector2f(234, 670));
	window->draw(End3);
	End3.setPosition(sf::Vector2f(274, 670));
	window->draw(End3);
	End2.setPosition(sf::Vector2f(254, 640));
	window->draw(End2);
	End2.setPosition(sf::Vector2f(254, 660));
	window->draw(End2);
	End1.setPosition(sf::Vector2f(295, 640));
	window->draw(End1);
	End4.setPosition(sf::Vector2f(305, 640));
	window->draw(End4);
	End4.setPosition(sf::Vector2f(305, 660));
	window->draw(End4);
	End2.setPosition(sf::Vector2f(315, 650));
	window->draw(End2);
	End1.setPosition(sf::Vector2f(356, 640));
	window->draw(End1);
	End2.setPosition(sf::Vector2f(346, 640));
	window->draw(End2);
	End2.setPosition(sf::Vector2f(366, 640));
	window->draw(End2);
	End3.setPosition(sf::Vector2f(1020, 640));
	window->draw(End3);
	End3.setPosition(sf::Vector2f(1020, 670));
	window->draw(End3);
	End3.setPosition(sf::Vector2f(1040, 640));
	window->draw(End3);
	End3.setPosition(sf::Vector2f(1040, 670));
	window->draw(End3);
	End2.setPosition(sf::Vector2f(1030, 660));
	window->draw(End2);
	End5.setPosition(sf::Vector2f(1061, 660));
	window->draw(End5);
	End2.setPosition(sf::Vector2f(1061, 640));
	window->draw(End2);
	End1.setPosition(sf::Vector2f(982, 640));
	window->draw(End1);
	End4.setPosition(sf::Vector2f(992, 640));
	window->draw(End4);
	End4.setPosition(sf::Vector2f(992, 660));
	window->draw(End4);
	End4.setPosition(sf::Vector2f(992, 680));
	window->draw(End4);
	End1.setPosition(sf::Vector2f(1093, 640));
	window->draw(End1);
	End2.setPosition(sf::Vector2f(1083, 640));
	window->draw(End2);
	End2.setPosition(sf::Vector2f(1103, 640));
	window->draw(End2);
	End3.setPosition(sf::Vector2f(440, 270));
	window->draw(End3);
	End3.setPosition(sf::Vector2f(460, 270));
	window->draw(End3);
	End5.setPosition(sf::Vector2f(450, 290));
	window->draw(End5);
	End1.setPosition(sf::Vector2f(481, 270));
	window->draw(End1);
	End1.setPosition(sf::Vector2f(511, 270));
	window->draw(End1);
	End4.setPosition(sf::Vector2f(491, 270));
	window->draw(End4);
	End4.setPosition(sf::Vector2f(491, 310));
	window->draw(End4);
	End1.setPosition(sf::Vector2f(532, 270));
	window->draw(End1);
	End1.setPosition(sf::Vector2f(562, 270));
	window->draw(End1);
	End4.setPosition(sf::Vector2f(542, 310));
	window->draw(End4);
	End2.setPosition(sf::Vector2f(623, 270));
	window->draw(End2);
	End2.setPosition(sf::Vector2f(683, 270));
	window->draw(End2);
	End3.setPosition(sf::Vector2f(633, 280));
	window->draw(End3);
	End3.setPosition(sf::Vector2f(673, 280));
	window->draw(End3);
	End3.setPosition(sf::Vector2f(653, 290));
	window->draw(End3);
	End3.setPosition(sf::Vector2f(663, 300));
	window->draw(End3);
	End3.setPosition(sf::Vector2f(643, 300));
	window->draw(End3);
	End5.setPosition(sf::Vector2f(704, 290));
	window->draw(End5);
	End2.setPosition(sf::Vector2f(704, 270));
	window->draw(End2);
	End1.setPosition(sf::Vector2f(725, 270));
	window->draw(End1);
	End1.setPosition(sf::Vector2f(755, 270));
	window->draw(End1);
	End2.setPosition(sf::Vector2f(735, 290));
	window->draw(End2);
	End2.setPosition(sf::Vector2f(745, 300));
	window->draw(End2);
	End5.setPosition(sf::Vector2f(774, 270));
	window->draw(End5);
	End2.setPosition(sf::Vector2f(774, 310));
	window->draw(End2);
	Endwall_1.setPosition(sf::Vector2f(0, 0));
	window->draw(Endwall_1);
	Endwall_1.setPosition(sf::Vector2f(1190, 0));
	window->draw(Endwall_1);
	Endwall_2.setPosition(sf::Vector2f(10, 0));
	window->draw(Endwall_2);
	Endwall_2.setPosition(sf::Vector2f(10, 790));
	window->draw(Endwall_2);
	EndPortal1.setPosition(sf::Vector2f(1030, 700));
	window->draw(EndPortal1);
	EndPortal1.setPosition(sf::Vector2f(1030, 770));
	window->draw(EndPortal1);
	EndPortal2.setPosition(sf::Vector2f(1020, 700));
	window->draw(EndPortal2);
	EndPortal2.setPosition(sf::Vector2f(1070, 700));
	window->draw(EndPortal2);
	EndPortal1.setPosition(sf::Vector2f(130, 700));
	window->draw(EndPortal1);
	EndPortal1.setPosition(sf::Vector2f(130, 770));
	window->draw(EndPortal1);
	EndPortal2.setPosition(sf::Vector2f(120, 700));
	window->draw(EndPortal2);
	EndPortal2.setPosition(sf::Vector2f(170, 700));
	window->draw(EndPortal2);
}

EndGame::~EndGame()
{
}