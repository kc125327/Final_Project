//Final Project
//05/09/2017

#include<iostream>
#include<string>

using namespace std;
int monsterHP = 100;
int yourHP = 100;
//functions
void yourChoice1()
{
	int randomNumberDamage = (rand() % 30) + 1;
	int randomNumberMonster = (rand() % 3) + 1;
	cout << "You did this amount of damage " << randomNumberDamage << endl;
	monsterHP = monsterHP - randomNumberDamage;
	cout << "The remaining hit points on monster is " << monsterHP << endl;
	if (randomNumberMonster == 1)
	{
		cout << "Your health is affected by the full monster attack" << endl;
		yourHP = randomNumberDamage + yourHP;
		cout << "Your remaining health is " << yourHP << endl;
	}
	if (randomNumberMonster == 2)
	{
		// monster defends complete monster defends equation 
		cout << "The monster defended, you attack as the monster defends." << endl;
		monsterHP = monsterHP + randomNumberDamage / 4;
	}
	if (randomNumberMonster == 3)
	{
		//you attacked while monster was healing complete the following equation for damage
		cout << "You attacked while the monster was healing." << endl;
		monsterHP = randomNumberDamage + monsterHP;
		cout << "The remaining hit points on the monster is " << monsterHP << endl;
	}
}


void yourChoice2()
{
	int randomNumberDamage = (rand() % 30) + 1;
	int randomNumberMonster = (rand() % 3) + 1;
	cout << "You defended. The damage from the monster is  " << randomNumberDamage << endl;
	yourHP = yourHP - randomNumberDamage / 4;
	cout << "The remaining hit points on you is " << yourHP << endl;
	if (randomNumberMonster == 1)
	{
		cout << "Your health is affected by the full monster attack" << endl;
		yourHP = randomNumberDamage - yourHP;
		cout << "Your remaining health is " << yourHP << endl;
	}
	if (randomNumberMonster == 2)
	{
		// monster defends complete monster defends equation 
		cout << "The monster defended, you attack as the monster defends." << endl;
		monsterHP = monsterHP + randomNumberDamage / 4;
	}
	if (randomNumberMonster == 3)
	{
		//you attacked while monster was healing complete the following equation for damage
		cout << "You attacked while the monster was healing." << endl;
		monsterHP = randomNumberDamage + monsterHP;
		cout << "The remaining hit points on the monster is " << monsterHP << endl;
	}
}


void yourChoice3()
{
	int randomNumberDamage = (rand() % 30) + 1;
	int randomNumberMonster = (rand() % 3) + 1;
	int randomNumberHP = (rand() % 10) + 1;
	//Change this to item. and add other info
	cout << "You went for an item.";
	yourHP = yourHP + randomNumberHP;
	cout << "The remaining hit points on you is " << yourHP << endl;
	
	if (randomNumberMonster == 1)
	{
		cout << "Your health is affected by the full monster attack" << endl;
		yourHP = randomNumberDamage - yourHP;
		cout << "Your remaining health is " << yourHP << endl;
	}
	if (randomNumberMonster == 2)
	{
		// monster defends complete monster defends equation 
		cout << "The monster defended, you attack as the monster defends." << endl;
		monsterHP = monsterHP + randomNumberDamage / 4;
	}
	if (randomNumberMonster == 3)
	{
		//you attacked while monster was healing complete the following equation for damage
		cout << "You attacked while the monster was healing." << endl;
		monsterHP = randomNumberDamage + monsterHP;
		cout << "The remaining hit points on the monster is " << monsterHP << endl;
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
			
				
			cout << "Would you like to go again? <<<" << endl;
			++countTotalRounds;
			cin >> chooseAgain;
		
	} while (chooseAgain == "Yes" || monsterHP == 0 || yourHP == 0);
	//ending
	if (yourHP == 0)
	{
		cout << "You Lose. Game Over." << endl;
	}
	if (monsterHP == 0)
	{
		cout << "Victory" << endl;
	}

			cout << "You did " << countTotalRounds << "rounds.";
	}