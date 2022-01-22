#include <iostream>
#include <string>
#include "Game.h"

#ifndef _SIMULATION_H_
#define _SIMULATION_H_

using namespace std;

class Simulation :  public Game
{
	private:
		string SimType;
		bool story;
		bool realistic;
		
	public:
		Simulation();
		Simulation(string st, bool s, bool r,string n, float pr, string pl, string t, bool o, float ti, bool ad);
		Simulation(const Simulation & obj);
		~Simulation();
		void print();
		string getSimType();
		bool getStory();
		bool getRealistic();
		void setSimType(string st);
		void setStory(bool s);
		void setRealistic(bool r);
};

#endif	// _SIMULATION_H_
