#include <iostream>
using namespace std;

main()
{
    string s1, s2;
    cout << "Enter string 1: ";
    getline(cin, s1);
    cout << "Enter string 2: ";
    getline(cin, s2);

    char test;
    int counter = 0;
    for (int i = 0; s1[i] != '\0'; i++)
    {
        test = s1[i];
        for (int idx = 0; s2[idx] != '\0'; idx++)
        {
            if (test == s2[idx])
            {
                counter++;
                s2[idx]='.';
                break;
            }
        }
    }
    cout << counter;
}