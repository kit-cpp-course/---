#include <SFML/Graphics.hpp>
#include "Hero.h"
#include "StartMap.h"
#include "Room0.h"
#include "LeftRoom.h"
#include "RightRoom.h"
#include "Easter_egg.h"
#include "RightRoom1.h"
#include "LeftRoom1.h"
#include "Room1.h"
#include "RightRoom2.h"
#include "Room2.h"
#include "LeftRoom2.h"
#include "Finel.h"
#include "EndGame.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(1200, 800), "Adventure");
	StartMap FirstMap = StartMap();
	Hero man = Hero();
	Room0 Map1 = Room0();
	LeftRoom Lo = LeftRoom();
	RightRoom R0 = RightRoom();
	Easter_egg EE = Easter_egg();
	RightRoom1 R1 = RightRoom1();
	LeftRoom1 L1 = LeftRoom1();
	Room1 Map2 = Room1();
	RightRoom2 R2 = RightRoom2();
	Room2 Map3 = Room2();
	LeftRoom2 L2 = LeftRoom2();
	Finel F = Finel();
	EndGame End = EndGame();

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed || man.counter()==13)
				window.close();
		}
		
		man.walking();
		window.clear();
		if (man.counter()==0) {
			FirstMap.Update(&window);
		}
		if (man.counter()==1)
		{
			Map1.Update(&window);
		}
		if (man.counter() == 2)
		{
			Lo.Update(&window);
		}
		if (man.counter() == 3)
		{
			R0.Update(&window);
		}
		if (man.counter() == 4)
		{
			EE.Update(&window);
		}
		if (man.counter() == 5)
		{
			R1.Update(&window);
		}
		if (man.counter() == 6)
		{
			L1.Update(&window);
		}
		if (man.counter() == 7)
		{
			Map2.Update(&window);
		}
		if (man.counter() == 8)
		{
			R2.Update(&window);
		}
		if (man.counter() == 9)
		{
			Map3.Update(&window);
		}
		if (man.counter() == 10)
		{
			L2.Update(&window);
		}
		if (man.counter() == 11)
		{
			F.Update(&window);
		}
		if (man.counter() == 12)
		{
			End.Update(&window);
		}
		window.draw(man.Return_Rshape());
		window.display();
	}

	return 0;
}