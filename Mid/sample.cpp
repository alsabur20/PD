#include <iostream>
using namespace std;

main()
{
    int year, result, counter = 0,d1,d2,d3;
    cin >> year;
    unt year1=year;
    //  cout<<year/10%10;

    while (year > 0)
    {
        year = year / 10;
        counter++;
    }
    cout << counter;
    if(counter==4)
    {
        d1=year1/1000;
        d2=year1/100%10;
        if(d1==1&&d2>)
    }
}