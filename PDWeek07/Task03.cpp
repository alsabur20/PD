#include <iostream>
#include <windows.h>
using namespace std;

void upper(int rows);
void lower(int rows);

main()
{
    int rows;

    cout << "Enter rows: ";
    cin >> rows;
    upper(rows);
    lower(rows);
}

void upper(int rows)
{
    rows = rows / 2;
    for (int i = 1; i <= rows; i++)
    {

        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void lower(int rows)
{
     rows = rows / 2;
    for (int i = rows; i >0; i--)
    {

        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}