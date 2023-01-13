#include <iostream>
using namespace std;

main()
{
    string temp,humidity;

    cout << "Enter Termperature Type: ";
    cin >> temp;
    cout << "Enter Humidity  Type: ";
    cin >> humidity;

    if(temp == "warm" && humidity == "dry")
    {
        cout << "Play Tennis!";
    }
     if(temp == "warm" && humidity == "humid")
    {
        cout << "Swim";
    }
     if(temp == "cold" && humidity == "dry")
    {
        cout << "Play Basketball!";
    }
     if(temp == "cold" && humidity == "humid")
    {
        cout << "Watch TV";
    }
}