#include <iostream>
using namespace std;

void IsEqual(int x,int y);

main()
{
  int x;
  int y;
  cout << "Enter Integer 1: ";
  cin >> x;
  cout << "Enter Integer 2: ";
  cin >> y;
  cout << endl;
  IsEqual(x,y);

}

void IsEqual(int x, int y)
{
   if(x == y)
   {
    cout << "TRUE";
   }
   if(x != y)
   {
    cout << "FALSE";
   }
}