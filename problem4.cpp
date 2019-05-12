#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int first = 1;
	while (first != 30)
	{
		cout << first << ",";
		if (first < 10) { first = first + 1; }
		else { first = first + 2; }
	}
	cout << first;
	_getch();
	return 0;
}