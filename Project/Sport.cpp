#include <iostream>
#include "Sport.h"
#include "Game.h"
#include <string>

using namespace std;

Sport::Sport(): Game()
{
	sportType = " ";
}

Sport::Sport(string st,string n, float pr, string pl, string t, bool o, float ti, bool ad): Game(n,pr,pl,t,o,ti,ad)
{
	sportType =st;
}

Sport::Sport(const Sport & obj) : Game(obj)
{
	sportType = obj.sportType;
}

Sport::~Sport()
{
	
}

void Sport :: print()
	{
		
		Game tempObj(name,price,platform,type,online,time,adult);
		tempObj.print(1);
		cout<<endl;
		
		cout<<"Sport Type: "<<sportType<<endl;	
	} 


string Sport::getSportType() { return sportType; }
void Sport::setSportType(string st) { sportType = st; }

ostream& operator<<(ostream& os, const Sport& sp)
{
	cout<<endl;
		
	cout<<"Sport Type: "<<sp.sportType<<endl;	
    return os;
}
