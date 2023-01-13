#include <iostream>
using namespace std;

main()
{
    int h, x, y;

    cout << "Enter value of h: ";
    cin >> h;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinste: ";
    cin >> y;

    int shapeBase = 3 * h;
    int shapeHeight = 4 * h;
    if (((x >= 0 && x <= h) && y == h) || ((x >= 2 * h && x <= 3 * h) && y == h) || (x == 3 * h && (y <= h && y >= 0)) || (x == 0 && (y <= h && y >= 0)) || ((x >= 0 && x <= 3 * h) && y == 0) || (x == 2 * h && (y <= 4 * h && y >= h)) || (x == h && (y <= 4 * h && y >= h)) || ((x <= 2 * h && x >= h) && y == 4 * h))
    {
        cout << "BORDER" << endl;
    }
    else if (((x < h && x > 0) && (y > 0 && y < h)) || ((x > h && x < 2 * h) && (y > 0 && y < 4 * h)) || ((x > 2 * h && x < 3 * h) && (y > 0 && y < h)))
    {
        cout << "INSIDE";
    }
    else
    {
        cout << "OUTSIDE";
    }
}
