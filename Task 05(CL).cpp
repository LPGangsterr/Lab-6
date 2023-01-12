#include <iostream>
using namespace std;
main()
{
    char Going;
    char Lecture;
    cout  <<  "Enter Y(yes) or N(no) for lecture: ";
    cin  >>  Lecture;
    cout  <<  "Enter Y(yes) or N(no) for friends going: ";
    cin  >>  Going;
    if(Lecture  ==  'Y')
    {
        if(Going  ==  'Y')
        {
            cout  <<  "I must go to university.";
        }
    }
}