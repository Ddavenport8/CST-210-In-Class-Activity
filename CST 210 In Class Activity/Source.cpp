//Daniel Davenport
//This is my own work
#include <iostream>

using namespace std;
/*
int main()
{
	float x; //creates variable for input
	cout << "Please inset number of pounds to be converted into kilograms \n"; //asks for input
	cin >> x; //gathers input
	cout << x << " pounds is " << x * 0.454 << " kilograms";

	return 0;
}

int main()
{
	double w; //creates variable for input
	cout << "Please inset the length of one side of a hexagon \n"; //asks for input
	cin >> w; //gathers input
	cout << w << " The hexagon has an area of " << ((3 * sqrt(3)) / 2) * (w * w) << " units";

	return 0;
}
*/

int main()
{
	float firstnum;
	float secondnum;
	cout << "Enter two numbers to see which one is greater ";
	cin >> firstnum;
	cin >> secondnum;

	if (firstnum > secondnum)
		cout << firstnum << " is greater than " << secondnum;
	else if (secondnum > firstnum)
		cout << secondnum << " is greater than " << firstnum;
	else
		cout << firstnum << " is equal to " << secondnum;
}