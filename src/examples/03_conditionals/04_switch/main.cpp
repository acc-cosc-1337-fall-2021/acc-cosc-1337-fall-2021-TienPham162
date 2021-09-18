#include<iostream>

using std::cin; using std::cout;

int main() 
{
	int num;
	cout<<"Enter a number: ";

	cin>>num;

	num < 1 ? cout<<"valid number\n" : cout<<"invalid number\n";
	
	cout<<menu(num);

	return 0;
}