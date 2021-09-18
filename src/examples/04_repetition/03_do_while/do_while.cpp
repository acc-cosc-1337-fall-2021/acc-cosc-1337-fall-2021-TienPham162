#include "do_while.h"
#include<iostream>

using std::cout;

//Write code for void function prompt_user to loop until
//user opts not to continue.  

void display_menu()
{
    cout<<"1_Receiables\n";
    cout<<"2-Payroll\n";
    cout<<"3-Payroll\n";
    cout<<"4-Exit\n";

}
void recivables()
{
    cout<<"\nYou are in Receiables module\n";

}

void payroll()
{
    cout<<"payroll\n";
}

void prompt_user()
{
    auto choice = 'y';

    do
    {
        display_menu();
        cout<<"Enter number from 1-4"
        std::cin>>menu_choice;

        switch (menu_choice)
        {
        case 1: recivables();
                       break;
        case 2:   payables();
                       break;
        case 3:    payroll(); 
                       break;
        case 4:
            cout<<"Type y to exist, n to cancel\n";
            std::cin>>choice;
            break;
        default:
            cout<<"Invalid Choice\n";
            break;
        }

    } 
    while (choice == 'y');
    
}


