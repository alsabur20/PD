#include <iostream>
using namespace std;

void discount(float price,float rRosePrice,float wRosePrice,float tulipsPrice,int rRoseQuantity,int wRoseQuantity,int tulipsQuantity);

main()
{
  float rRosePrice; 
  float wRosePrice;
  float tulipsPrice;
  float price;

  int rRoseQuantity;
  int wRoseQuantity;
  int tulipsQuantity;

  rRosePrice = 2.00;
  wRosePrice = 4.10;
  tulipsPrice = 2.50;

  cout << "Enter No. of Red Roses required: ";
  cin >> rRoseQuantity;
  cout << "Enter No. of White Roses required: "; 
  cin >> wRoseQuantity;
  cout << "Enter No. of Tulips required: ";
  cin >> tulipsQuantity;
  
  discount(price,rRosePrice,wRosePrice,tulipsPrice,rRoseQuantity,wRoseQuantity,tulipsQuantity);  
}

void discount(float price,float rRosePrice,float wRosePrice,float tulipsPrice,int rRoseQuantity,int wRoseQuantity,int tulipsQuantity)
{ 

  price = (rRosePrice * rRoseQuantity)+(wRosePrice * wRoseQuantity)+(tulipsPrice * tulipsQuantity);
  
  cout << endl;
  
  if(price > 200)
  {
   cout << "Original Price: " << price <<endl;
   cout << "Total payable Price after discount: " << 0.80*price << endl;
  }
  if(price < 200)
  {
   cout << "Original Price: " << price <<endl;
   cout << "Total payable Price: " << price << endl;
  } 
}