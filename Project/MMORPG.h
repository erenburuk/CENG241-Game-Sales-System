#include <iostream>
#include <string>
#include "RPG.h" 

#ifndef _MMORPG_H_
#define _MMORPG_H_

using namespace std;

class MMORPG : public RPG 
{
	private:
		string characterClass;
		float monthlyPayment;
		
	public:
		MMORPG();
		MMORPG(string charClass, float monthlyPayment,int ws, int ml,string n, float pr, string pl, string t, bool o, float ti, bool ad);
		MMORPG(const MMORPG & obj);
		~MMORPG();
		void print();
		string getCharacterClass();
		void setCharacterClass(string charClass);
		float getMonthlyPayment();
		void setMonthlyPayment(float mp);
};

#endif	// _MMORPG_H_
