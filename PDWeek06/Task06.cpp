#include <iostream>
using namespace std;

main()
{
    string month;
    int stays;
    float aPrice,sPrice;

    cout << "Enter Month: ";
    cin >> month;
    cout << "Enter stays: ";
    cin >> stays;

    if(month == "May"|| month == "October")
    {
        if(stays >14)
        {
            sPrice=0.7*(50*stays);
            aPrice=0.9*(65*stays);
        }
        else if(stays >7)
        {
            sPrice = 0.95*(50*stays);
            aPrice= 65*stays;
        }
        else if(stays >0)
        {
            sPrice=50*stays;
            aPrice=65*stays;
        }
    }
    else if(month == "June"|| month == "September")
    {
        if(stays >14)
        {
            sPrice = 0.80*(75.30*stays);
            aPrice=0.9*(68.70*stays);
        }
        else if(stays >7)
        {
            sPrice=75.20*stays;
            aPrice= 68.70*stays;
        }
        else if(stays > 0)
        {
            sPrice=75.20*stays;
            aPrice=68.70*stays;
        }
    }
     else if(month == "July"|| month == "August")
    { 
        if(stays >14)
        {
        sPrice=76.0*stays;
        aPrice=0.9*(77.0*stays);
        }
        else 
        {
            sPrice=76.0*stays;
            aPrice=77.0*stays;
        }
    }
    cout << "Apartment: "<<aPrice<<" $."<<endl;
    cout << "Studio: "<< sPrice<< " $." << endl;
}