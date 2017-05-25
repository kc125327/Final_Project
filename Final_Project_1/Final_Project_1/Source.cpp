//Final Project
//05/09/2017

#include<iostream>
#include<string>
#include <windows.h>
#include <mmsystem.h>

using namespace std;
int monsterHP = 100;
int yourHP = 100;
//functions
void yourChoice1()
{
	int randomNumberDamage = (rand() % 30) + 1;
	int randomNumberMonster = (rand() % 3) + 1;
	int randomHeal = (rand() % 25) + 1;
	cout << "You dealt " << randomNumberDamage << " damage" << endl;
	monsterHP = monsterHP - randomNumberDamage;
	cout << "Enemy Hp- " << monsterHP << endl;
	if (randomNumberMonster == 1)
	{
		cout << "The enemy strikes a blow! " << endl;
		yourHP = yourHP - randomNumberDamage;
		cout << "Remaining Hp: " << yourHP << endl;
	}
	if (randomNumberMonster == 2)
	{
		// monster defends complete monster defends equation 
		cout << "The monster tried to defend! Time to use an extra turn! " << endl;
		monsterHP = monsterHP - randomNumberDamage / 4;
	}
	if (randomNumberMonster == 3)
	{
		//you attacked while monster was healing complete the following equation for damage
		cout << "The enemy's  healing?" << endl;
		monsterHP = monsterHP + randomHeal;
		cout << "Enemy Hp: " << monsterHP << endl;
	}
}


void yourChoice2()
{
	int randomNumberDamage = (rand() % 30) + 1;
	int randomNumberMonster = (rand() % 3) + 1;
	int randomHeal = (rand() % 25) + 1;
	cout << "DEFENSE MODE ACTIVATED! Your puny weapon will do nothing to me! " << randomNumberDamage << endl;
	yourHP = yourHP - randomNumberDamage / 4;
	cout << "Remaining Hp- " << yourHP << endl;
	if (randomNumberMonster == 1)
	{
		cout << "The enemy strikes a blow! " << endl;
		yourHP = yourHP - randomNumberDamage;
		cout << "Remaining Hp: " << yourHP << endl;
	}
	if (randomNumberMonster == 2)
	{
		// monster defends complete monster defends equation 
		cout << "The monster tried to defend! Time to use an extra turn! " << endl;
		monsterHP = monsterHP - randomNumberDamage / 4;
	}
	if (randomNumberMonster == 3)
	{
		//you attacked while monster was healing complete the following equation for damage
		cout << "The enemy's healing?" << endl;
		monsterHP = monsterHP + randomHeal;
		cout << "Enemy Hp: " << monsterHP << endl;
	}
}


void yourChoice3()
{
	int randomNumberDamage = (rand() % 30) + 1;
	int randomNumberMonster = (rand() % 3) + 1;
	int randomHeal = (rand() % 25) + 1;
	//Change this to item. and add other info
	cout << "Time for a gold ol' estus flask. (Heal) ";
	yourHP = yourHP + randomHeal;
	cout << "You Hp was restored to- " << yourHP << endl;
	
	if (randomNumberMonster == 1)
	{
		cout << "The enemy strikes a blow! " << endl;
		yourHP = yourHP - randomNumberDamage;
		cout << "Remaining Hp: " << yourHP << endl;
	}
	if (randomNumberMonster == 2)
	{
		// monster defends complete monster defends equation 
		cout << "The monster tried to defend! Time to use an extra turn! " << endl;
		monsterHP = monsterHP - randomNumberDamage / 4;
	}
	if (randomNumberMonster == 3)
	{
		//you attacked while monster was healing complete the following equation for damage
		cout << "The enemy's healing!" << endl;
		monsterHP = monsterHP + randomHeal;
		cout << "Enemy Hp: " << monsterHP << endl;
	}
}


int main()
{
	
	string chooseAgain;
	int yourChoice;
	int countTotalRounds = 0;
	do{
		int randomNumberDamage = (rand() % 30) + 1;
		int randomNumberMonster = (rand() % 3) + 1;
		cout << "You get to make the first move, 1- Attack, 2- Defend, 3- Item?\n";
		cin >> yourChoice;
				if (yourChoice == 1)
				{
					yourChoice1();
				}
				if (yourChoice == 2)
				{
					yourChoice2();
				
				}
				if (yourChoice == 3)
				{
					yourChoice3();
				}
			
				
			cout << "If you would you like to go again press 4.  <<<" << endl;
			++countTotalRounds;
			cin >> chooseAgain;
		
	} while (chooseAgain == "4" || monsterHP == 0 || yourHP == 0);
	//ending
	if (yourHP == 0)
	{
		cout << "You Lose. Game Over." << endl;
	}
	if (monsterHP == 0)
	{
		cout << "Victory" << endl;
	}

			cout << "Match time: " << countTotalRounds << "rounds.";
	}