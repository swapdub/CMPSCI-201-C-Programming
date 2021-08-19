/*
Swapnil Dubey
CMPSC 201 - SPRING 2016
SECTION 004

Purpose : Simulate a game using the concepts of the lottery.

Input: The amount of money that the user is starting with and the 2 digit walue that they guess everytime they play.

Processing : Ask for the money the user starts with and their guess for the lottery. Test if their input is valid or not. Generate a random
			number and compare their digits with the user's number by using the integer data type's property. Check if the critera for the 
			lottery is met and alot prizes accordingly. Check if their funds are suffecient for another chance and if they are willing to play again.
			Repeat the process.

Output: If they win, then the prize amount with a question asking if they want to play again.
		Thank you if the user doesn't want to play anymore.
		If they dont have insuffecient funds then a message is displayed telling them to recharge.
*/

#include<iostream>
#include <iomanip>
#include <cstdlib>
#include <cctype>

using namespace std;

int main()
{
	int p, randomnumber;
	double usermoney;
	char play;

	cout << "Enter the amount of money that you want to play with:\n";
	cin >> setprecision(2) >> usermoney;

	while (usermoney < 100)
	{
		cout << "You should have atleast $100 to play the game. Enter amount again:\n";
		cin >> setprecision(2) >> usermoney;
	}
	cout << "Enter a value of your choice between 0 and 99 for the lottery:\n";
	cin >> p;

	while (p < 0 || p > 100)
	{
		cout << "Invalid input. Please enter a digit between 0 and 99 :\n";
		cin >> p;
	}
	randomnumber = rand() % 100;


	do
	{
		usermoney = usermoney - 100;
		
		if (p == randomnumber)
		{
			usermoney = usermoney + 5000;
			cout << "Congratulations you won $5000.\n" << "Your new balane is:   " << usermoney << "\nWould you like to try to win more? (Y/N)\n";
			cin >> play;
			if (toupper(play) == 'Y')
			{
				if (usermoney >= 100)
				{
					cout << "Enter a value of your choice between 0 and 99 for the lottery:\n";
					cin >> p;

					while (p < 0, p > 100)
					{
						cout << "Invalid input. Please enter a digit between 0 and 99 :\n";
						cin >> p;
					}
					randomnumber = rand() % 100;
				}
			}
				else if (usermoney >= 100)
				{
					cout << "Thank you for your money. Hope you get addicted and lose more next time.\n";
				}
		}
		else if (p/10==randomnumber%10 && p%10==randomnumber/10)
		{
			usermoney = usermoney + 2000;
			cout << "Congratulations you won $2000.\n" << "Your new balane is:   " << usermoney << "\nWould you like to try to win more? (Y/N)\n";
			cin >> play;
			if (toupper(play) == 'Y')
			{
				if (usermoney >= 100)
				{
					cout << "Enter a value of your choice between 0 and 99 for the lottery:\n";
					cin >> p;

					while (p < 0, p > 100)
					{
						cout << "Invalid input. Please enter a digit between 0 and 99 :\n";
						cin >> p;
					}
					randomnumber = rand() % 100;
				}
			}
				else if (usermoney >= 100)
				{
					cout << "Thank you for your money. Hope you get addicted and lose more next time.\n";
				}
		}
		else if ((p / 10 == randomnumber % 10) || p % 10 == randomnumber / 10 || (p / 10 == randomnumber / 10) || p % 10 == randomnumber % 10)
		{
			usermoney = usermoney + 500;
			cout << "Congratulations you won $500.\n" << "Your new balane is:   " << usermoney << "\nWould you like to try to win more? (Y/N)\n";
			cin >> play;
			if (toupper(play) == 'Y')
			{
				if (usermoney >= 100)
				{
					cout << "Enter a value of your choice between 0 and 99 for the lottery:\n";
					cin >> p;

					while (p < 0, p > 100)
					{
						cout << "Invalid input. Please enter a digit between 0 and 99 :\n";
						cin >> p;
					}
					randomnumber = rand() % 100;
				}
			}
				else if (usermoney >= 100)
				{
					cout << "Thank you for your money. Hope you get addicted and lose more next time.\n";
				}
		}
		else
		{
			cout << "Sorry you did not win anything.\n" << "Your new balane is:   " << usermoney << "\nWould you like to try again? (Y/N)\n";
			cin >> play;
			if (toupper(play) == 'Y')
			{
				if (usermoney >= 100)
				{
					cout << "Enter a value of your choice between 0 and 99 for the lottery:\n";
					cin >> p;

					while (p < 0, p > 100)
					{
						cout << "Invalid input. Please enter a digit between 0 and 99 :\n";
						cin >> p;
					}
					randomnumber = rand() % 100;
				}
			}
				else if (usermoney >= 100)
				{
					cout << "Thank you for your money. Hope you get addicted and lose more next time.\n";
				}
}
	
	} while (usermoney >= 100 && toupper(play) == 'Y');

	if (usermoney <= 100 && (toupper(play) == 'Y'))
	{
		cout << "Insufficient funds. You should have atleast 100. Get more money to continue playing.\n";
	}


}