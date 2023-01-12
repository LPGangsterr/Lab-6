#include <iostream>
using namespace std;
main()
{
    float Age;
    char Gender;
    cout  <<  "Enter your age: ";
    cin  >>  Age;
    cout  <<  "Enter your gender(m,f): ";
    cin  >>  Gender;
    if(Age  >=  16  &&  Gender  ==  'm')
    {
        cout  <<  "Mr.";
    }
    if(Age  >=  16  &&  Gender  ==  'f')
    {
        cout  <<  "Ms.";
    }
    if(Age  <  16  &&  Gender  ==  'm')
    {
        cout  <<  "Master";
    }
    if(Age  <  16  &&  Gender  ==  'f')
    {
        cout  <<  "Miss";
    }
}
