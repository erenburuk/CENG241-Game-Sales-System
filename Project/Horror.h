#include "Game.h"
#include <iostream>
#include <string>

#ifndef _HORROR_H_
#define _HORROR_H_

using namespace std;

class Horror: public Game
{
	private:
		int horrorLevel;
		bool selfDefence;
		
	public:
		Horror();
		Horror(int horrorL, int selfDef,string n, float pr, string pl, string t, bool o, float ti, bool ad);
		Horror(const Horror & obj);
		~Horror();
		void print();
		int getHorrorLevel();
		bool getSelfDefence();
		void setHorrorLevel(int hoorrorL);
		void setSelfDefence(int selfDef);
		
		friend ostream& operator<<(ostream& os, const Horror& hr);
};





#endif // _HORROR_H_
