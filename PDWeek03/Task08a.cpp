#include <iostream>
using namespace std;

main () 
{
float vegPricePerKg;
float fruitPricePerKg;
int totalKgOfVeg;
int totalKgOfFruit;
float vegCost;
float fruitCost;
float total;
float ruppee;
float totalInRuppee;

cout << "Vegetable price per Kilogram: ";
cin >> vegPricePerKg;
cout << "Fruit price per Kilogram";
cin >> fruitPricePerKg;
cout << "Total Kilograms of vegetables: ";
cin >> totalKgOfVeg;
cout << "Total Kilograms of fruits: ";
cin >> totalKgOfFruit;

ruppee= 1.94;
vegCost=vegPricePerKg*totalKgOfVeg;
fruitCost=fruitPricePerKg*totalKgOfFruit;
total=vegCost+fruitCost;
totalInRuppee=total/ruppee;

cout << endl;
cout << "Total Cost in Rupees: " << totalInRuppee;
}