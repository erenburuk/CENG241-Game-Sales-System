#include <iostream>
#include <string>
#include "Horror.h" 
#include "Game.h"

using namespace std;

Horror::Horror():Game()
{
	horrorLevel = 0;
	selfDefence = 0;
}

Horror::Horror(int horrorL, int selfDef,string n, float pr, string pl, string t, bool o, float ti, bool ad): Game(n,pr,pl,t,o,ti,ad)
{
	horrorLevel = horrorL;
	selfDefence = selfDef;	
}

Horror::Horror(const Horror & obj) : Game(obj)
{
	horrorLevel = obj.horrorLevel;
	selfDefence = obj.selfDefence;	
}

Horror::~Horror(){}

void Horror :: print()
	{
		int horrorLevel;
		bool selfDefence;
		
		Game tempObj(name,price,platform,type,online,time,adult);
		tempObj.print(1);
		cout<<endl;
		
		cout<<"Horror Level: "<<horrorLevel<<endl;
		cout<<"Self Defence: ";
		if(selfDefence == 0){
			cout<<"No"<<endl;
		}
		else if(selfDefence == 1){
			cout<<"Yes"<<endl;
		}
	} 

int Horror :: getHorrorLevel()
{
	return horrorLevel;
}

bool Horror :: getSelfDefence()
{
	return selfDefence;
}

void Horror :: setHorrorLevel(int horrorL)
{
	horrorLevel = horrorL;
}

void Horror :: setSelfDefence(int selfDef)
{
	selfDefence = selfDef;
}

ostream& operator<<(ostream& os, const Horror& hr)
{
	int horrorLevel;
	bool selfDefence;
	
	cout<<endl;
	
	cout<<"Horror Level: "<<hr.horrorLevel<<endl;
	cout<<"Self Defence: ";
	if(hr.selfDefence == 0){
		cout<<"No"<<endl;
	}
	else if(hr.selfDefence == 1){
		cout<<"Yes"<<endl;
	}
		
    return os;
}

