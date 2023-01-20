#include <iostream>
using namespace std;

main()
{
    int countOfCargo, totalSumOfCargo;
    float p1, p2, p3, averagePrice;

    cout << "Enter count of cargo: ";
    cin >> countOfCargo;

    int cargoIn, tCargo1 = 0, previous1 = 0, tCargo2 = 0, previous2 = 0, tCargo3 = 0, previous3 = 0;
    for (int counter = 1; counter <= countOfCargo; counter++)
    {
        cout << "Enter Weight of Cargo: ";
        cin >> cargoIn;

        if (cargoIn > 0 && cargoIn <= 3)
        {
            tCargo1 = cargoIn + previous1;
            previous1 = tCargo1;
        }
        else if (cargoIn > 3 && cargoIn <= 11)
        {
            tCargo2 = cargoIn + previous2;
            previous2 = tCargo2;
        }
        else if (cargoIn > 11)
        {
            tCargo3 = cargoIn + previous3;
            previous3 = tCargo3;
        }
    }
    totalSumOfCargo = tCargo1 + tCargo2 + tCargo3;
    p1 = tCargo1 * 100.0 / totalSumOfCargo;
    p2 = tCargo2 * 100.0 / totalSumOfCargo;
    p3 = tCargo3 * 100.0 / totalSumOfCargo;
    averagePrice = (tCargo1 * 200.0 + tCargo2 * 175.0 + tCargo3 * 120.0) / totalSumOfCargo;
    cout << endl
         << averagePrice << endl
         << p1 << endl
         << p2 << endl
         << p3 << endl;
}