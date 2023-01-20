#include <iostream>
using namespace std;

main()
{
    int  number, counter1 = 0, counter2 = 0, counter3 = 0;
    float n,p1 = 0, p2 = 0, p3 = 0;
    cout << "Enter number: ";
    cin >> n;

    for (int counter = 1; counter <= n; counter++)
    {
        cin >> number;
        if (number % 2 == 0)
        {
            counter1++;
        }
        if (number % 3 == 0)
        {
            counter2++;
        }
        if (number % 4 == 0)
        {
            counter3++;
        }
    }
    cout << endl;
    p1 = counter1 * 100.0 / n;
    p2 = counter2 * 100.0 / n;
    p3 = counter3 * 100.0 / n;

    cout << p1 << endl
         << p2 << endl
         << p3 << endl;
}