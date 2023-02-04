#include <iostream>
#include <cmath>
using namespace std;

main()
{
    bool check = true;
    int counter = 0;
    float number;
    cin >> number;
    float answer;
    if (number <= 1)
    {
        check = false;
    }
    if (number < 0)
    {
        check = false;
        cout << "-1";
    }
    while (check)
    {
        answer = sqrt(number);
        // cout << answer << endl;
        number = answer;
        // cout << number;
        if (number < 2)
        {
            check = false;
        }
        counter++;
    }
    if (number > 0)
    {
        cout << counter;
    }
}