#include <string>
#include <iostream>

using std::string; using std::cout;

int main()
{
    char letter = 'a';

    string alpha = "abcdscducunnas";
    cout<<"My size:    "<< alpha.size()<< "\n";
    cout<<"My lenght:   "<< alpha.length()<< "\n";
    cout<<"alpha.capacity:  "<< alpha.capacity()<<"\n";
    cout<<"add e";
    alpha.push_back('e');
    cout<<"My lenght: "<<alpha.length()<<"\n";
    cout<<"alpha capacity: "<<alpha.capacity()<<"\n";
    cout<<alpha<<"\n";

    string s1;
    string s2(alpha);
    string s3(10,'x');
    string s4(alpha, 8, 3);

    cout<<s1<<"\n";
    cout<<s2<<"\n";
    cout<<s3<<"\n";
    cout<<s4<<"\n";
    cout<<alpha[2]<<"\n";
    alpha[2] = 'c'; //reference/ direct access to memory location
    cout<<alpha[2]<<"\n";


    return 0;
}