#include <iostream>
#include <string>
#include <vector>
#include "Game.h"
#include "Library.h"
#ifndef _CART_H_
#define _CART_H_

using namespace std;

class Cart : public Game{
	private:
		float totalAmount;
		vector <float> GamePrice;
		vector <string> list;
		
	public:
		Cart();
		Cart(float t,string n);
		Cart(const Cart & obj);
		~Cart();
		
		//set-get
		void setTotalAmount(float t);
		void setList(string n);
		void setGamePrice(float gp);
		
		float getTotalAmount();
		vector <float> getGamePrice();
		vector <string> getList();
		
		//function
		vector <string> Accept(float wallet);
		void AddtoList(string);
		
		void operator+=(float a);
		
		
			
};

#endif // _CART_H_
