#include <iostream>
using namespace std;

void print(int rows);
main()
{
    int rows;

    cout << "Enter rows: ";
    cin >> rows;
    print(rows);
}

void print(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}