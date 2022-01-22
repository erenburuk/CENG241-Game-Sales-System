#include <iostream>
#include "RPG.h"
#include "Game.h"

using namespace std;

RPG::RPG() : Game()
{
	worldSize = 0;
	maxLevel = 0;
}

RPG::RPG(int wl, int ml,string n, float pr, string pl, string t, bool o, float ti, bool ad) : Game(n,pr,pl,t,o,ti,ad)
{
	worldSize = wl;
	maxLevel = ml;
}

RPG::RPG(const RPG & obj) : Game(obj)
{
	worldSize = obj.worldSize;
	maxLevel = obj.maxLevel;
}

RPG::~RPG()
{
	
}

void RPG :: print()
	{
		cout<<endl;
		
		cout<<"World Size: "<<worldSize<<endl;
		cout<<"Max Level: "<<maxLevel<<endl;
	
	} 

int RPG::getWorldSize(){ return worldSize; }
int RPG::getMaxLevel(){ return maxLevel; }

void RPG::setWorldSize(int ws){ worldSize = ws; }
void RPG::setMaxLevel(int ml){ maxLevel = ml; }

