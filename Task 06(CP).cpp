#include <iostream>
#include <cmath>
using namespace std;
float lowestPrice(int kilometers,string time);
main()
{
    int kilometers;
    string time;
    cout  <<  "Enter number of kilometers: ";
    cin  >>  kilometers;
    cout  <<  "Enter traveling vechile time: ";
    cin  >>  time;
    lowestPrice(kilometers,time);
}
float lowestPrice(int kilometers,string time)
{
    float Bus;
    float Taxi;
    float Train;
    if(time  ==  "Day")
    {
        Taxi = 0.79 * kilometers;
        Train = 0.06 * kilometers;
        Bus = 0.09 * kilometers;
        if(Taxi  <  Train  &&  Taxi  <  Bus)
        {
            cout  <<  "Minimum fair for "  <<  kilometers  <<  " kilometers is "  <<  Taxi  <<  endl;
        }
        if(Train  <  Taxi  &&  Train  <  Bus)
        {
            cout  <<  "Minimum fair for "  <<  kilometers  <<  " kilometers is "  <<  Train  <<  endl;
        }
        if(Bus  <  Train  &&  Bus  <  Taxi)
        {
            cout  <<  "Minimum fair for "  <<  kilometers  <<  " kilometers is "  <<  Bus  <<  endl;
        }
    }
    if(time  ==  "Night")
    {
        Taxi = 0.90 * kilometers;
        Train = 0.06 * kilometers;
        Bus = 0.09 * kilometers;
        if(Taxi  <  Train  &&  Taxi  <  Bus)
        {
            cout  <<  "Minimum fair for "  <<  kilometers  <<  " kilometers is "  <<  Taxi  <<  endl;
        }
        if(Train  <  Taxi  &&  Train  <  Bus)
        {
            cout  <<  "Minimum fair for "  <<  kilometers  <<  " kilometers is "  <<  Train  <<  endl;
        }
        if(Bus  <  Train  &&  Bus  <  Taxi)
        {
            cout  <<  "Minimum fair for "  <<  kilometers  <<  " kilometers is "  <<  Bus  <<  endl;
        }
    }
    return 0;    
}