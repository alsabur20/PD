#include <iostream>
using namespace std;

main()
{
    char type, dayTime;
    float minutes, tminutes;
    float charges;

    cout << "Enter which type of customer you are (regular or premium). Select r/p: ";
    cin >> type;
    if (type == 'p')
    {
        cout << "Press 'D' for day time and 'N' for night time: ";
        cin >> dayTime;
    }
    cout << "Enter the number of minutes you used the serivce for: ";
    cin >> minutes;

    if (type == 'r')
    {
        if (minutes > 50)
        {
            tminutes = minutes - 50;
            charges = 10 + (tminutes * 0.20);
        }
        else
        {
            charges = 10;
        }
    }
    else
    {
        if (dayTime == 'D')
        {
            if (minutes > 75)
            {
                tminutes = minutes - 75;
                charges = 25 + (tminutes * 0.10);
            }
            else
            {
                charges = 25;
            }
        }
        else
        {
            if(minutes > 100)
            {
                tminutes = minutes -100;
                charges = 25 + (tminutes * 0.05);
            }
            else
            {
                charges = 25;
            }
        }
    }
    cout << "The charges are $ " << charges;
}