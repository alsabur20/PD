#include <iostream>
using namespace std;

main()
{
    int arrSize;
    cout << "Enter number of boxes: ";
    cin >> arrSize;

    string colors[arrSize];

    for (int i = 0; i < arrSize; i++)
    {
        cout << "Enter color number " << i + 1 << " :";
        cin >> colors[i];
    }

    int cswitch = 0;
    for (int i = 1; i < arrSize; i++)
    {
        if (colors[i] != colors[i-1])
        {
            cswitch++;
        }
    }
    int total=0;
    total=(cswitch*1)+(arrSize*2);
    cout<<"Total time is: "<<total;
}