#include <iostream>
using namespace std;

main()
{
    string day, fruit;
    float quantity, price;

    cout << "Enter Day: ";
    cin >> day;
    cout << "Enter fruit: ";
    cin >> fruit;
    cout << "Enter Quantity: ";
    cin >> quantity;

    if (day == "Monday" || day == "Tueday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
    {
        if (fruit == "banana")
        {
            price = quantity * 2.50;
        }
        else if (fruit == "apple")
        {
            price = quantity * 1.20;
        }
        else if (fruit == "orange")
        {
            price = quantity * 0.85;
        }
        else if (fruit == "grapefruit")
        {
            price = quantity * 1.45;
        }
        else if (fruit == "kiwi")
        {
            price = quantity * 2.70;
        }
        else if (fruit == "pineapple")
        {
            price = quantity * 5.50;
        }
        else if (fruit == "grapes")
        {
            price = quantity * 3.85;
        }
        else
        {
            price = 0;
        }
    }
    else if (day == "Saturday" || day == "Sunday")
    {
        if (fruit == "banana")
        {
            price = quantity * 2.70;
        }
        else if (fruit == "apple")
        {
            price = quantity * 1.25;
        }
        else if (fruit == "orange")
        {
            price = quantity * 0.90;
        }
        else if (fruit == "grapefruit")
        {
            price = quantity * 1.60;
        }
        else if (fruit == "kiwi")
        {
            price = quantity * 3.00;
        }
        else if (fruit == "pineapple")
        {
            price = quantity * 5.60;
        }
        else if (fruit == "grapes")
        {
            price = quantity * 4.20;
        }
        else
        {
            price = 0;
        }
    }
    else
    {
        price = 0;
    }
    if(price == 0)
    {
        cout <<"Error";
    }
    else
    {
        cout << price;
    }
}