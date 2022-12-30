#include <iostream>
using namespace std;


void Reverse(string testValue);
main()
{
  string testValue;
  cout << "Enter String: ";
  cin >> testValue;
  cout << endl;
  Reverse(testValue);

}

void Reverse(string testValue)
{
   if(testValue == "false")
   {
    cout << "TRUE";
   }
   if(testValue == "true")
   {
    cout << "FALSE";
   }
}
