#include <iostream>
using namespace std;

main()
{
string name;
float subject1;
float subject2;
float subject3;
float subject4;
float subject5;
float total;
float percentage;

cout << "Your Name: ";
cin >> name;
cout << "Enter Subject1 Marks: ";
cin >> subject1;
cout << "Enter Subject2 Marks: ";
cin >> subject2;
cout << "Enter Subject3 Marks: ";
cin >> subject3;
cout << "Enter Subject4 Marks: ";
cin >> subject4;
cout << "Enter Subject5 Marks: ";
cin >> subject5;
total = subject1+subject2+subject3+subject4+subject5 ;
percentage = total/500*100;
cout << endl;
cout << "Your percentage: " <<percentage <<" %";
}