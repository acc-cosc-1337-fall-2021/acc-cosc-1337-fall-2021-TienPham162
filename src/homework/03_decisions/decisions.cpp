//write include statement for decisions header
#include "decisions.h"

//Write code for function(s) code here
string get_letter_grade_using_if(int grade)
{
    if (90 <= grade && grade <= 100)
    {
        return "A";
    }
    else if (80 <= grade)
    {
        return "B";
    }
    else if (70 <= grade)
    {
        return "C";
    }
    else if (60 <= grade)
    {
        return "D";
    }
    else if (00 <= grade)
    {
        return "F";
    }

}


string get_letter_grade_using_switch(int grade)
{
    switch(grade)
    {
        case 90 ... 100:
            return "A";
            break;
        case 80 ... 89:
            return "B";
            break;
        case 70 ... 79:
            return "C";
            break;
        case 60 ... 69:
            return "D";
            break;
        case 00 ... 59:
            return "F";
            break;
    }
    
}