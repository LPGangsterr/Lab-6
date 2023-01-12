#include <iostream>
using namespace std;
main()
{
    int Marks;
    cout  <<  "Enter your marks: ";
    cin  >>  Marks;
    if(Marks  >  39)
    {
        cout  <<  "You have passed.";
    }
    else
    {
        cout  <<  "You have failed.";
    }
}