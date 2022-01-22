#include <iostream>
#include "Game.h"

#ifndef _RPG_H_
#define _RPG_H_

using namespace std;

class RPG: public Game 
{
	private:
		int worldSize;
		int maxLevel;
	
	public:
		RPG();
		RPG(int ws, int ml,string n, float pr, string pl, string t, bool o, float ti, bool ad);
		RPG(const RPG & obj);
		~RPG();
		void print();
		int getWorldSize();
		int getMaxLevel();
		void setWorldSize(int ws);
		void setMaxLevel(int ml);
};

#endif // _RPG_H_
