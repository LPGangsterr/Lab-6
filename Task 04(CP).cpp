#include <iostream>
using namespace std;
string checkSpeed(float Speed);
main()
{
    float Speed;
    cout  <<  "Enter Your speed: ";
    cin  >>  Speed;
    checkSpeed(Speed);
}
string checkSpeed(float Speed)
{
    string velocity;
    if(Speed  <=  10)
    {
        cout  <<  "Slow";
    }
    if (Speed  >  10  &&  Speed  <=  50)
    {
        cout  <<  "Average";
    }
    if (Speed  >  50  &&  Speed  <=  150)
    {
        cout  <<  "Fast";
    }
    if (Speed  >  150  &&  Speed  <=  1000)
    {
        cout  <<  "Ultra Fast";
    }
    if (Speed  >  1000)
    {
        cout  <<  "Extremely Fast";
    }
    return velocity;
}