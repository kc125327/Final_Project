//Final Project
//05/09/2017

#include<iostream>
#include<string>

using namespace std;
int monsterHP = 100;
int yourHP = 100;


//functions

int attack(int yourChoice)//first choice 1 in story
{
	int r;
	cout << "\n\n You attacked your opponent. Opponent chooses to defend. No damage was caused.";
	cout << "\n\n What is your next move? 1- Attack, 2- Defend, 3- Item?";
	cin >> yourChoice;

	if (yourChoice == 1)
	{
		
		cout << "You did this amount of damage " << randomNumberDamage();
		monsterHP = monsterHP - randomNumberDamage();
		cout << "The remaining hit points on monster is " << monsterHP;
		main();
		if (randomNumberMonster() == 1)
		{
		//your health is affected by the full monster attack

		}
		if (randomNumberMonster() == 2)
		{
			// monster defends complete monster defends equation 
		}

		if (randomNumberMonster() == 3)
		{
		//you attacked while monster was healing complete the following equation for damage
		}
	}

	if (yourChoice == 2)
	{
		cout << "You are defending against the monster or whatever\n";
		yourHP = yourHP - randomNumberDamage() / 4;
		cout << "Your current health is " << yourHP;
	}

	if (yourChoice == 3)
	{
		cout << "\n\n You used an item. This is how much you healed  " << randomNumberHp();
		yourHP = randomNumberHp() + yourHP;
		cout << "The your remaining health is " << yourHP;		
	}
	
	return r;
}
int defend(int yourChoice)//Second choice in the story
{
	cout << "You defended yourself. Your opponent defended. No health was damaged.";
	cout << "What is your next move? 1- Attack, 2- Defend, 3- Item?";
	cin >> yourChoice;
}

int item(int yourChoice)//Third choice in the story
{
	cout << "You used an item, ";
}

int randomNumberHp()
{
	int hp = 0;
	int r = (rand() % 10) + 1;

}
int randomNumberEnemy()
{
	int hp = 0;
	int t = (rand() % 10) + 1;
}
int randomNumberDamage()
{
	int hp = 0;
	int e = (rand() % 30) + 1;
}
int randomNumberMonster()//Monsters choice
{
	int e = 0;
	int f = (rand() % 3) + 1;

}

int main()
{

	string chooseAgain;
	int yourChoice;
	int countTotalRounds = 0;
	do{
		cout << "You get to make the first move, 1- Attack, 2- Defend, 3- Item?";
		cin >> yourChoice;
		if (yourChoice == 1)
		{
			attack(yourChoice);
		}
		if (yourChoice == 2)
		{
			defend(yourChoice);
		}
		if (yourChoice == 3)
		{
			item(yourChoice);

		}

		cout << "Would you like to go again? <<<";
		++countTotalRounds;
		cin >> chooseAgain;
	}while(chooseAgain == "Yes");
	cout << "You did " << countTotalRounds << "rounds.";





}



