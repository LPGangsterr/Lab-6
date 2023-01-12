#include <iostream>
using namespace std;
float totalIncome(int rows,int columns,string screenings);
main()
{
    int rows;
    int columns;
    float Income;
    string screenings;
    cout  <<  "Enter number of chairs in rows: ";
    cin  >>  rows;
    cout  <<  "Enter number of chairs in columns: ";
    cin  >>  columns;
    cout  <<  "Enter your desired screening: ";
    cin  >>  screenings;
    Income = totalIncome(rows,columns,screenings);
    cout  <<  "Total income is "  <<  Income  <<  "."  <<  endl;
}
float totalIncome(int rows,int columns,string screenings)
{
    float Income;
    if(screenings  ==  "Premiere")
    {
        Income = 12.00 * rows * columns;
    }
    if(screenings  ==  "Normal")
    {
        Income = 7.50 * rows * columns;
    }
    if(screenings  ==  "Discount")
    {
        Income = 5.00 * rows * columns;
    }
    return (Income);
}