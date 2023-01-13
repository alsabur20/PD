#include <iostream>
using namespace std;

main()
{
    int startHour, startMin, arriveHour, arriveMin, startMinTotal, arriveMinTotal, hour, min;
    ;

    cout << "Enter starting time(hour): ";
    cin >> startHour;
    cout << "Enter starting time(minutes): ";
    cin >> startMin;
    cout << "Student hour of arrival: ";
    cin >> arriveHour;
    cout << "Student minutes of arrival: ";
    cin >> arriveMin;

    startMinTotal = (startHour * 60) + startMin;
    arriveMinTotal = (arriveHour * 60) + arriveMin;
    int timeDiff = arriveMinTotal - startMinTotal;

    /*cout << startMinTotal << endl;
    cout << arriveMinTotal << endl;
    cout << timeDiff << endl;*/
    if (timeDiff > 0)
    {
        if (timeDiff >= 60)
        {
            hour = timeDiff / 60;
            min = timeDiff % 60;
            cout << "Late" << endl
                 << hour << ":" << min << "  hours after the start.";
        }
        else
        {
            hour = 0;
            min = timeDiff;
            cout << "Late" << endl
                 << min << " minutes after the start.";
        }
    }
    else
    {
        timeDiff = timeDiff * -1;
        if (timeDiff >= 60)
        { // 690,492
            hour = timeDiff / 60;
            min = timeDiff % 60;
            cout << "Early" << endl
                 << hour << ":" << min << "  hours before the start.";
        }
        else if (timeDiff > 0 && timeDiff <= 30)
        {
            hour = 0;
            min = timeDiff;
            cout << "On Time " << endl
                 << min << " minutes before the start.";
        }
        else if (timeDiff == 0)
        {
            hour = 0;
            min = timeDiff;
            cout << "On Time ";
        }
        else
        {
            hour = 0;
            min = timeDiff;
            cout << "Early " << endl
                 << min << " minutes before the start.";
        }
    }
}