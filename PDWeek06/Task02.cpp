#include <iostream>
using namespace std;

string calculateGrade(float tPercentage);
main()
{
    string name;
    float eMarks, mMarks, cMarks, ssMarks, bMarks, tMarks, tPercentage;

    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter English Marks: ";
    cin >> eMarks;
    cout << "Enter Maths Marks: ";
    cin >> mMarks;
    cout << "Enter Chemistry Marks: ";
    cin >> cMarks;
    cout << "Enter Social Science Marks: ";
    cin >> ssMarks;
    cout << "Enter Biology Marks: ";
    cin >> bMarks;

    tMarks = eMarks + mMarks + cMarks + ssMarks + bMarks;
    tPercentage = tMarks / 500 * 100;

    string grade = calculateGrade(tPercentage);

    cout << endl;
    cout << "Name: " << name << endl;
    cout << "Total Marks: " << tMarks << endl;
    cout << "Total Percentage: " << tPercentage << " %" << endl;
    cout << "Grade: " << grade << endl;
}

string calculateGrade(float tPercentage)
{
    string grade;
    if (tPercentage >= 90 && tPercentage <= 100)
    {
        grade = "A+";
    }
    else if (tPercentage >= 80 && tPercentage < 90)
    {
        grade = "A";
    }
    else if (tPercentage >= 70 && tPercentage < 80)
    {
        grade = "B+";
    }
    else if (tPercentage >= 60 && tPercentage < 70)
    {
        grade = "B";
    }
    else if (tPercentage >= 50 && tPercentage < 60)
    {
        grade = "C";
    }
    else if (tPercentage >= 40 && tPercentage < 50)
    {
        grade = "D";
    }
    else
    {
        grade = "F";
    }
    return grade;
}
