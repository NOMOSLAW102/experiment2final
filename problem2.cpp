#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int gallons;
	double unpaid, total;


	cout << "If you have any amount unpaid from last month, type in the amount and press enter. \nIf you do not have any unpaid amount, type in '0' and press enter."<< endl;	cin >> unpaid;
	cout << "Check your meter, type in the gallons you currently consumed for this billing cycle and press enter. " << endl;	cin >> gallons;


	if (unpaid > 0)
	{
		total = unpaid + 20 + 35 + (1.10 * gallons) ;
		cout << "\nTotal amount to pay: P" << total<< endl;
	}

	else 
	{
		total = 35 + (1.10 * gallons);
		cout << "\nTotal amount to pay: P" << total<< endl;
	}

	_getch();
	return 0;
}