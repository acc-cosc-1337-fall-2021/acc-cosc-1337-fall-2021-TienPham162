﻿//write include statements
#include <iostream>
#include "data_types.h"

//write namespace using statement for cout
using namespace std;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main() 
{
	int num;

cout<<"Enter a number: ";
cin>>num;

int result = multiply_numbers(num);
cout<<"Result = "<<result<<endl;

int num1 = 4;

    result = multiply_numbers(num1);
	cout<<"Result = "<<result<<endl;

return 0;
}
