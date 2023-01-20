#include <iostream>
using namespace std;

main()
{
  int period, countOfPatients = 0, countOfDoctors = 7, treated = 0, untreated = 0, pTreated = 0, pUntreated = 0;
  cout << "Enter period: ";
  cin >> period;

  for (int counter = 1; counter <= period; counter++)
  {
    cout << "Enter Patients: ";
    cin >> countOfPatients;

    if ((counter % 3 == 0) && (untreated > treated))
    {
      countOfDoctors++;
    }

    if (countOfPatients > countOfDoctors)
    {
      treated = pTreated + countOfDoctors;
      untreated = pUntreated + (countOfPatients - countOfDoctors);
      pUntreated = untreated;
      pTreated = treated;
    }

    else
    {
      treated = pTreated + countOfPatients;
      untreated = pUntreated;
      pUntreated = untreated;
      pTreated = treated;
    }
  }
  cout << "Treated: " << treated << endl;
  cout << "Untreated: " << untreated << endl;
}