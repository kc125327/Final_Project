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
			cout << "You attacked your opponent. They are damaged. \n\n" << "Your opponent attacked you. Your health has gone down.";
			cout << "What is your next move? 1- Attack, 2- Defend, 3- Item?";
			cin >> yourChoice;
		}
		
		if (yourChoice == 2)
		{
			cout << "You defended yourself. Your opponent attacked. Your health is the same.";
			cout << "What is your next move? 1- Attack, 2- Defend, 3- Item?";
			cin >> yourChoice;
		}

		if (yourChoice == 3)
		{

		}


	}


	if (yourChoice == 2)
	{
		cout << "You defended yourself. Your opponent defended. No health was damaged.";
		cout << "What is your next move? 1- Attack, 2- Defend, 3- Item?";
		cin >> yourChoice;
	}


	if (yourChoice == 3)
	{
		cout << "You used an item on your opponent. Opponent choose to do nothing, they health has gone down.";

	}

	
	}
	 
	





