#include <iostream>
#include <string>
#include <vector>
#include "Library.h"
#include "Game.h"
#include "Cart.h"

using namespace std;


	Cart::Cart()
	{
		totalAmount = 0;
	}
		
	Cart::Cart(float gp, string n)
	{
		GamePrice.push_back(gp);
		list.push_back(n);
		totalAmount += gp;
	}
	
	Cart::Cart(const Cart & obj)
	{
		totalAmount = obj.totalAmount;
		int size = list.size();
		
		for(int i = 0; i < size; i++)
		{
			list[i] = obj.list[i];	
			GamePrice[i] = obj.GamePrice[i];
		}
	}
	
	Cart::~Cart()
	{

	}
	
	void Cart:: operator+= (float a)
	{
		totalAmount += a;
	}
		
	//set-get
	void Cart:: setTotalAmount(float t)
	{
		totalAmount=t;
	}
	
	void Cart:: setList(string n)
	{
		list.push_back(n);
	}
	
	void Cart:: setGamePrice(float gp)
	{
		GamePrice.push_back(gp);
	}
		
	float Cart:: getTotalAmount()
	{
		return totalAmount;
	}
	
	vector <string> Cart:: getList()
	{
		return list;
	}
	
	vector <float> Cart:: getGamePrice()
	{
		return GamePrice;
	}
	
	// functions
	
	vector <string> Cart:: Accept(float wallet)
	{
		int size = list.size();
		
		for(int i = 0; i < size; i++)
		{
			cout << i+1 << "- " << list[i] << " Price: " << GamePrice[i] << endl;
		}
		
		cout << "Total amount = " << totalAmount << endl;
		cout << "Do you want to accept your order ? (1 for yes, 0 for no): ";
		bool accept;
		cin >> accept;
		cout << endl;
		
		if(accept == 1)
		{
			if(totalAmount > wallet)
			{
				cout << "You don't have enought money !! " << endl;
				Library objLibrary;
				return objLibrary.ownGames;	
			}
			
			else
			{
				cout << "Thank you !! your games now available in your library :)  " << endl;
				return list;				
			}
		}
		
		else
		{
			cout << ":( You canceled your order, why did you play with my emotions? :( " << endl;
			Library objLibrary;
			return objLibrary.ownGames;	
		}
	}
	
	void Cart:: AddtoList(string n)
	{
		list.push_back(n);
	}
		
		
			

