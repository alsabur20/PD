#include <iostream>
using namespace std;

main () 
{
int finalanswer;
int number;
int number1;
int number2;
int number3;
int ans1;
int ans2;
int ans3;
int ans4;


cout << "Enter Four Digit Number: ";
cin >> number;

ans1 = number%10;
number1 = number /10;
ans2 = number1%10;
number2 = number / 100;
ans3 = number2 % 10;
number3 = number / 1000;
ans4 = number3 % 10;


finalanswer = ans1+ans2+ans3+ans4;
cout << "Sum: ";
cout << finalanswer << endl;

}