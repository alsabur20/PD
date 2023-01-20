#include <iostream>
using namespace std;

main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;

    int result = 0;
    int previous=0;
    for (int dot = number; dot > 0; dot--)
    {
        result = previous + dot;
        previous = result;        
    }
    cout<<result;
}