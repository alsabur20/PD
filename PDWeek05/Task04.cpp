#include <iostream>
#include <cmath>
using namespace std;

float calculations(int neededHours, int daysFirmHas, int noOfWorkers);

main()
{
    int neededHours, daysFirmHas, noOfWorkers;
    int workDone;
    int fHours, extraHours, extraHoursNeeded;

    cout << "Project Hours: ";
    cin >> neededHours;
    cout << "Days Firm has: ";
    cin >> daysFirmHas;
    cout << "Number of Workers: ";
    cin >> noOfWorkers;

    workDone = ceil(calculations(neededHours, daysFirmHas, noOfWorkers));

    if (workDone > neededHours)
    {
        extraHours = workDone - neededHours;
        cout << "Yes! " << extraHours << " hours left.";
    }
    if (workDone < neededHours)
    {
        extraHoursNeeded = neededHours - workDone;
        cout << "Not enough time! " << extraHoursNeeded << " hours needed.";
    }
}
float calculations(int neededHours, int daysFirmHas, int noOfWorkers)
{
    float workingDays, workingHoursPerDay, totalHoursWorkDone;

    workingDays = daysFirmHas - (0.1 * daysFirmHas);
    workingHoursPerDay = workingDays * 10;
    totalHoursWorkDone = noOfWorkers * workingHoursPerDay;
    return totalHoursWorkDone;
}