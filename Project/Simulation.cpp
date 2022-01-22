#include <iostream>
#include <string>
#include "Simulation.h" 
#include "Game.h"

using namespace std;

	Simulation::Simulation() :Game()
	{
		SimType = " ";
		story = 0;
		realistic = 0;
	}
	
	Simulation::Simulation(string st, bool s, bool r,string n, float pr, string pl, string t, bool o, float ti, bool ad): Game(n,pr,pl,t,o,ti,ad)
	{
		SimType = st;
		story = s;
		realistic = r;
	}
	
	Simulation::Simulation(const Simulation & obj) : Game(obj)
	{
		SimType = obj.SimType;
		story = obj.story;
		realistic = obj.realistic;
	}
	
	Simulation::~Simulation()
	{
	}
	
	void Simulation :: print()
	{
		
		cout<<endl;
		
		cout<<"Simulation Type: "<<SimType<<endl;
		cout<<"Story Mode: ";
		if(story == 0){
			cout<<"No"<<endl;
		}
		else if(story == 1){
			cout<<"Yes"<<endl;
		}
		
		cout<<"Realistic Mode: "; 
		if(realistic == 0){
			cout<<"No"<<endl;
		}
		else if(realistic == 1){
			cout<<"Yes"<<endl;
		}
	} 
	
	string Simulation::getSimType()
	{
		return SimType;
	}
	
	void Simulation::setSimType(string st)
	{
		SimType = st;
	}
	
	bool Simulation::getStory()
	{
		return story;
	}
	
	void Simulation::setStory(bool s)
	{
		story  = s;
	}
	
	bool Simulation::getRealistic()
	{
		return realistic;
	}
	
	void Simulation::setRealistic(bool r)
	{
		realistic = r;
	}

