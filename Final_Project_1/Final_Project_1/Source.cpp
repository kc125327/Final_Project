//Final Project
//05/09/2017

#include<iostream>
#include<string>

using namespace std;
int monsterHP = 100;
int yourHP = 100;



int main()
{

	string chooseAgain;
	int yourChoice;
	int countTotalRounds = 0;
	do{
		int randomNumberDamage = (rand() % 30) + 1;
		int randomNumberEnemy = (rand() % 30) + 1;
		int randomNumberMonster = (rand() % 3) + 1;
		cout << "You get to make the first move, 1- Attack, 2- Defend, 3- Item?\n";
		cin >> yourChoice;
		if (yourChoice == 1)
		{
			cout << "You did this amount of damage " << randomNumberDamage <<endl;
			monsterHP = monsterHP - randomNumberDamage;
			cout << "The remaining hit points on monster is " << monsterHP << endl;
			if (randomNumberMonster == 1)
			{
				cout << "Your health is affected by the full monster attack"<<endl;
				yourHP = randomNumberDamage + yourHP;
				cout << "Your remaning health is " << yourHP << endl;
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
		

		cout << "Would you like to go again? <<<" << endl;
		++countTotalRounds;
		cin >> chooseAgain;
	}while(chooseAgain == "Yes");
	cout << "You did " << countTotalRounds << "rounds.";





}



