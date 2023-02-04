#include <iostream>
using namespace std;

main()
{
    int arrSize = 5;
    string movie[arrSize] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};

    string moviename;
    int price = 500;

    cout << "Enter Movie Name: ";
    cin >> moviename;

    int ticketprice;
    int index;
    for (int i = 0; i < arrSize; i++)
    {
        if (moviename == movie[i])
        {
            index = i;
        }
    }
    //cout << index << endl;
    if (index % 2 == 1)
    {
        ticketprice = price * 0.95;
    }
    else
    {
        ticketprice = price * 0.90;
    }
    cout << "Your total price is: " << ticketprice;
}
