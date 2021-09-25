#include <vector>
#include <iostream>
#include <string>

using std::vector;

int main()
{
    vector<char> letters;
    letters.push_back(1);
    letters.push_back(2);
    letters.push_back(3);

    for(auto 1: letters)
    { 
        std::cout<<1<<"\n";
    }

    vector<std::string>names {"mary", "joe", "jack"};

    for(auto name: names)
    {
        std::cout<< names <"\n";

    }
    

    return 0;
}