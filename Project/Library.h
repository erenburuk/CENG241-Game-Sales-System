#include "User.h"
#include <iostream>
#include <string>
#include <vector>

#ifndef _LIBRARYH
#define _LIBRARYH

using namespace std;

class Library : public User
{
    public:
        vector <string> ownGames;
        int gameCount;


        Library();
        Library(int s);
        Library(const Library & obj);
        ~Library();
        void Print();
        
};
 
 
#endif // _CARTH
