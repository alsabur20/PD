#include <iostream>
#include <cmath>
using namespace std;

main()
{
    // bool x = true;
    int number, integer, counter = 0;
    int sum1 = 0, sum2 = 0, sum3 = 0;
    cout << "Enter a number: ";
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        cin >> integer;
        if (counter == 1)
        {
            sum1 = sum1 + integer;
            counter++;
        }
        if (counter == 2)
        {
            sum2 = sum2 + integer;
            counter++;
        }
        if (counter == 3)
        {
            sum3 = sum3 + integer;
            counter++;
        }
        counter = 1;
    }
    cout << sum1 << endl
         << sum2 << endl
         << sum3 << endl;
}
