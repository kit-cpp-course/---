#include <SFML/Graphics.hpp>
#include "Game.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(1200, 800), "Adventure"); 
	Game Games = Game();
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed || Games.counter() == 13)
				window.close();
		}
		
		Games.walking();
		window.clear();
		Games.Update(&window); 
		window.display();
	}

	return 0;
}