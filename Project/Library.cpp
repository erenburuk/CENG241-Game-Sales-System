#include "User.h"
#include "Library.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

    Library::Library()
    {
        gameCount = 0;
    }

    Library::Library(const Library & obj)
    {
        gameCount = obj.gameCount;

        int size = (obj.ownGames).size();

        for(int i = 0 ; i < size; i++)
        {
            ownGames[i] = obj.ownGames[i];
        }
    }

    Library::Library(int s)
    {
        gameCount = s;
    }

    Library::~Library()
    {
    }

    void Library:: Print()
    {
        cout << "Your games: " << endl;
		
		int size = ownGames.size();
		
		if(size != 0)
		{
			for(int i = 0; i < size; i++)
	        {
	            cout << i+1 << "- " << ownGames[i] << endl;
	        }			
		}
		
		else
			cout << "You don't have any games " << endl;
        
        cout << endl;
    }

