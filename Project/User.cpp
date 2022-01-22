#include "User.h"
#include <iostream>
#include <string>



using namespace std;


		User :: User():Admin()
		{
			wallet = 0;			
		}
		
		User ::User(string n,string p,string u,float w):Admin(n,p,u)
		{
			wallet = w;
		}
		
		User ::User(const User & obj):Admin(obj){
			wallet = obj.wallet;
		}
		
		User ::~User()
		{
		
		}
		
		void User ::changePassword(string oldp)
		{
			
		}
		
		//set-get
		void User ::setWallet(float w)
		{
			wallet=w;
		}
		
		
		float User ::getWallet()
		{
			return wallet;
		}
		
		
		//operator overloading
		void User:: operator+= (float a)
		{
			wallet += a;
		}
		
		void User:: operator-= (float a)
		{
			wallet -= a;
		}
				

