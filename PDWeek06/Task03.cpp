#include<iostream>
using namespace std;

string starSign(int day,string month);

main()
{
    string month,sign;
    int day;

    cout << "Enter Day(Between 1 and 30): ";
    cin >> day;
    cout << "Enter Month: ";
    cin >> month;

    sign = starSign(day,month);
    cout << sign;
}

string starSign(int day, string month)
{
    string sign;
    if ((day >= 21 && month == "March")||(day <= 19 && month == "April"))
    {
        sign = "Aries";
    }
    else if ((day >= 20 && month == "April")||(day <= 20 && month == "May"))
    {
        sign = "Taurus";
    }
    else if ((day >= 21 && month == "May")||(day <= 20 && month == "June"))
    {
        sign = "Gemini";
    }
    else if ((day >= 21 && month == "June")||(day <= 22 && month == "July"))
    {
        sign = "Cancer";
    }
    else if ((day >= 23 && month == "July")||(day <= 22 && month == "August"))
    {
        sign = "Leo";
    }
    else if ((day >= 23 && month == "August")||(day <= 22 && month == "September"))
    {
        sign = "Virgo";
    }
    else if ((day >= 23 && month == "September")||(day <= 22 && month == "October"))
    {
        sign = "Libra";
    }
    else if ((day >= 23 && month == "October")||(day <= 21 && month == "November"))
    {
        sign = "Scorpio";
    }
    else if ((day >= 22 && month == "November")||(day <= 21 && month == "December"))
    {
        sign = "Saggitarius";
    }
    else if ((day >= 22 && month == "December")||(day <= 19 && month == "January"))
    {
        sign = "Capricorn";
    }
    else if ((day >= 20 && month == "January")||(day <= 18 && month == "Februaruy"))
    {
        sign = "Aquarius";
    }
    else if ((day >= 19 && month == "February")||(day <= 20 && month == "March"))
    {
        sign = "Pisces";
    }
    return sign;
}
