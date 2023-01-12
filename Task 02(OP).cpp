#include <iostream>
using namespace std;
main()
{
    int number1;
    int number2;
    int number3;
    cout  <<  "Enter 1st number: ";
    cin  >>  number1;
    cout  <<  "Enter 2nd number: ";
    cin  >>  number2;
    cout  <<  "Enter 3rd number: ";
    cin  >>  number3;
    if(number1  >  number2  &&  number1  >  number3)
    {
        cout  <<  "Greatest number is "  <<  number1  <<  "."  <<  endl;
    }
    if(number2  >  number1  &&  number2  >  number3)
    {
        cout  <<  "Greatest number is "  <<  number2  <<  "."  <<  endl;
    }
    if(number3  >  number1  &&  number3  >  number2)
    {
        cout  <<  "Greatest number is "  <<  number3  <<  "."  <<  endl;
    }
}