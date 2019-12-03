// 2019059_T1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int sumnat(int x);
int main()
{
	int term;
	cout << "Enter a positive number";
	cin >> term;
	cout << sumnat(term);

}
int sumnat(int x)
{
	if (x > 1)
	{
		return x + sumnat(x-1);
	}
	return x;

}


