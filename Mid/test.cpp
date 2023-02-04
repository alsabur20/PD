#include <iostream>
using namespace std;
main()
{
    int number, dig1, dig2, dig3, dig4;
    int counter = 0;
    int j;
    cin >> number;
    for (int i = 1111; i <= 9999; i++)
    {
        j = i;
        dig4 = j % 10;
        j = j / 10;
        dig3 = j % 10;
        j = j / 10;
        dig2 = j % 10;
        j = j / 10;
        dig1 = j % 10;

        if (dig1 == 0 || dig2 == 0 || dig3 == 0 || dig4 == 0)
        {
            continue;
        }
        else if ((number % dig1 == 0) && (number % dig2 == 0) && (number % dig3 == 0) && (number % dig4 == 0))
        {
            cout << " " << i;
        }
    }
}
