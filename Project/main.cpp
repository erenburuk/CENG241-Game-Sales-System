#include <iostream>
#include <string>
#include <vector>
#include "Game.h"
#include "MMORPG.h"
#include "RPG.h"
#include "Sport.h"
#include "Simulation.h"
#include "Horror.h"
#include "Admin.h"
#include "User.h"
#include "Cart.h"


using namespace std;

vector <Game> baseGames(vector <Game> obj);
void AdminMenu();
void UserMenu(User obj);

int main()
{ 
	vector <Admin> objAdmins;
	User objUser;
	vector <Game> objGames;
	vector <Horror> HorrorGames;
	vector <Sport> SportGames;
	vector <RPG> RPGGames;
	vector <Simulation> SimulationGames;
	vector <MMORPG> MMORPGGames;
	
	RPG obj0(1500,99,"Red Dead Redemtion 2", 299, "PC,XBOX,PS", "RPG" , 1, 45, 1);
	RPGGames.push_back(obj0);
	RPG obj1(500,200,"GTA 5", 77.63 , "PC,XBOX,PS", "RPG" , 1, 35, 1);
	RPGGames.push_back(obj1);
	
	MMORPG obj2("Warrior, Ninja, Shaman, Lycan, Sura",0,100,100,"Black Desert Online", 19, "PC,XBOX,PS", "MMORPG" , 1, 10000, 1);
	MMORPGGames.push_back(obj2);
	MMORPG obj3("Magican, Healer, Archer, etc.",15,55,55,"New World", 133.12 , "PC", "MMORPG" , 1, 10000, 1);
	MMORPGGames.push_back(obj3);
	
	Horror obj4(9,0,"Outlast", 32, "PC", "HORROR", 0, 5, 1);
	HorrorGames.push_back(obj4);
	Horror obj5(9,1,"Resident Evil Village", 360, "PC,XBOX,PS5", "HORROR", 0, 15, 1);
	HorrorGames.push_back(obj5);
	
	Sport obj6("Football","FIFA 22", 170.99, "PC,XBOX,PS", "SPORT" , 1, 200, 0);
	SportGames.push_back(obj6);
	Sport obj7("Basketball","NBA2K 2022", 215.50, "PC,XBOX,PS", "SPORT" , 1, 150, 0);
	SportGames.push_back(obj7);
	
	Simulation obj8("Plane, Helicopter, etc.",0,1,"Microsoft Flight Simulator", 279.20, "PC,XBOX", "SIMULATION" , 1, 250, 0);
	SimulationGames.push_back(obj8);
	Simulation obj9("Bus, Truck, Car",1,1,"Euro Truck Simulator 2", 9.75 ,"PC", "SIMULATION" , 1, 300, 0);
	SimulationGames.push_back(obj9);
	
	
	// temp objects for use functions
	Game tempGameObj;
	Admin tempAdminObj;
	
	objGames = baseGames(objGames);

	
	Admin mainAdmin("admin","admin","admin");
	objAdmins.push_back(mainAdmin);
	cout<<"*** YAERSE ***"<<endl;
	cout << "WELCOME TO THE BEST ONLINE GAME SELLER MARKET!" << endl<<endl;
	int enterenceChoice;
	
	while(true)
	{
		cout << "1- Admin enterence" << endl;
		cout << "2- User enterence" << endl;
		cout << "3- Exit" << endl;
		cout<< "Enter 1,2 or 3: ";
		try
		{
			cin >> enterenceChoice;
			if(enterenceChoice>3 || enterenceChoice<1)
			{
				throw enterenceChoice;
			}
		}
		catch(int error)
		{
			while(enterenceChoice>3 || enterenceChoice<1)
			{
				cerr<<"Invalid value! Enter again: ";
				cin >> enterenceChoice;
			}
		}
		
		while(enterenceChoice == 1)
		{
			int len = objAdmins.size();
							
			for(int i = 0; i < len; i++)
			{
				cout <<endl<< i+1 <<")";
				objAdmins[i].print();
			}
			
			cout<<"-------------------------------------"<<endl;
			cout << "Chose which admin profile you want to sign: ";
			int adminProfile;
			cin>>adminProfile;
		
			cout <<endl<< "Enter your admin username: ";
			string userName;
			cin.ignore();
			getline(cin,userName);
			
			cout << "Enter your admin password: ";
			string password;
			getline(cin,password);
			cout << endl;
			
			if(userName == objAdmins[adminProfile-1].getuserName() && password == objAdmins[adminProfile-1].getPassword())
			{
				cout << "Welcome to the admin panel." << endl;
				
				AdminMenu();
				
				int adminChoice;
				try
				{
					cin >> adminChoice;
					if(adminChoice>8 || adminChoice<1)
					{
						throw adminChoice;
					}
				}
				catch(int error)
				{
					while(adminChoice>8 || adminChoice<1)
					{
						cerr<<"Invalid value! Enter again: ";
						cin >> adminChoice;
					}
					cout<<endl;
				}
				
				
				while(true)
				{
					
					if(adminChoice == 1)
					{
						objGames = tempAdminObj.AddGame(objGames);
						int leng = objGames.size();
						
						if(objGames[leng-1].getType()=="HORROR")
						{
							int hLevel;
							bool selfDefence;
							
							cout<<"Please enter horror level (between 0-10): ";
							cin>>hLevel;
							cout<<"Please enter self defence condition (0 for you cannot, 1 for you can): ";
							cin>>selfDefence;
							
							Horror tempObj(hLevel,selfDefence,objGames[leng-1].getName(), objGames[leng-1].getPrice(), objGames[leng-1].getPlatform(), objGames[leng-1].getType(), objGames[leng-1].getOnline(), objGames[leng-1].getTime(), objGames[leng-1].getAdult());
							HorrorGames.push_back(tempObj);
							
						}
						else if(objGames[leng-1].getType()=="RPG")
						{
							int worldSize;
							int maxLevel;
							
							cout<<"Please enter world size of game: ";
							cin>>worldSize;
							cout<<"Please enter max level of game: ";
							cin>>maxLevel;
							
							RPG tempObj(worldSize,maxLevel,objGames[leng-1].getName(), objGames[leng-1].getPrice(), objGames[leng-1].getPlatform(), objGames[leng-1].getType(), objGames[leng-1].getOnline(), objGames[leng-1].getTime(), objGames[leng-1].getAdult());
							RPGGames.push_back(tempObj);
						}
						else if(objGames[leng-1].getType()=="MMORPG")
						{
							string characterClass;
							float monthlyPayment;
							int worldSize;
							int maxLevel;
							
							cout<<"Please enter character classes of game: ";
							cin>>characterClass;
							cout<<"Please enter montly payment system of game (0 for no, 1 for yes): ";
							cin>>monthlyPayment;
							
							cout<<"Please enter world size of game: ";
							cin>>worldSize;
							cout<<"Please enter max level of game: ";
							cin>>maxLevel;
							
							MMORPG tempObj(characterClass,monthlyPayment,worldSize,maxLevel,objGames[leng-1].getName(), objGames[leng-1].getPrice(), objGames[leng-1].getPlatform(), objGames[leng-1].getType(), objGames[leng-1].getOnline(), objGames[leng-1].getTime(), objGames[leng-1].getAdult());
							MMORPGGames.push_back(tempObj);
						}
						else if(objGames[leng-1].getType()=="SPORT")
						{
							string sportType;
							
							cout<<"Please enter sport type of game: ";
							cin>>sportType;
							
							Sport tempObj(sportType,objGames[leng-1].getName(), objGames[leng-1].getPrice(), objGames[leng-1].getPlatform(), objGames[leng-1].getType(), objGames[leng-1].getOnline(), objGames[leng-1].getTime(), objGames[leng-1].getAdult());
							SportGames.push_back(tempObj);
						}
						else if(objGames[leng-1].getType()=="SIMULATION")
						{
							string SimType;
							bool story;
							bool realistic;
							
							cout<<"Please enter simulation type of game: ";
							cin>>SimType;
							cout<<"Please enter story mode of game (0 for no, 1 for yes): ";
							cin>>story;
							cout<<"Please enter realistic level of game (0 for no, 1 for yes): ";
							cin>>realistic;
							
							Simulation tempObj(SimType,story,realistic,objGames[leng-1].getName(), objGames[leng-1].getPrice(), objGames[leng-1].getPlatform(), objGames[leng-1].getType(), objGames[leng-1].getOnline(), objGames[leng-1].getTime(), objGames[leng-1].getAdult());
							SimulationGames.push_back(tempObj);
						}
						else
						{
							cout<<"Invalid type!.."<<endl;
						}
						
						cout << "Do you want to contiunue? "; 
						string controlContinue;
						cin >> controlContinue;
						
						if(controlContinue == "yes" || controlContinue == "Yes" || controlContinue == "YES")
							adminChoice = 1;
							
						else
						{
							AdminMenu();
							cin >> adminChoice;
							cout << endl;
						}
					}	
					
					else if(adminChoice == 2)
					{	
						int len = objGames.size();
						
						for(int i = 0; i < len; i++)
						{
							cout << i+1 <<") ";
							objGames[i].print(0);
						}
						cout<<endl;
						cout << "Select which game you want to edit: ";
						int selectEdit;
						cin >> selectEdit;
						
						objGames = tempAdminObj.EditGame(objGames,selectEdit);
						
						cout << "Do you want to contiunue ? "; 
						string controlContinue;
						cin >> controlContinue;
						
						if(controlContinue == "yes" || controlContinue == "Yes" || controlContinue == "YES")
							adminChoice = 2;
							
						else
						{
							AdminMenu();
							cin >> adminChoice;
							cout << endl;
						}					
					}	
					
					else if(adminChoice == 3)
					{	
						int len = objGames.size();
						
						for(int i = 0; i < len; i++)
						{
							cout << i+1 <<"- ";
							objGames[i].print(0);
						}
						
						cout << "Select which game you want to delete. ";
						int selectDelete;
						cin >> selectDelete;		
									
						objGames = tempAdminObj.DeleteGame(objGames,selectDelete);
						
						cout << "Do you want to contiunue? "; 
						string controlContinue;
						cin >> controlContinue;
						
						if(controlContinue == "yes" || controlContinue == "Yes" || controlContinue == "YES")
							adminChoice = 3;
							
						else
						{
							AdminMenu();
							cin >> adminChoice;
							cout << endl;
						}					
					}		
					
					else if(adminChoice == 4)
					{	
						objAdmins = tempAdminObj.AddLittleAdmin(objAdmins);
						
						cout << "Do you want to contiunue? "; 
						string controlContinue;
						cin >> controlContinue;
						
						if(controlContinue == "yes" || controlContinue == "Yes" || controlContinue == "YES")
							adminChoice = 4;
							
						else
						{
							AdminMenu();
							cin >> adminChoice;
							cout << endl;
						}					
					}	
					
					
					else if(adminChoice == 5)
					{	
						int len = objAdmins.size();
						
						for(int i = 0; i < len; i++)
						{
							cout << i+1 <<"- ";
							objAdmins[i].print();
						}
						
						cout << "Select which admin you want to delete? ";
						int selectDeleteAdmin;
						cin >> selectDeleteAdmin;
						
						if(selectDeleteAdmin != 1)
							objAdmins = tempAdminObj.DelLittleAdmin(objAdmins,selectDeleteAdmin);
							
						else
							cout << "You can not delete main admin !!!! " << endl;
						
						cout << "Do you want to contiunue? "; 
						string controlContinue;
						cin >> controlContinue;
						
						if(controlContinue == "yes" || controlContinue == "Yes" || controlContinue == "YES")
							adminChoice = 5;
							
						else
						{
							AdminMenu();
							cin >> adminChoice;
							cout << endl;
						}					
					}	
					
					
					else if(adminChoice == 6)
					{
						objAdmins = tempAdminObj.changePassword(objAdmins,adminProfile-1);
							
						cout << "Do you want to contiunue? "; 
						string controlContinue;
						cin >> controlContinue;
							
						if(controlContinue == "yes" || controlContinue == "Yes" || controlContinue == "YES")
							adminChoice = 6;
								
						else
						{
							AdminMenu();
							cin >> adminChoice;
							cout << endl;
						}												
					}
					
					else if(adminChoice == 7)
						break;
					
					else if(adminChoice == 8 )
						break;
						
					
				}
				if(adminChoice == 7)
					break;
			}
	
			else
				cout << "Wrong Username or Password ..." << endl;
		}			
	

		int choiceUser;
		while(enterenceChoice == 2)
		{
			cout <<endl<< "WELCOME TO THE ** YAERSE **" << endl;
			Library objLibrary;
			
			while(true)
			{
				UserMenu(objUser);
				cout << endl<<"What do you want to do? " << endl;
				try
				{
					cin >> choiceUser;
					if(choiceUser>5 || choiceUser<1)
					{
						throw choiceUser;
					}
				}
				catch(int error)
				{
					while(choiceUser>5 || choiceUser<1)
					{
						cerr<<"Invalid value! Enter again: ";
						cin >> choiceUser;
					}
					cout<<endl;
				}
				
				int count = 0;
				
				if(choiceUser == 1)
				{
					if(count == 0)
					{
						int len = objGames.size();
						cout<<endl;
						for(int i = 0; i < len; i++)
						{
							cout << i+1 <<"- ";
							objGames[i].print(0);
						}				
					}
				}
				
				else if(choiceUser == 2)
				{
					cout << "How much money do you want to add your wallet? " << endl;
					float addMoney;
					cin >> addMoney;
					objUser += addMoney;
				}
				
				else if(choiceUser == 3)
				{
					Cart objCart;
					int totalAmount = 0;
					int len = objGames.size();
					
					int countRPG = 0;
					int countHORROR = 0;
					int countMMO = 0;
					int countSIM = 0;
					int countSPORT = 0;
					
					for(int i = 0; i < len; i++)
					{
						cout << i+1 <<"- ";
						
						if(objGames[i].getType() == "RPG")
						{
							objGames[i].print(1);
							RPGGames[countRPG].print();
							countRPG++;							
						}
						
						else if(objGames[i].getType() == "MMORPG")
						{
							objGames[i].print(1);
							MMORPGGames[countMMO].print();
							countMMO++;	
						}
						
						else if(objGames[i].getType() == "SPORT")
						{
							objGames[i].print(1);
							cout<<SportGames[countSPORT];
							countSPORT++;	
						}
						
						else if(objGames[i].getType() == "HORROR")
						{
							objGames[i].print(1);
							cout<<HorrorGames[countHORROR];
							countHORROR++;
						}
						
						else if(objGames[i].getType() == "SIMULATION")
						{
							objGames[i].print(1);
							SimulationGames[countSIM].print();
							countSIM++;
						}
							
						cout << endl;
					}
					
					countRPG = 0;
					countHORROR = 0;
					countMMO = 0;
					countSIM = 0;
					countSPORT = 0;
					
					cout << "Which game do you want to buy? ";
					int buyChoice;
					
					for(int i = 0; i < len; i++)
					{
						cout << "Choice: ";
						cin >> buyChoice;
						cout << endl;
							
						totalAmount += objGames[buyChoice - 1].getPrice(); 		
						objCart.setList(objGames[buyChoice - 1].getName());
						objCart.setGamePrice(objGames[buyChoice - 1].getPrice());	
						
						cout << "Dou you want to continue to buy game? (1 for continue, 2 for break YAERSE little heart...) " ;
						int resume;
						cin >> resume;
						cout << endl;
						
						objCart += objGames[buyChoice - 1].getPrice();
						
						if(resume == 2)
							break;				
					}
					vector <string> tempLibraryList;
						
					tempLibraryList = objCart.Accept(objUser.getWallet());
					int tempsize = tempLibraryList.size();
					
					if(tempsize != 0){
						if(objUser.getWallet()>=totalAmount){
							objUser -= totalAmount;
							for(int i = 0; i < tempsize; i++)
							{
								(objLibrary.ownGames).push_back(tempLibraryList[i]);					
							}
						}
					}
	
				}
				
				else if(choiceUser == 4)
					objLibrary.Print();
				
				else if(choiceUser == 5)
					break;							
				
				else
					cout << "You chose wrong number..." << endl;
			}
			if(choiceUser == 5)
				break;
		}	
	if(enterenceChoice==3){
		cout<<endl<<"Goodbye :(" <<endl;
		cout<<"Hope to see you again !.."<<endl;
		cout<<endl<<"**YAERSE**";
		break;
	}
					
}
	return 0 ;
}

void AdminMenu()
{
	cout<<"-----ADMIN MENU-----"<<endl;
	cout << "1- Add Game " << endl;
	cout << "2- Edit Game " << endl;
	cout << "3- Delete Game " << endl;
	cout << "4- Add new Admin " << endl;
	cout << "5- Delete Admin " << endl;
	cout << "6- Change Password " << endl;
	cout << "7- Return Enterence Panel " << endl;
	cout << "8- Return Back" << endl;
}

void UserMenu(User obj)
{
	cout << endl;
	cout<<"-----USER MENU-----"<<endl;
	cout << "1- Show Games" << endl;
	cout << "2- Add Money to Tour Wallet" << endl;
	cout << "3- Buy Games" << endl;
	cout << "4- Show Library" << endl;
	cout << "5- Return Back" << endl;
	cout << "*YAERSE* Wallet = " << obj.getWallet() << "$";
	cout << endl;
}

vector <Game> baseGames(vector <Game> obj)
{
	Game obj0("Red Dead Redemtion 2", 299, "PC,XBOX,PS", "RPG" , 1, 45, 1);
	obj.push_back(obj0);
	Game obj1("GTA 5", 77.63 , "PC,XBOX,PS", "RPG" , 1, 35, 1);
	obj.push_back(obj1);
	Game obj2("Black Desert Online", 19, "PC,XBOX,PS", "MMORPG" , 1, 10000, 1);
	obj.push_back(obj2);
	Game obj3("New World", 133.12 , "PC", "MMORPG" , 1, 10000, 1);
	obj.push_back(obj3);
	Game obj4("Outlast", 32, "PC", "HORROR", 0, 5, 1);
	obj.push_back(obj4);
	Game obj5("Resident Evil Village", 360, "PC,XBOX,PS5", "HORROR", 0, 15, 1);
	obj.push_back(obj5);
	Game obj6("FIFA 22", 170.99, "PC,XBOX,PS", "SPORT" , 1, 200, 0);
	obj.push_back(obj6);
	Game obj7("NBA2K 2022", 215.50, "PC,XBOX,PS", "SPORT" , 1, 150, 0);
	obj.push_back(obj7);
	Game obj8("Microsoft Flight Simulator", 279.20, "PC,XBOX", "SIMULATION" , 1, 250, 0);
	obj.push_back(obj8);
	Game obj9("Euro Truck Simulator 2", 9.75 ,"PC", "SIMULATION" , 1, 300, 0);
	obj.push_back(obj9);
	return obj;
}
