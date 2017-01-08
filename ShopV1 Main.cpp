#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <list>
#include <string>
#include "items.h"

std::string playerName = "null";

int gold = 0;

int playerSelection = 0;

bool game_Loop = true;

std::list <items> shopInventory;




void printShopItems() 
{


}



void shopIntro()
{
	std::cout << playerName << std::endl;
	std::cout << "You have " << gold << "g\n";
	std::cout << "\n" << "Would you like to Buy,Sell,Checkinventory or Scavenge\n";
	std::cin >> playerSelection;

	switch (playerSelection) 
	{
	case 0:
	{
		game_Loop = false;
		break;
	}
	case 1: //buy
	{
			
		shopInventory.push_back(items("name", 10, 1));

	}
	case 2: //sell
	{
	
	}
	case 3: //check inventory
	{

	}
	case 4: //Scavenge
	{
		int rNum = 0;
		int attempts = 1;
		srand(time(0));
		while (rNum != 10) {
			rNum = rand() % 100 + 1;
			std::cout << rNum << std::endl;
			attempts++;
		}
		if (attempts >= 100 && attempts <= 200)
		{
			std::cout << " You have found nothing of value\n";
		
		}
		else 
		{
			gold += 10;
			std::cout << " You have found 10g\n";

		}
		if (attempts <= 50) 
		{
			gold += 25;
			std::cout << " You have found 25g\n";
		
		}
		if (attempts <= 10) 
		{
			gold += 200;
			std::cout << " You have found 200g\n";
		
		}
		if (attempts == 1) 
		{
			gold += 5000;
			std::cout << " You have found 5000g\n";

		}
		if (attempts >= 200 && attempts < 250)
		{
			std::cout << playerName << " Was Wounded";
				gold -= 100;

		}
		if (attempts >= 250) {
			std::cout << playerName << " Was Killed\n";
			int temp = 1;
			std::cout << "It took " << attempts << " attempts\n";
			std::cin >> temp;
			game_Loop = false;
		
		}
		
		
		std::cout << "It took " << attempts << " attempts\n";

	
	}




	}



}


int main() 
{
	std::cout << "Enter Player Name\n";
	std::cin >> playerName;

	while (game_Loop)
	{
		shopIntro();
	
	}

	return 1;








}
