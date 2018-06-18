// Good_Bad_swap.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void Normal(int x, int y);
void Hacked(int& x, int& y);

int main()
{
	// variable with deposit amount
	int terroristAcct = 1500;
	int joesCoffeeShop = 100;

	//Displays the account
	cout << "Before Transaction\n";
	cout << "-------------------------------------------" << endl;
	cout << "Terrorist Account: " << terroristAcct << "\n";
	cout << "Joe's Coffee Shop: " << joesCoffeeShop << "\n\n";

	//shows the account amounts after bad swap
	cout << "\nAfter Normal Transaction\n";
	cout << "-------------------------------------------" << endl;
	Normal(terroristAcct, joesCoffeeShop);
	cout << "Terrorist Account: " << terroristAcct << "\n";
	cout << "Joe's Coffee Shop: " << joesCoffeeShop << "\n\n";

	//shows accounts after Good Swap
	cout << "\nAfter Hacked Transaction\n";
	cout << "-------------------------------------------" << endl;
	Hacked(terroristAcct, joesCoffeeShop);
	cout << "Terrorist Account: " << terroristAcct << "\n";
	cout << "Joe's Coffee Shop: " << joesCoffeeShop << "\n";
	system("pause");
	
    return 0;
}

// switches the values attached to x and y variables and forgets it after funcitons done
void Normal(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

// switches actual terrorist and joe's variables and keeps the change.
void Hacked(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
