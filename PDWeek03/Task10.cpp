#include <iostream>
using namespace std;

main()
{
int var1;
int var2;

cout << "Enter Five Integers: ";
cin >> var1;

var2 = (var1 % 10) + (var1 / 10) % 10 + (var1 / 100) % 10 + (var1 / 1000) % 10 + (var1 / 10000) % 10;

cout << var2;
}