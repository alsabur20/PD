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
    for (int i = rows; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}