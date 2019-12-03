// 2019059_T2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;
int powercalc(int base, int pow);
int main()
{
	int term, pow;
	cout << "Enter your base" << endl;
	cin >> term;
	cout << "enter your exponent"<<endl;
	cin >> pow;
	cout<<powercalc(term,pow);
}
int powercalc(int base, int pow)
{
	if (pow > 1)
	{
		return base * (powercalc(base, pow - 1));
	}
	return base;
}
