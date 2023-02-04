#include <iostream>
using namespace std;

main()
{
    int arrSize = 4;
    string array[arrSize];

    for (int i = 0; i < arrSize; i++)
    {
        cout << "Enter " << i << " element: ";
        cin >> array[i];
    }
    bool x = false;
    string t1 = array[0];
    if (array[1] == t1 && array[2] == t1 && array[3] == t1)
    {
        x = true;
    }
    if (x == true)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}