#include <iostream>
#include <cmath>
using namespace std;

int digitCalculator(int number);
bool isMalus(int number, int noOfDigits);
int averageMalus(int num);

main()
{
    int number;
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout<<averageMalus(num);
}
bool isMalus(int number)
{
    int noOfDigits = digitCalculator(number);
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

int averageMalus(int num)
{
    int sum=0;
    int counter=0;
    for (int j = 1; j <= num; j++)
    {
        if(isMalus(j)==true)
        {
            sum=sum+j;
            counter++;
        }
    }
    int avg = sum/counter;
    return avg;
}
