//write include statements
#include <iostream>
#include <string>
#include "decisions.h"

using namespace std;


int main()
{
	int number;
	cout << "Main Menu\n\n";
	cout << "1-Letter grade using if\n";
	cout << "2-Letter grade using switch\n";
	cout << "3-Exit\n";
	cin >> number;
	
	int grade;
	string score;
	cout << "Enter your grade: ";
	cin >> grade;
	
	if (number == 1)
	{
		score = get_letter_grade_using_if(grade);
		cout << "Your letter grade using if is: " << score << "." << endl;

	}
	
	else if (number == 2)
	{
		score = get_letter_grade_using_switch(grade);
		cout << "Your letter grade using switch is: " << score << "." << endl;
		
	}

	else if (number == 3) 
	{
		return 0;
	}


	return 0;
}