#include "Game.h"
#include <iostream>
#include <string>
#include <vector>

#ifndef _ADMIN_H_
#define _ADMIN_H_

using namespace std;

class Admin : public Game
{
	protected:
		string name;
		string password;
		string userName;

	public:
		Admin();
		Admin(string n,string p,string u);
		Admin(const Admin & obj);
		~Admin();
		
		//functions
		vector <Game> AddGame(vector <Game> obj);
		vector <Game> EditGame(vector <Game> obj, int select);
		vector <Game> DeleteGame(vector <Game> obj, int select);
		vector <Admin> AddLittleAdmin(vector <Admin> obj);
		vector <Admin> DelLittleAdmin(vector <Admin> obj, int select);
		vector <Admin> changePassword(vector <Admin> obj,  int select);
		void print();
		
		
		
		
		//set-get
		void setName(string n);
		void setPassword(string p);
		void setuserName(string u);
		
		string getName();
		string getPassword();
		string getuserName();		
				
};


#endif //_ADMIN_H_
