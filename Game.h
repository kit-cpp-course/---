#pragma once 
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
// The class of the game. Inheritance of character and all rooms
class Game:public Hero, public Room0, public StartMap, public LeftRoom,
	public RightRoom, public Easter_egg, public RightRoom1, public LeftRoom1,
	public Room1, public RightRoom2, public Room2, public LeftRoom2, public Finel, public EndGame
{
public:
	void Update(sf::RenderWindow *window); //a function that switches between rooms and drawings of the rooms themselves
private:
	
};

 