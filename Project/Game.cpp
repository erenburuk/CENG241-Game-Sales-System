#include <iostream>
#include <string>
#include <vector>
#include "Game.h"

using namespace std;

	Game::Game()
	{
		name = " ";
		price = 0;
		platform = " ";
		type = " ";
		online = 0;
		time = 0;
		adult = 0;
	}
	
	Game::Game(string n, float pr, string pl, string t, bool o, float ti, bool ad)
	{
		name = n;
		price = pr;
		type  = t;
		platform = pl;
		online = o;
		time = ti;
		adult = ad;
	}
	
	Game::Game(const Game & obj)
	{
		name = obj.name;
		price = obj.price;
		type = obj.type;
		platform = obj.platform;
		online = obj.online;
		time = obj.time;
		adult = obj.adult;
	}
	
	Game:: ~ Game()
	{}
	
	string Game::getName()
	{
		return name;
	}
	
	string Game:: getPlatform()
	{
		return platform;
	}
	
	string Game:: getType()
	{
		return type;
	}
	
	float Game:: getPrice()
	{
		return price;
	}
	
	int Game:: getTime()
	{
		return time;
	}
	
	bool Game:: getOnline()
	{
		return online;
	}
	
	bool Game:: getAdult()
	{
		return adult;
	}
	
	void Game:: setName(string n){ name = n;}
	void Game:: setPlatform(string p){ platform = p; }
	void Game:: setType(string t){ type = t; }
	void Game:: setPrice(float pr){ price = pr;}
	void Game:: setTime(float t){ time = t; }
	void Game:: setOnline(bool o){ online = o; }
	void Game:: setAdult(bool ad){ adult = ad; }
	
	void Game:: print(int control)
	{
		if(control == 0)
		{
			cout << name << endl;
		}
		
		else if(control == 1)
		{
			string condOnline;
			string condAdult;
			
			if(online == true)
				condOnline = "Yes";
			
			else
				condOnline = "No";
				
			if(adult == true)
				condAdult = "Yes";
			else
				condAdult = "No";
		
		    cout << "Name = " << name << endl << " platform = " << platform << endl << " type = " << type << endl << " price = " << price << endl << " Time = " << time << endl << " online = " << condOnline << endl << " For adults ? = " << condAdult;
			cout << endl;			
		}
	}


