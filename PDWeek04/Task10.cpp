#include <iostream>
using namespace std;

void discount(int price, string countryName);

main()
{
  string countryName;
  int price;
  while(true)
  {
   cout << "Enter Country Name: ";
   cin >> countryName;
   cout << "Enter Price (in Dollars): ";
   cin >> price;
   cout << endl;
   discount(price,countryName);
   }
}

void discount(int price, string countryName)
{
  if(countryName == "Pakistan")
  {
   cout << "Final price = " << 0.95*price; 
  }
  if(countryName == "Ireland")
  {
   cout << "Final price = " << 0.90*price; 
  }
  if(countryName == "India")
  {
   cout << "Final price = " << 0.80*price; 
  }
  if(countryName == "England")
  {
   cout << "Final price = " << 0.70*price; 
  }
  if(countryName == "Canada")
  {
   cout << "Final price = " << 0.55*price; 
  }
}