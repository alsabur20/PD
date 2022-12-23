#include <iostream>
using namespace std;

main()
{
float weightToLoose;
float result;
float days=15;

cout << "Enter Weight that you want to lose: ";
cin >> weightToLoose;
result = weightToLoose*days;
cout << "It will take you " << result << " days to loose " << weightToLoose;

}