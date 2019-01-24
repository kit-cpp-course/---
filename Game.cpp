
#include <SFML/Graphics.hpp>
#include "Game.h"

void Game::Update(sf::RenderWindow *window)
{
	switch (Hero::counter())
	{
	case 0:
		StartMap::Update(window);
		break;
	case 1:
		Room0::Update(window);
		break;
	case 2:
		LeftRoom::Update(window);
		break;
	case 3:
		RightRoom::Update(window);
		break;
	case 4:
		Easter_egg::Update(window);
		break;
	case 5:
		RightRoom1::Update(window);
		break;
	case 6:
		LeftRoom1::Update(window);
		break;
	case 7:
		Room1::Update(window);
		break;
	case 8:
		RightRoom2::Update(window);
		break;
	case 9:
		Room2::Update(window);
		break;
	case 10:
		LeftRoom2::Update(window);
		break;
	case 11:
		Finel::Update(window);
		break;
	case 12:
		EndGame::Update(window);
		break;
	default:
		break;
	}
	window->draw(Hero::Return_Rshape());
}