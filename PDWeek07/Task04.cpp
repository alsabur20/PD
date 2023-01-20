#include <iostream>
using namespace std;

void amplify(int upperBound);

main()
{
    int upperBound;
    cout << "Enter upper bound: ";
    cin >> upperBound;
    amplify(upperBound);
}

void amplify(int upperBound)
{
    for (int lowerBound = 1; lowerBound <= upperBound; lowerBound++)
    {
        if (lowerBound % 4 == 0)
        {
            cout << lowerBound * 10 <<",";
            continue;
        }
        cout << lowerBound <<",";
    }
}