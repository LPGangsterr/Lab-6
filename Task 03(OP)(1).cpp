#include <iostream>
using namespace std;
bool greaterNumber(int number1,int number2,int number3);
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
    cin  >> number3;
    greaterNumber(number1,number2,number3);
}
bool greaterNumber(int number1,int number2,int number3)
{
    if(number1  ==  number2  &&  number1  ==  number3)
    {
        cout  <<  "Yes";
    }
    if(number1  !=  number2  &&  number1  ==  number3)
    {
        cout  <<  "No";
    }
    if(number1  !=  number2  &&  number1  !=  number3)
    {
        cout  <<  "No";
    }
    return 0;
}