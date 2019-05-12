

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

	int n;

	do {
		cout << "Enter a number: ";
		cin >> n;
		int total = 0;
		if (n > 0) 
		{
			for (int i = 1; i <= n; ++i) 
			{
				total = total + i;
			}
			cout << "The sum of all whole numbers from 1 to" << " " << n << " " << "is: " << total << endl;
		}
		else {
			cout << "Thanks!";
		}

	} while (n != 0);

	_getch();
	return 0;

}