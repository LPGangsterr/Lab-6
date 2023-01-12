#include <iostream>
using namespace std;
main()
{
    string Name;
    int rollNo;
    cout  <<  "Enter your roll no: ";
    cin  >>  rollNo;
    cout  <<  "Enter your name: ";
    cin  >>  Name;
    if(rollNo  ==  501  &&  Name  ==  "Ali")
    {
        cout  <<  "Congrats! You got admission in U.E.T";
    }
}