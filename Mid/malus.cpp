#include <iostream>
#include <cmath>
using namespace std;

int digitCalculator(int number);
bool isMalus(int number, int noOfDigits);

main()
{
    int number;
    float malus;
    int noOfDigits;
    cout << "Enter a number: ";
    cin >> number;

    int sum = 0;
    int counter = 0;
    for (int i = 1; i <= number; i++)
    {
        noOfDigits = digitCalculator(i);
        malus = isMalus(i, noOfDigits);
        sum = sum + malus;
    }
    cout<<counter;
}
bool isMalus(int number, int noOfDigits)
{
    int number1 = number;
    int power = noOfDigits;
    int lastdigit;
    float sum = 0;
    float inter = 0;
    for (int i = 1; i <= noOfDigits; i++)
    {
        lastdigit = number1 % 10;
        number1 = number1 / 10;
        inter = pow(lastdigit, power);
        sum = sum + inter;
        power--;
    }
    if (sum - number == 0)
    {
        return true;
    }
    return false;
}
int digitCalculator(int number)
{
    int counter = 0;
    while (number != 0)
    {
        number = number / 10;
        counter++;
    }
    return counter;
}
