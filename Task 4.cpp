#include <iostream>
using namespace std;
float Discount(int Amount,string Day,string Month);
main()
{
    int Amount;
    string Day;
    string Month;
    int totalPrice;
    cout  <<  "Enter costumer's amount: ";
    cin  >>  Amount;
    cout  <<  "Enter present day: ";
    cin  >>  Day;
    cout  <<  "Enter present month: ";
    cin  >>  Month;
    totalPrice = Discount(Amount,Day,Month);
    cout  <<  "Your total amount is "  << totalPrice  <<  "."  <<  endl;
}
float Discount(int Amount,string Day,string Month)
{
    float Discount = Amount;
    if(Day  ==  "Sunday"  &&  Month  ==  "October"  ||  Month  ==  "March"  ||  Month  ==  "August")
    {
        Discount = Amount * 10/100;
        Discount = Amount - Discount;
    }
    return (Discount);
}