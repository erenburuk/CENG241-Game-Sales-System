#include "Admin.h"
#include <iostream>
#include <string>

#ifndef _USER_H_
#define _USER_H_

using namespace std;

class User : public Admin
{
	private:
		float wallet;

	public:
		User();
		User(string n,string p,string u,float w);
		User(const User & obj);
		~User();
		void changePassword(string oldp);
		
		//set-get
		void setWallet(float w);
		
		float getWallet();
		
		void operator+=(float a);
		void operator -=(float a);
				
};

#endif	// _USER_H_
