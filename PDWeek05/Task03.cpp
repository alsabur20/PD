#include <iostream>
using namespace std;

float taxCalculator(float vPrice, char vCode);
char vehicleCode(string vType);
float taxRateCaculations(char vCode);
main()
{
    string vType;
    float vPrice, fPrice;
    cout << "Enter Vehicle Price: ";
    cin >> vPrice;
    cout << "Enter Vehicle Type: ";
    cin >> vType;

    char vCode = vehicleCode(vType);
    float tax = taxCalculator(vPrice, vCode);
    fPrice = vPrice + tax;
    cout << "The final price on a vehicle of type " << vType << " after adding the tax is $" << fPrice;
}

char vehicleCode(string vType)
{
    if (vType == "Motorcycle")
    {
        return 'M';
    }
    if (vType == "Electric")
    {
        return 'E';
    }
    if (vType == "Sedan")
    {
        return 'S';
    }
    if (vType == "Van")
    {
        return 'V';
    }
    if (vType == "Truck")
    {
        return 'T';
    }
}

float taxCalculator(float vPrice, char vCode)
{
    float taxAmount;
    if (vCode == 'M')
    {
        taxAmount = vPrice * 0.06;
    }
    if (vCode == 'E')
    {
        taxAmount = vPrice * 0.08;
    }
    if (vCode == 'S')
    {
        taxAmount = vPrice * 0.10;
    }
    if (vCode == 'V')
    {
        taxAmount = vPrice * 0.12;
    }
    if (vCode == 'T')
    {
        taxAmount = vPrice * 0.15;
    }
    return taxAmount;
}