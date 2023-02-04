#include <iostream>
using namespace std;
main()
{
    int num, digit1, digit2, digit3, rows, columns, lines;
    cin >> num;

    int sep = num;
    digit3 = sep % 10;
    sep = sep / 10;
    digit2 = sep % 10;
    sep = sep / 10;
    digit1 = sep % 10;
    columns = digit1 + digit3;
    rows = (digit1 + digit2);
    lines = rows * columns;

    for (int i = 1; i <= lines; i++)
    {

        if (num % 5 == 0)
        {
            num = num - digit1;
            cout << num << " ";
        }
        else if (num % 3 == 0)
        {
            num = num - digit2;
            cout << num << " ";
        }
        else
        {
            num = num + digit3;
            cout << num << " ";
        }
        if (i % columns == 0)
        {
            cout << endl;
        }
    }
}
