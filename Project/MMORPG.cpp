#include <iostream>
#include <string>
#include "RPG.h"
#include "MMORPG.h"
#include "Game.h" 

using namespace std;
		

	MMORPG::MMORPG():RPG()
	{
		characterClass = " ";
		monthlyPayment = 0;
	}
	
	MMORPG::MMORPG(string cc, float mp,int ws, int ml,string n, float pr, string pl, string t, bool o, float ti, bool ad): RPG(ws,ml,n,pr,pl,t,o,ti,ad)
	{
		characterClass = cc;
		monthlyPayment = mp;
	}
	
	MMORPG::MMORPG(const MMORPG & obj) : RPG(obj)
	{
		characterClass = obj.characterClass;
		monthlyPayment = obj.monthlyPayment;
	}
	
	MMORPG::~MMORPG()
	{
	}
	
	void MMORPG :: print()
	{
		cout<<endl;
		
		cout<<"Character Classes: "<<characterClass<<endl;
		cout<<"Montly Payment: "<<monthlyPayment<<endl;
	} 
	
	string MMORPG::getCharacterClass()
	{
		return characterClass;
	}
	
	void MMORPG::setCharacterClass(string charClass)
	{
		characterClass = charClass;
	}
	
	float MMORPG::getMonthlyPayment()
	{
		return monthlyPayment;
	}
	
	void MMORPG::setMonthlyPayment(float mp)
	{
		monthlyPayment = mp;
	}

