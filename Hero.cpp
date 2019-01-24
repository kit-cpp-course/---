#include "Hero.h"
#include <SFML/Graphics.hpp>

Hero::Hero()
{
	Rshape = sf::RectangleShape(sf::Vector2f(20, 40));
	Rshape.setFillColor(sf::Color::Green);
	Rshape.setPosition(sf::Vector2f(600, 400));
}



void Hero::walking()
{
	CheckTransition();
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)&&CheckWalking(sf::Vector2f(Rshape.getPosition().x, Rshape.getPosition().y),sf::Vector2f(Rshape.getPosition().x+20, Rshape.getPosition().y+40),-1,0))
		{
			Rshape.move(-1, 0);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && CheckWalking(sf::Vector2f(Rshape.getPosition().x, Rshape.getPosition().y), sf::Vector2f(Rshape.getPosition().x + 20, Rshape.getPosition().y + 40), -1, 0))
		{
			Rshape.move(-1, 0);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) &&CheckWalking(sf::Vector2f(Rshape.getPosition().x, Rshape.getPosition().y), sf::Vector2f(Rshape.getPosition().x + 20, Rshape.getPosition().y + 40), 1, 0))
		{
			Rshape.move(1, 0);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && CheckWalking(sf::Vector2f(Rshape.getPosition().x, Rshape.getPosition().y), sf::Vector2f(Rshape.getPosition().x + 20, Rshape.getPosition().y + 40), 1, 0))
		{
			Rshape.move(1, 0);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) &&CheckWalking(sf::Vector2f(Rshape.getPosition().x, Rshape.getPosition().y), sf::Vector2f(Rshape.getPosition().x + 20, Rshape.getPosition().y + 40), 0, -1))
		{
			Rshape.move(0, -1);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && CheckWalking(sf::Vector2f(Rshape.getPosition().x, Rshape.getPosition().y), sf::Vector2f(Rshape.getPosition().x + 20, Rshape.getPosition().y + 40), 0, -1))
		{
			Rshape.move(0, -1);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) && CheckWalking(sf::Vector2f(Rshape.getPosition().x, Rshape.getPosition().y), sf::Vector2f(Rshape.getPosition().x + 20, Rshape.getPosition().y + 40), 0, 1))
		{
			Rshape.move(0, 1);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && CheckWalking(sf::Vector2f(Rshape.getPosition().x, Rshape.getPosition().y), sf::Vector2f(Rshape.getPosition().x + 20, Rshape.getPosition().y + 40), 0, 1))
		{
			Rshape.move(0, 1);
		}
}

void Hero::CheckTransition()
{
	if (Rshape.getPosition().x >= 1220 && i != 1 && i!=2 && i!=6 && i!=7 && i!=9 && i != 10 && i!=11)
	{
		i = 4;
		Rshape.setPosition(sf::Vector2f(0, 110));
	}
	if (Rshape.getPosition().x <= -40 && i != 6 && i != 1 && i != 3 && i != 5 && i != 7 && i != 8 && i != 9)
	{
		i = 0;
		Rshape.setPosition(sf::Vector2f(1170, 70));
	}
	if (Rshape.getPosition().y >= 800 && i!=3 && i!=2 && i!=7 && i!=5 && i!=6)
	{
		i = 1;
		Rshape.setPosition(sf::Vector2f(600, 1));
	}
	if (Rshape.getPosition().y <= -80 && i!=6 && i!=5 && i!=8 && i != 9 && i != 10)
	{
		i = 0;
		Rshape.setPosition(sf::Vector2f(600, 800));
	}
	if (Rshape.getPosition().x <= -40 && i != 4 && i != 6 && i != 3 && i != 5 && i != 7 && i != 8 && i != 9)
	{
		i = 2;
		Rshape.setPosition(sf::Vector2f(1200, 380));
	}
	if (Rshape.getPosition().x >= 1220 && i != 1 && i != 0 && i != 6 && i != 7 && i != 9 && i != 10 && i != 11)
	{
		i = 1;
		Rshape.setPosition(sf::Vector2f(0, 380));
	}
	if (Rshape.getPosition().x >= 1220 && i != 0 && i != 2 && i != 6 && i != 7 && i != 9 && i != 10 && i != 11)
	{
		i = 3;
		Rshape.setPosition(sf::Vector2f(0, 380));
	}
	if (Rshape.getPosition().x <= -40 && i != 4 && i != 1 && i != 6 && i != 5 && i != 7 && i != 8 && i != 9)
	{
		i = 1;
		Rshape.setPosition(sf::Vector2f(1200, 380));
	}
	if (Rshape.getPosition().y >= 800 && i != 0 && i!=2 && i!=7 && i!=5 && i!=6)
	{
		i = 5;
		Rshape.setPosition(sf::Vector2f(600, 1));
	}
	if (Rshape.getPosition().y <= -80 && i!=1 && i!=6 && i!=8 && i != 9 && i != 10)
	{
		i = 3;
		Rshape.setPosition(sf::Vector2f(600, 800));
	}
	if (Rshape.getPosition().y >= 800 && i != 0 && i!=3 && i!=7 && i!=5 && i!=6)
	{
		i = 6;
		Rshape.setPosition(sf::Vector2f(600, 1));
	}
	if (Rshape.getPosition().y <= -80 && i != 1 && i!=5 && i!=8 && i != 9 && i != 10)
	{
		i = 2;
		Rshape.setPosition(sf::Vector2f(600, 800));
	}
	if (Rshape.getPosition().x >= 1220 && i != 1 && i != 2 && i != 0 && i != 7 && i != 9 && i != 10 && i != 11)
	{
		i = 7;
		Rshape.setPosition(sf::Vector2f(0, 210));
	}
	if (Rshape.getPosition().x <= -40 && i != 4 && i != 1 && i != 3 && i != 5 && i != 6 && i != 8 && i != 9)
	{
		i = 6;
		Rshape.setPosition(sf::Vector2f(1200, 210));
	}
	if (Rshape.getPosition().x >= 1220 && i != 1 && i != 2 && i != 6 && i != 0 && i != 9 && i != 10 && i != 11)
	{
		i = 5;
		Rshape.setPosition(sf::Vector2f(0, 705));
	}
	if (Rshape.getPosition().x <= -40 && i != 4 && i != 1 && i != 3 && i != 6 && i != 7 && i != 8 && i != 9)
	{
		i = 7;
		Rshape.setPosition(sf::Vector2f(1200, 705));
	}
	if (Rshape.getPosition().y >= 800 && i != 0 && i!=2 && i != 3 && i != 7 && i!=6)
	{
		i = 8;
		Rshape.setPosition(sf::Vector2f(600, 1));
	}
	if (Rshape.getPosition().y <= -80 && i != 1 && i != 5 && i != 6 && i!=9 && i != 10)
	{
		i = 5;
		Rshape.setPosition(sf::Vector2f(600, 800));
	}
	if (Rshape.getPosition().x <= -40 && i != 4 && i != 1 && i != 3 && i != 5 && i != 7 && i != 6 && i != 9)
	{
		i = 9;
		Rshape.setPosition(sf::Vector2f(1200, 400));
	}
	if (Rshape.getPosition().y >= 800 && i != 0 && i != 2 && i != 3 && i != 6 && i!=5)
	{
		i = 9;
		Rshape.setPosition(sf::Vector2f(600, 1));
	}
	if (Rshape.getPosition().y <= -80 && i != 1 && i != 5 && i != 6 && i!=8 && i!=10)
	{
		i = 7;
		Rshape.setPosition(sf::Vector2f(600, 800));
	}
	if (Rshape.getPosition().x >= 1220 && i != 1 && i != 2 && i != 6 && i != 7 && i != 0 && i != 10 && i != 11)
	{
		i = 8;
		Rshape.setPosition(sf::Vector2f(0, 400));
	}
	if (Rshape.getPosition().x <= -40 && i != 4 && i != 1 && i != 3 && i != 5 && i != 7 && i != 8 && i != 6)
	{
		i = 10;
		Rshape.setPosition(sf::Vector2f(1200, 400));
	}
	if (Rshape.getPosition().x >= 1220 && i != 1 && i != 2 && i != 6 && i != 7 && i != 9 && i != 0 && i != 11)
	{
		i = 9;
		Rshape.setPosition(sf::Vector2f(0, 400));
	}
	if (Rshape.getPosition().y <= -80 && i != 1 && i != 5 && i != 6 && i != 8 && i!=9)
	{
		i = 6;
		Rshape.setPosition(sf::Vector2f(600, 790));
	}
	if (Rshape.getPosition().y >= 800 && i != 0 && i != 2 && i != 3 && i != 7 && i != 5)
	{
		i = 10;
		Rshape.setPosition(sf::Vector2f(600, 1));
	}
	if (Rshape.getPosition().x <= -40 && i != 4 && i != 1 && i != 3 && i != 5 && i != 7 && i!=8 && i!=9)
	{
		i = 11;
		Rshape.setPosition(sf::Vector2f(1200, 400));
	}
	if (Rshape.getPosition().x >= 1220 && i != 1 && i != 2 && i != 6 && i != 7 && i != 9 && i != 0 && i != 10)
	{
		i = 6;
		Rshape.setPosition(sf::Vector2f(0, 580));
	}
	if (Rshape.getPosition().x >= 570 && Rshape.getPosition().x <= 630 && Rshape.getPosition().y >= 370 && Rshape.getPosition().y <= 400 && i!=0 && i!=1 && i!=2 && i!=3 && i!=4 && i!= 5 && i!= 6 && i!=7 && i!=8 && i!=9 && i!=10 && i!=12)
	{
		i = 12;
		Rshape.setPosition(sf::Vector2f(600, 400));
	}
	if (Rshape.getPosition().x >= 1120 && Rshape.getPosition().x <= 1160 && Rshape.getPosition().y >= 700 && Rshape.getPosition().y <= 730 && i != 0 && i != 1 && i != 2 && i != 3 && i != 11 && i != 5 && i != 6 && i != 7 && i != 8 && i != 9 && i != 10 && i!=12)
	{
		i = 12;
		Rshape.setPosition(sf::Vector2f(600, 400));
	}
	if (Rshape.getPosition().x >= 120 && Rshape.getPosition().x <= 180 && Rshape.getPosition().y >= 700 && Rshape.getPosition().y <= 730 && i != 0 && i != 1 && i != 2 && i != 3 && i != 4 && i != 5 && i != 6 && i != 7 && i != 8 && i != 9 && i != 10 && i != 11)
	{
		i = 0;
		Rshape.setPosition(sf::Vector2f(600, 400));
	}
	if (Rshape.getPosition().x >= 1020 && Rshape.getPosition().x <= 1060 && Rshape.getPosition().y >= 700 && Rshape.getPosition().y <= 730 && i != 0 && i != 1 && i != 2 && i != 3 && i != 4 && i != 5 && i != 6 && i != 7 && i != 8 && i != 9 && i != 10 && i != 11)
	{
		i = 13;
		Rshape.setPosition(sf::Vector2f(0,0));
	}
}
bool Hero::CheckWalking(sf::Vector2f Angle1, sf::Vector2f Angle2, float x, float y)
{
	if (i == 0 && ((Angle1.x + x <= 640 && Angle1.x + x >= 600 && Angle1.y + y >= 790 && Angle1.y + y <= 900 || Angle2.x + x <= 640 && Angle2.x + x >= 600 && Angle2.y + y >= 790 && Angle2.y + y <= 900) || (Angle1.x + x <= 1300 && Angle1.x + x >= 1190 && Angle1.y + y >= 100 && Angle1.y + y <= 120 || Angle2.x + x <= 1300 && Angle2.x + x >= 1190 && Angle2.y + y >= 100 && Angle2.y + y <= 120)))
		return true;
	if (i == 1 && ((Angle1.x + x <= 620 && Angle1.x + x >= 580 && Angle1.y + y >= -100 && Angle1.y + y <= 10 || Angle2.x + x <= 620 && Angle2.x + x >= 580 && Angle2.y + y >= -100 && Angle2.y + y <= 10) || (Angle1.x + x <= 10 && Angle1.x + x >= -100 && Angle1.y + y >= 370 && Angle1.y + y <= 430 || Angle2.x + x <= 10 && Angle2.x + x >= -100 && Angle2.y + y >= 370 && Angle2.y + y <= 430)||(Angle1.x + x <= 1300 && Angle1.x + x >= 1190 && Angle1.y + y >= 410 && Angle1.y + y <= 470 || Angle2.x + x <= 1300 && Angle2.x + x >= 1190 && Angle2.y + y >= 410 && Angle2.y + y <= 470)))
		return true;
	if (i == 2 && ((Angle1.x + x <= 640 && Angle1.x + x >= 600 && Angle1.y + y >= 790 && Angle1.y + y <= 900 || Angle2.x + x <= 640 && Angle2.x + x >= 600 && Angle2.y + y >= 790 && Angle2.y + y <= 900) || (Angle1.x + x <= 1300 && Angle1.x + x >= 1190 && Angle1.y + y >= 410 && Angle1.y + y <= 470 || Angle2.x + x <= 1300 && Angle2.x + x >= 1190 && Angle2.y + y >= 410 && Angle2.y + y <= 470)))
		return true;
	if (i == 3 && ((Angle1.x + x <= 640 && Angle1.x + x >= 600 && Angle1.y + y >= 790 && Angle1.y + y <= 900 || Angle2.x + x <= 640 && Angle2.x + x >= 600 && Angle2.y + y >= 790 && Angle2.y + y <= 900) || (Angle1.x + x <= 10 && Angle1.x + x >= -100 && Angle1.y + y >= 370 && Angle1.y + y <= 430 || Angle2.x + x <= 10 && Angle2.x + x >= -100 && Angle2.y + y >= 370 && Angle2.y + y <= 430)))
		return true;
	if (i == 4 && (Angle1.x + x <= 10 && Angle1.x + x >= -100 && Angle1.y + y >= 100 && Angle1.y + y <= 120 || Angle2.x + x <= 10 && Angle2.x + x >= -100 && Angle2.y + y >= 100 && Angle2.y + y <= 120))
		return true;
	if (i == 5 && ((Angle1.x + x <= 640 && Angle1.x + x >= 600 && Angle1.y + y >= 790 && Angle1.y + y <= 900 || Angle2.x + x <= 640 && Angle2.x + x >= 600 && Angle2.y + y >= 790 && Angle2.y + y <= 900) || (Angle1.x + x <= 640 && Angle1.x + x >= 600 && Angle1.y + y >= -100 && Angle1.y + y <= 10 || Angle2.x + x <= 640 && Angle2.x + x >= 600 && Angle2.y + y >= -100 && Angle2.y + y <= 10) || (Angle1.x + x <= 10 && Angle1.x + x >= -100 && Angle1.y + y >= 695 && Angle1.y + y <= 715 || Angle2.x + x <= 10 && Angle2.x + x >= -100 && Angle2.y + y >= 695 && Angle2.y + y <= 715)))
		return true;
	if (i == 5 && (Angle1.x + x >= 10 && Angle1.x + x <= 1190 && Angle1.y + y >= 651 && Angle1.y + y <= 659 || Angle2.x + x >= 10 && Angle2.x + x <= 1190 && Angle2.y + y >= 651 && Angle2.y + y <= 659))
	{
		return false;
	}
	if (i == 6 && ((Angle1.x + x <= 640 && Angle1.x + x >= 600 && Angle1.y + y >= 790 && Angle1.y + y <= 900 || Angle2.x + x <= 640 && Angle2.x + x >= 600 && Angle2.y + y >= 790 && Angle2.y + y <= 900) || (Angle1.x + x <= 640 && Angle1.x + x >= 600 && Angle1.y + y >= -100 && Angle1.y + y <= 10 || Angle2.x + x <= 640 && Angle2.x + x >= 600 && Angle2.y + y >= -100 && Angle2.y + y <= 10) || (Angle1.x + x <= 10 && Angle1.x + x >= -100 && Angle1.y + y >= 570 && Angle1.y + y <= 590 || Angle2.x + x <= 10 && Angle2.x + x >= -100 && Angle2.y + y >= 570 && Angle2.y + y <= 590) || (Angle1.x + x <= 1300 && Angle1.x + x >= 1190 && Angle1.y + y >= 240 && Angle1.y + y <= 260 || Angle2.x + x <= 1300 && Angle2.x + x >= 1190 && Angle2.y + y >= 240 && Angle2.y + y <= 260)))
		return true;
	if (i == 6 && (Angle1.x + x >= 10 && Angle1.x + x <= 1190 && Angle1.y + y >= 391 && Angle1.y + y <= 399 || Angle2.x + x >= 10 && Angle2.x + x <= 1190 && Angle2.y + y >= 391 && Angle2.y + y <= 399))
	{
		return false;
	}
	if (i == 7 && ((Angle1.x + x <= 640 && Angle1.x + x >= 600 && Angle1.y + y >= 790 && Angle1.y + y <= 900 || Angle2.x + x <= 640 && Angle2.x + x >= 600 && Angle2.y + y >= 790 && Angle2.y + y <= 900) || (Angle1.x + x <= 10 && Angle1.x + x >= -100 && Angle1.y + y >= 200 && Angle1.y + y <= 220 || Angle2.x + x <= 10 && Angle2.x + x >= -100 && Angle2.y + y >= 200 && Angle2.y + y <= 220) || (Angle1.x + x <= 1300 && Angle1.x + x >= 1190 && Angle1.y + y >= 735 && Angle1.y + y <= 755 || Angle2.x + x <= 1300 && Angle2.x + x >= 1190 && Angle2.y + y >= 735 && Angle2.y + y <= 755)))
		return true;
	if (i == 8 && ((Angle1.x + x <= 620 && Angle1.x + x >= 580 && Angle1.y + y >= -100 && Angle1.y + y <= 10 || Angle2.x + x <= 620 && Angle2.x + x >= 580 && Angle2.y + y >= -100 && Angle2.y + y <= 10) || (Angle1.x + x <= 10 && Angle1.x + x >= -100 && Angle1.y + y >= 370 && Angle1.y + y <= 430 || Angle2.x + x <= 10 && Angle2.x + x >= -100 && Angle2.y + y >= 370 && Angle2.y + y <= 430)))
		return true;
	if (i == 9 && ((Angle1.x + x <= 620 && Angle1.x + x >= 580 && Angle1.y + y >= -100 && Angle1.y + y <= 10 || Angle2.x + x <= 620 && Angle2.x + x >= 580 && Angle2.y + y >= -100 && Angle2.y + y <= 10) || (Angle1.x + x <= 10 && Angle1.x + x >= -100 && Angle1.y + y >= 370 && Angle1.y + y <= 430 || Angle2.x + x <= 10 && Angle2.x + x >= -100 && Angle2.y + y >= 370 && Angle2.y + y <= 430) || (Angle1.x + x <= 1300 && Angle1.x + x >= 1190 && Angle1.y + y >= 410 && Angle1.y + y <= 470 || Angle2.x + x <= 1300 && Angle2.x + x >= 1190 && Angle2.y + y >= 410 && Angle2.y + y <= 470)))
		return true;
	if (i == 9 && (Angle1.x + x >= 10 && Angle1.x + x <= 1190 && Angle1.y + y >= 291 && Angle1.y + y <= 299 || Angle2.x + x >= 10 && Angle2.x + x <= 1190 && Angle2.y + y >= 291 && Angle2.y + y <= 299))
	{
		return false;
	}
	if (i == 10 && ((Angle1.x + x <= 620 && Angle1.x + x >= 580 && Angle1.y + y >= -100 && Angle1.y + y <= 10 || Angle2.x + x <= 620 && Angle2.x + x >= 580 && Angle2.y + y >= -100 && Angle2.y + y <= 10) || (Angle1.x + x <= 1300 && Angle1.x + x >= 1190 && Angle1.y + y >= 410 && Angle1.y + y <= 470 || Angle2.x + x <= 1300 && Angle2.x + x >= 1190 && Angle2.y + y >= 410 && Angle2.y + y <= 470)))
		return true;
	if (i == 11 && (Angle1.x + x <= 1300 && Angle1.x + x >= 1190 && Angle1.y + y >= 410 && Angle1.y + y <= 470 || Angle2.x + x <= 1300 && Angle2.x + x >= 1190 && Angle2.y + y >= 410 && Angle2.y + y <= 470))
		return true;
	if (i == 12 && (Angle1.x + x <= -1300 && Angle1.x + x >= -1400 && Angle1.y + y >= -100 && Angle1.y + y <= -99 || Angle2.x + x <= -1300 && Angle2.x + x >= -1400 && Angle2.y + y >= -100 && Angle2.y + y <= -99))
		return true;
	return !(Angle1.x + x <= 9 || Angle1.x + x >= 1191 || Angle2.x + x <= 9 || Angle2.x + x >= 1191 || Angle1.y + y <= 9 || Angle1.y + y >= 791 || Angle2.y + y <= 9 || Angle2.y + y >= 791);
    
}