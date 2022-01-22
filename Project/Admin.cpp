#include "Admin.h"
#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include<bits/stdc++.h>

using namespace std;

	
		Admin:: Admin()
		{
			name=" ";
		 	password=" ";
		 	userName=" ";
		}
		
		Admin::Admin(string n,string u,string p){
			name=n;
			password=p;
			userName=u;
		}
		
		Admin::Admin(const Admin & obj)
		{
			name = obj.name;
			password = obj.password;
			userName = obj.userName;
		}
		
		Admin::~Admin()
		{
		}
		
		vector <Game> Admin:: AddGame(vector <Game> obj)
		{		
			string name;
			float price;
			string platform;
			string type;
			bool online;
			float time;
			bool adult;
			
			cout << "Enter the new game name: ";
			cin.ignore();
			getline(cin,name);
			
			cout << endl << "Enter the new game price: ";
			cin >> price;
						
			cout << endl << "Enter the new game platform: ";
			cin >> platform;
						
			cout << endl << "Enter the new game type: ";
			cin >> type;
						
			cout << endl << "Can you play the game online? (1 for online, 0 for not online): ";
			cin >> online;
						
			cout << endl << "Enter the new game average time to finish it: ";
			cin >> time;
						
			cout << endl << "Is this game for adults? (1 for yes, 0 for no): ";
			cin >> adult;
			
			
			
			transform(type.begin(), type.end(), type.begin(), ::toupper);
			transform(platform.begin(), platform.end(), platform.begin(), ::toupper);
			
			Game tempObj(name, price, platform , type, online , time , adult);
			obj.push_back(tempObj);
			
			return obj;
		}
		
		vector <Game>  Admin:: EditGame(vector <Game> obj, int select)
		{
			select = select - 1;
			
			obj[select].print(1);
			cout << "Choose which you want to change feature: ";
			int choice;
			cin >> choice;
			
			string name;
			float price;
			string platform;
			string type;
			bool online;
			float time;
			bool adult;
			
			if(choice == 1)
			{
				cout << "Enter the new game name: ";
				cin.ignore();
				getline(cin,name);
				cout << endl;
				obj[select].setName(name);					
			}

			else if(choice == 2)
			{
				cout << endl << "Enter the new game platform: ";
				cin >> platform;
				cout << endl;
				transform(platform.begin(), platform.end(), platform.begin(), ::toupper);
				obj[select].setPlatform(platform);				
			}
			
			else if(choice == 3)
			{
				cout<<"You cannot change game type!"<<endl;
			}
			
			else if(choice == 4)
			{
				cout << endl << "Enter the new game price: ";
				cin >> price;
				cout << endl;	
				obj[select].setPrice(price);			
			}
			
			else if(choice == 5)
			{
				cout << endl << "Enter the new game average time to finish it: ";
				cin >> time;
				cout << endl;	
				obj[select].setTime(time);			
			}
						
			else if(choice == 6)
			{
				cout << endl << "Enter the new game online situation: (1 for online or 0 for not online): ";
				cin >> online;
				cout << endl;
				obj[select].setOnline(online);	
			}
			 
			
			else if(choice == 7)
			{		
				cout << endl << "Enter the new game adult situation (1 for yes, 0 for no): ";
				cin >> adult;	
				cout << endl;	
				obj[select].setAdult(adult);			
			}
			
			else
				cout << "Wrong choice !! " << endl;
				
				return obj;
			}
			
		vector <Game> Admin :: DeleteGame(vector <Game> obj, int select)
		{
			
			obj.erase(obj.begin()+select-1);
			return obj;
		}
		
		vector <Admin> Admin:: AddLittleAdmin(vector <Admin> obj)
		{
			string newName;
			string newPassword;
			string newUserName;
			
			cout << "Write new admin name: ";
			cin.ignore();
			getline(cin,newName);
			cout << endl;
			
						
			cout << "Write new admin user name: ";
			getline(cin,newUserName);
			cout << endl;
			
			cout << "Write new admin password: ";
			cin >> newPassword;
			cout << endl;
			
			Admin tempObj(newName,newUserName,newPassword);
			
			obj.push_back(tempObj);
			
			return obj;
		}
		
		vector <Admin> Admin:: DelLittleAdmin(vector <Admin> obj,  int select)
		{
			obj.erase(obj.begin()+select-1);
			return obj;			
		}
		
		vector <Admin> Admin:: changePassword(vector <Admin> obj,  int select)
		{
			cout << "Write your old Password:  ";
			string oldPw;
			
			
			try
			{
				cin >> oldPw;
				if(oldPw != obj[select].password)
				{
					throw oldPw;
				}
			}
			catch(string error)
			{
				while(oldPw != obj[select].password)
				{
					cerr<<"Wrong Password Enter again: ";
					cin >> oldPw;
				}
			}
			
			if(oldPw == obj[select].password)
			{
				cout << endl << "New password:  ";
				cin >> password;
				obj[select].setPassword(password);
				cout << "-----------" << endl;
				cout << endl <<"Succesfully changed " << endl;
				return obj;
			}
		}
		
		
		void Admin::print()
        {
            cout <<" Name: " << name <<endl << "   User Name: " << userName << endl;
            
        }		
		
		
		//set-get
		void Admin:: setName(string n)
		{
			name = n;
		}
		
		void Admin::setPassword(string p)
		{
			password = p;
		}
		
		void Admin::setuserName(string u)
		{
			userName=u;
		}
		
		string Admin::getName()
		{
			return name;
		}
		
		string Admin::getPassword()
		{
			return password;
		}
		
		string Admin::getuserName()
		{
			return userName;
		}
				



