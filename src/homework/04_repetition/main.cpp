//write include statements
#include "dna.h"
#include <iostream>

//write using statements
using namespace std;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	char options;
	MENU: do
	{ 
		cout << "Menu\n\n";
		cout << "1-Factorial" << endl;
		cout << "2-Greatest Common Divisor" << endl;
		cout << "3-Exit\n";
		cout << "Enter your option number: ";

		cin >> options;

	}
	while (options != '1' && options != '2' && options != '3');

	if (options == '1')
	{
		int number, sum;
		cout << "Enter a number: ";
		cin >> number;
		sum = factorial(number);

		cout << "The factorial sum is: " << sum << endl;

		goto MENU;
	}
	
	else if (options == '2')
	{
		int num1, num2, result;
		cout << "Enter first number: ";
		cin >> num1;
		cout << "Enter second number: ";
		cin >> num2;
		result = gcd(num1, num2);

		cout << "The gcd number is: " << result << endl;

		goto MENU;
	}
	
	else 
	{
	
		char confirm;
		do
		{
			cout << "Are you sure you want to exit? (y/n) ";
			cin >> confirm;
		}
		while(confirm != 'y' && confirm != 'Y' && confirm != 'n' && confirm != 'N' );
		
		if (confirm == 'y' || confirm =='Y')
		{
			return 0;
		}
		else
		{
			goto MENU;
		}
	
	}
	return 0;

}
