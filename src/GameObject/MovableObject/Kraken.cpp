#include "Kraken.h"

extern int life_count;

//Constructors
Kraken::Kraken(Player& player) : MovableObject() {}

Kraken::Kraken(float x, float y, Player& player) : MovableObject(x, y){}

//gameover?
void Kraken::HitBy(MovableObject& object) 
{
	  life_count = 0;
}

/*
void Kraken::Move(Player& player)
{

}
*/