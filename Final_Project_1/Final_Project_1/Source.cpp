//Final Project
//05/09/2017

#include<iostream>
#include<string>

using namespace std;

//functions
int attack(int yourChoice)//first choice 1 in story
{
	int r;
	cout << "\n\n You attacked your opponent. Opponent chooses to defend. No damage was caused.";
	cout << "\n\n What is your next move? 1- Attack, 2- Defend, 3- Item?";
	cin >> yourChoice;

	if (yourChoice == 1)
	{
		cout << "\n\n You attacked your opponent. They are damaged. \n\n" << "Your opponent attacked you. Your health has gone down.";
		cout << "\n\n What is your next move? 1- Attack, 2- Defend, 3- Item?";
		cin >> yourChoice;
	}
			if (yourChoice == 1)
			{
				cout << "\n\n You attacked your opponent.";
				cout << "\n\n What is your next move? 1- Attack, 2- Defend, 3- Item?";
				cin >> yourChoice;
			}
					if (yourChoice == 1)
						{
							cout << "\n\n You attacked your opponent.";
							cout << "\n\n What is your next move? 1- Attack, 2- Defend, 3- Item?";
							cin >> yourChoice;
						}
					if (yourChoice == 2)
					{
						cout << "\n\n You defended yourself. ";
						cout << "\n\n What is your next move? 1- Attack, 2- Defend, 3- Item?";
						cin >> yourChoice;
					}
					if (yourChoice == 3)
					{
						cout << "You choose to use an Item.";
						cout << "\n\n What is your next move? 1- Attack, 2- Defend, 3- Item?";
						cin >> yourChoice;
					}
			if (yourChoice == 2)
			{
				cout << "\n\n You defended yourself. ";
				cout << "\n\n What is your next move? 1- Attack, 2- Defend, 3- Item?";
				cin >> yourChoice;
			}



			if (yourChoice == 3)
			{
				cout << "You choose to use an Item.";
				cout << "\n\n What is your next move? 1- Attack, 2- Defend, 3- Item?";
				cin >> yourChoice;
			}

	if (yourChoice == 2)
	{
		cout << "\n\n You defended yourself. Your opponent attacked. Your health is the same.";
		cout << "\n\n What is your next move? 1- Attack, 2- Defend, 3- Item?";
		cin >> yourChoice;
	}

	if (yourChoice == 3)
	{
		cout << "\n\n You used an item. ";
		cout << "\n\n You choose to use an item.";
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
