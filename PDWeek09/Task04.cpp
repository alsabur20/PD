#include <iostream>
using namespace std;

int main()
{
    int arrSize;
    cout << "Enter array size: ";
    cin >> arrSize;
    int array[arrSize];
    for (int i = 0; i < arrSize; i++)
    {
        cout << "Enter element no. " << i << " of the array: ";
        cin >> array[i];
    }
    for (int i = 0; i < arrSize; i++)
    {
        if (array[i] == 7)
        {
            cout << "Boom!";
            return 0;
        }
        while (array[i] != 0)
        {
            if (array[i] % 10 == 7)
            {
                cout << "Boom!";
                return 0;
            }
            else
            {
                array[i] = array[i] / 10;
                if (array[i]%10 == 7)
                {
                    cout << "Boom!";
                    return 0;
                }
            }
        }
    }

    cout << "There is no 7 in the array.";
}