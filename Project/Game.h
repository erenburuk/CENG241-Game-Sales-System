#include <iostream>
#include <string>
#ifndef _GAME_H_
#define _GAME_H_

using namespace std;

class Game
{
	protected:
		string name;
		float price;
		string platform;
		string type;
		bool online;
		float time;
		bool adult;
		
	public:
		Game();
		Game(string n, float pr, string pl, string t, bool o, float ti, bool ad);
		Game(const Game & obj);
		~Game();
		
		//function
		void print(int control);
		
		//getters
		string getName();
		string getPlatform();
		string getType();
		float getPrice();
		int getTime();
		bool getOnline();
		bool getAdult();
		
		//setters
		void setName(string n);
		void setPlatform(string p);
		void setType(string t);
		void setPrice(float pr);
		void setTime(float t);
		void setOnline(bool o);
		void setAdult(bool ad);
		
};

#endif // _GAME_H_
