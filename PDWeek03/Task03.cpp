#include <iostream>
using namespace std;

main()
{
float initialVelocity;
float finalVelocity;
float accelaration;
float time;

cout << "Enter Initial Velocity = ";
cin >> initialVelocity;
cout << "Enter Accelaration = ";
cin >> accelaration;
cout << "Enter time = ";
cin >> time;
finalVelocity = (accelaration*time)+initialVelocity;
cout << "Final Velocity: " << finalVelocity;
}