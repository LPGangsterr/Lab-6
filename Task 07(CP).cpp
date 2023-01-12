#include <iostream>
using namespace std;
float checkCost(string City,string Product,int Quantity);
main()
{
    string City;
    string Product;
    int Quantity;
    float Cost;
    cout  <<  "Enter city name: ";
    cin  >>  City;
    cout  <<  "Enter product name: ";
    cin  >>  Product;
    cout  <<  "Enter qunantity of the product: ";
    cin  >>  Quantity;
    Cost = checkCost(City,Product,Quantity);
    cout  <<  "Total price is "  <<  Cost  <<  "."  <<  endl;
}
float checkCost(string City,string Product,int Quantity)
{
    float Price;
    if(City  ==  "Sofia")
    {
        if(Product  ==  "coffee")
        {
            Price = 0.50 * Quantity;
        }
        if(Product  ==  "water")
        {
            Price = 0.80 * Quantity;
        }
        if(Product  ==  "beer")
        {
            Price = 1.20 * Quantity;
        }
        if(Product  ==  "sweets")
        {
            Price = 1.45 * Quantity;
        }
        if(Product  ==  "peanuts")
        {
            Price = 1.60 * Quantity;
        }
    }
    if(City  ==  "Plovdiv")
    {
        if(Product  ==  "coffee")
        {
             Price = 0.40 * Quantity;
        }
        if(Product  ==  "water")
        {
             Price = 0.70 * Quantity;
        }
        if(Product  ==  "beer")
        {
             Price = 1.15 * Quantity;
        }
        if(Product  ==  "sweets")
        {
             Price = 1.30 * Quantity;
        }
        if(Product  ==  "peanuts")
        {
             Price = 1.50 * Quantity;
        }
    }
    if(City  ==  "Varna")
    {
        if(Product  ==  "coffee")
        {
             Price = 0.45 * Quantity;
        }
        if(Product  ==  "water")
        {
             Price = 0.70 * Quantity;
        }
        if(Product  ==  "beer")
        {
             Price = 1.10 * Quantity;
        }
        if(Product  ==  "sweets")
        {
             Price = 1.35 * Quantity;
        }
        if(Product  ==  "peanuts")
        {
             Price = 1.55 * Quantity;
        }
    }
    return Price;
}