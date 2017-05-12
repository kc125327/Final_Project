//Final Project
//05/09/2017

#include<iostream>
#include<string>

using namespace std;



int main()
{

	int yourChoice;

	cout << "You get to make the first move, 1- Attack, 2- Defend, 3- Item?";
	cin >> yourChoice;
	if (yourChoice == 1)
	{
		cout << "You attacked your opponent. Opponent chooses to defend. No damage was caused.";
		cout << "What is your next move? 1- Attack, 2- Defend, 3- Item?";
		cin >> yourChoice;

		if (yourChoice == 1)
		{
			cout << " ";
		}

	}
	if (yourChoice == 2)
	{
		cout << "You defended yourself, there was no action from the opponent.";
	}
	if (yourChoice == 3)
	{
		cout << "You used an item on your opponent. Opponent choose to do nothing, they were damaged.";

	}

	
	}
	 
	





