//write include statements
#include <iostream>
#include "hwexpressions.h"
#include <iomanip>



//write namespace using statement for cout
using namespace std;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount, total;
	
	cout << "The number of meal: ";
	cin >> meal_amount;
	tax_amount = get_sales_tax_amount(meal_amount);
	
	cout << "Tip Rate: ";
	cin >> tip_rate;
	tip_amount = get_tip_amount(meal_amount, tip_rate);
	cout << endl;

	total = tip_amount + tax_amount + meal_amount;

	cout << left << setw(20) << "Meal Amount: " << meal_amount << endl;
	cout << left << setw(20) << "Sale Tax: " << tax_amount << endl;
	cout << left << setw(20) << "Tip Amount: " << tip_amount << endl;
	cout << left << setw(20) << "Total: " << total << endl;

 
	return 0;
}
