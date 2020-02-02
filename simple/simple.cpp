// simple.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <math.h>
#include <sstream>
using namespace std;

int count_numbers(int num) {
	int count = 0;
	while (num != 0) {
		count++;
		num /= 10;
	}
	return count;
}

int randbetween(int upperbound, int lowerbound, double rnd) {
	return (upperbound - lowerbound + 1) * rnd + lowerbound;
}

int main()
{
	int i = 0;
	int j = 0;
	double p = 0;
	int rn = 0;
	int count = 0;
	bool keepgoing = true;

	srand(time(NULL));

	cout << "Pick a number, any integer number: ";
	cin >> i;

	cout << "The number you entered is " << i << endl;
	
	rn = rand();

	count = count_numbers(rn);

	p = rn / pow(10, count);
	
	j = randbetween(i, 0, p);

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

