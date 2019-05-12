#include <iostream>
#include <conio.h>
using namespace std;

int main()

{
	char a;
	cout << "Please enter what internet package you are subscribed to.\nEnter A, if it's package A. \nEnter B, if it's package B.\nEnter C, if it's package C. " << endl;
	cin >> a;
	switch (a)
	{
		double total, totalB, totalC;
	case 'A':
	case 'a':
		cout << "Package A : For P995/mo 10 hrs of access is provided. Additional hours are P20/hr. \n\nIf you want to know how much your bill is, enter the number of hours\nyou consumed in using our internet service this month." << endl;
		cin >> total;
		if (total <= 10)
			cout << "Bill for this month: $995";
		else if (total > 10)
			cout << "Bill for this month: $" << (995) + (total - 10) * 20 << endl;
		else
			cout << "Invalid input" << endl;
		break;


	case 'B':
	case 'b':
		cout << "Package B: For P1495/mo 20 hrs of access is provided. Additional hours are P10/hr. \n\nIf you want to know how much your bill is, enter the number of hours\nyou consumed in using our internet service this month." << endl;
		cin >> total;
		if (total <= 20)
			cout << "Bill for this month: $1495";
		else if (total > 20)
			cout << "Bill for this month: $" << (1495) + (total - 20) * 10 << endl;
		else
			cout << "Invalid input" << endl;
		break;

	case 'C':
	case 'c':

		cout << "Monthly Bill: $1995 " << endl;

		break;

	default: 
		cout << "Invalid Input";
	}
	_getch();
	return 0;
}