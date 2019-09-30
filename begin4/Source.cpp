#include <iostream>
#include "Header.h"
using namespace std;
void l()
{
	cout << "Enter centimeters to see how many meters it is\n";
	double a;
	cin >> a;
	double b = a / 100;
	cout << "It is" << b << " meters";

}