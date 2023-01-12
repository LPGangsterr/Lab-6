#include <iostream>
using namespace std;
main()
{
    int Number1;
    int Number2;
    cout  <<  "Enter 1st number: ";
    cin  >>  Number1;
    cout  <<  "Enter 2nd number: ";
    cin  >>  Number2;
    if(Number1  >  Number2)
    {
        cout  <<  "Greater number is "  <<  Number1  <<  ".";
    }
    else
    {
        cout  <<  "Greater number is "  <<  Number2  <<  ".";
    }
}