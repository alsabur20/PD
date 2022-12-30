#include <iostream>
using namespace std;

void calculation(int holidays);

main()
{
  int holidays;


  cout << "Enter Holidays: ";
  cin >> holidays;
  calculation(holidays);
  
}

void calculation(int holidays)
{
  int timeInWorkingDays = 63;
  int timeInHolidays = 127;
  int workingDays;
  int timeForGames;
  int difference;

  workingDays = 365 - holidays;
  timeForGames = (workingDays * timeInWorkingDays) + (holidays * timeInHolidays) ;
  difference = 30000 - timeForGames;

  if(timeForGames < 30000)
  {
   cout << endl;
   cout << "Tom sleeps well" << endl;
   cout << difference << " minutes less for play."; 
  }
  if(timeForGames > 30000)
  {
   cout << "Tom will run away" << endl;
   cout << difference << " minutes for play."; 
  }

} 