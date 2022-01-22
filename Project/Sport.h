#include <iostream>
#include "Game.h"
#include <string>

#ifndef _SPORT_H_
#define _SPORT_H_


using namespace std;

class Sport: public Game
{
	protected:
		string sportType;
	
	public:
		Sport();
		Sport(string st,string n, float pr, string pl, string t, bool o, float ti, bool ad);// Game(n,pr,pl,t,o,ti,ad);
		Sport(const Sport & obj);
		~Sport();
		void print();
		string getSportType();
		void setSportType(string st);
		friend ostream& operator<<(ostream& os, const Sport& sp);
};

#endif // _SPORT_H_
