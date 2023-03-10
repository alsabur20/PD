#include <iostream>
using namespace std;

void header();
void printMenu();
void aggregate1(string nameStd1,float matricMarksStd1,float interMarksStd1,float ecatMarksStd1,float aggregateStd1,string empty);
void aggregate2(string nameStd2,float matricMarksStd2,float interMarksStd2,float ecatMarksStd2,float aggregateStd2,string empty);
void compareAggregate(string nameStd1,float ecatMarksStd1,string nameStd2,float ecatMarksStd2,string empty);

main()
{
  string empty;
  string nameStd1;
  float matricMarksStd1;
  float interMarksStd1;
  float ecatMarksStd1;
  string nameStd2;
  float matricMarksStd2;
  float interMarksStd2;
  float ecatMarksStd2;

  int choice;
  float aggregateStd1; 
  float aggregateStd2;

  header();
  printMenu();

while(true)
{
  cout << "Enter Choice:";
  cin >> choice;
  cout << endl;
 
  if(choice == 1)
  { 
    system("cls");
    cout << "You chose: " << choice << endl;
    cout << "Enter you name: ";
    cin >> nameStd1;
    cout << "Enter your Matric Marks(out of 1100): ";
    cin >> matricMarksStd1;
    cout << "Enter your Inter Marks(out of 550): ";
    cin >> interMarksStd1;
    cout << "Enter your Ecat Marks: ";
    cin >> ecatMarksStd1;
    cout << "Press any key to continue...    ";
    cin >> empty;
   if(empty != "")
   {
    system("cls");
    header();
    printMenu();
   }
  }
  if(choice == 2)
  {
    system("cls");
    cout << "You chose: " << choice << endl;
    cout << "Enter you name: ";
    cin >> nameStd2;
    cout << "Enter your Matric Marks(out of 1100): ";
    cin >> matricMarksStd2;
    cout << "Enter your Inter Marks(out of 550): ";
    cin >> interMarksStd2;
    cout << "Enter your Ecat Marks: ";
    cin >> ecatMarksStd2;
    cout << "Press any key to continue...    ";
    cin >> empty;
   if(empty != "")
   {
    system("cls");
    header();
    printMenu();
   }
  }
  if(choice == 3)
  {
    system("cls");
    cout << "You chose: " << choice << endl;
    aggregate1(nameStd1,matricMarksStd1,interMarksStd1,ecatMarksStd1,aggregateStd1,empty);
  }
  if(choice == 4)
  {
    system("cls");
    cout << "You chose: " << choice << endl;
    aggregate2(nameStd2,matricMarksStd2,interMarksStd2,ecatMarksStd2,aggregateStd2,empty);
  }
  if(choice == 5)
  {
   cout << "You chose: " << choice << endl;
   compareAggregate(nameStd1,ecatMarksStd1,nameStd2,ecatMarksStd2,empty);
  }
}
}

void header()
{
 cout << "################" << endl;
 cout << "#  UET LAHORE  #" << endl;
 cout << "################" << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << "Welcome to UET Admission Management System";
 cout << endl;
 cout << endl;
 cout << endl;
}

void printMenu()
{
 cout << "Press 1 to Enter Details of First Students!" << endl;
 cout << "Press 2 to Enter Details of Second Students!" << endl;
 cout << "Press 3 to calculate aggregate of first students!" << endl;
 cout << "Press 4 to calculate aggregate of second students!" << endl;
 cout << "Press 5 to display the student with RollNumber 01!" << endl;
}

void aggregate1(string nameStd1,float matricMarksStd1,float interMarksStd1,float ecatMarksStd1,float aggregateStd1,string empty)
{    aggregateStd1 = (matricMarksStd1/1100*100)*0.3 + (interMarksStd1/550*100)*0.3 + (ecatMarksStd1/400*100)*0.4 ;
    cout << nameStd1 << "'s aggregate is " << aggregateStd1 << endl;
    cout << "Press any key to continue...    ";
    cin >> empty;
   if(empty != "")
   {
    system("cls");
    header();
    printMenu();
   }
}

void aggregate2(string nameStd2,float matricMarksStd2,float interMarksStd2,float ecatMarksStd2,float aggregateStd2,string empty)
{
    aggregateStd2 = (matricMarksStd2/1100*100)*0.3 + (interMarksStd2/550*100)*0.3 + (ecatMarksStd2/400*100)*0.4 ;
    cout << nameStd2 << "'s aggregate is " << aggregateStd2 << endl;
    cout << "Press any key to continue...    ";
    cin >> empty;
   if(empty != "")
   {
    system("cls");
    header();
    printMenu();
   }
}

void compareAggregate(string nameStd1,float ecatMarksStd1,string nameStd2,float ecatMarksStd2,string empty)
{

    if (ecatMarksStd1 > ecatMarksStd2)
    {
      system("cls");
      cout << "Rollnumber 01 is :";
      cout << nameStd1;
      cout << endl;
      cout << "Press any key to continue...    ";
      cin >> empty;
     if(empty != "")
     {
      system("cls");
      header();
      printMenu();
     }
    }
    if (ecatMarksStd1 < ecatMarksStd2)
    {
      system("cls");
      cout << "Rollnumber 01 is :";
      cout << nameStd2;
      cout << endl;
      cout << "Press any key to continue...    ";
      cin >> empty;
     if(empty != "")
     {
      system("cls");
      header();
      printMenu();
     }
    }

}