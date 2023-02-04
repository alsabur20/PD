#include <iostream>
using namespace std;

main()
{
    string test;
    getline(cin, test);
    int length=test.length();

    bool x=false;
    if(length%2==0)
    {
        x=true;
    }
    if(x==true)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}