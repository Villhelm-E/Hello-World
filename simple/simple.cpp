// simple.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{
	int i = 0;
	int j = 0;
	bool keepgoing = true;

	srand(time(NULL));

	cout << "Pick a number, any integer number: ";
	cin >> i;

	cout << "The number you entered is " << i << endl;

	j = (i * (rand() % 100) / 100) + 1;

	while (keepgoing)
	{
		cout << "Pick a number between " << i << " and 0: " << endl;
		cin >> i;

		if (i > j)
		{
			cout << "Your number, " << i << ", is greater than my number." << endl;
		}
		if (i == j)
		{
			cout << "Your number, " << i << ", is the same as my number!" << endl;
			keepgoing = false;
		}
		if (i < j)
		{
			cout << "Your number, " << i << ", is less than my number." << endl;
		}
	}
	

	return 0;
}