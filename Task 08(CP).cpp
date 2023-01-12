#include <iostream>
using namespace std;
main()
{
    double Budget;
    string Category;
    int Group;
    float Fair;
    cout  <<  "Enter your budget: ";
    cin  >>  Budget;
    cout  <<  "Enter ticket category: ";
    cin  >>  Category;
    cout  <<  "Enter number of people in your group: ";
    cin  >>  Group;
    if(Category  ==  "Normal")
    {
        if(Group  <=  4)
        {
            Fair = Budget * 75/100;
            Budget = Budget - Fair;
        }
        if(Group  >=  5  &&  Group  <=  9)
        {
            Fair = Budget * 60/100;
            Budget = Budget - Fair;
        }
        if(Group  >=  10  &&  Group  <=  24)
        {
            Fair = Budget * 50/100;
            Budget = Budget - Fair;
        }
        if(Group  >=  25 &&  Group  <=  49)
        {
            Fair = Budget * 40/100;
            Budget = Budget - Fair;
        }
        if(Group  >  49)
        {
            Fair = Budget * 25/100;
            Budget = Budget - Fair;
        }
        Budget = Budget - 249.99;
        if(Budget  <  0)
        {
            Budget = -1 * Budget;
            cout  <<  "Not enough money! You need "  <<  Budget  <<  "QR.";
        }
        else
        {
        cout <<  "Yes! You have "  <<  Budget  <<  " QR left."  <<  endl;
        }
    }
    if(Category  ==  "VIP")
    {
        if(Group  <=  4)
        {
            Fair = Budget * 75/100;
            Budget = Budget - Fair;
        }
        if(Group  >=  5  &&  Group  <=  9)
        {
            Fair = Budget * 60/100;
            Budget = Budget - Fair;
        }
        if(Group  >=  10  &&  Group  <=  24)
        {
            Fair = Budget * 50/100;
            Budget = Budget - Fair;
        }
        if(Group  >=  25 &&  Group  <=  49)
        {
            Fair = Budget * 40/100;
            Budget = Budget - Fair;
        }
        if(Group  >  49)
        {
            Fair = Budget * 25/100;
            Budget = Budget - Fair;
        }
        Budget = Budget - 499.99;
        
        if(Budget  <  0)
        {
            Budget = -1 * Budget;
            cout  <<  "Not enough money! You need "  <<  Budget  <<  "QR.";
        }
        else
        {
        cout <<  "Yes! You have "  <<  Budget  <<  " QR left."  <<  endl;
        }
    }
}