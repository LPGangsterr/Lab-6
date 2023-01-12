#include <iostream>
using namespace std;
main()
{
    int Cost;
    string Brand;
    cout  <<  "Enter price of the dress: ";
    cin  >>  Cost;
    cout  <<  "Enter brand of dress: ";
    cin  >>  Brand;
    if(Cost  <  1500)
    {
        if(Brand  ==  "MTJ")
        {
            cout  <<  "Buy the dress.";
        }
    }
}