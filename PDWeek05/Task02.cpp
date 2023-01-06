#include<iostream>
using namespace std;

float volume(float length, float width, float height);
float unit(float volumeInM,string unit);

main()
{
 float length,width,height;
 string unit1;

 cout << "Enter length(in meters): ";
 cin >> length;
 cout << "Enter width(in meters): ";
 cin >> width;
 cout << "Enter height(in meters): ";
 cin >> height;
 cout << "Enter Unit:";
 cin >> unit1;

float volumeInM = volume(length,width,height);
float finalAnswer = unit(volumeInM,unit1);

cout << finalAnswer << "cubic " << unit1;
}
float volume(float length, float width, float height)
{
    float volume;    
    volume = (length*width*height)/3;
    return volume;
}

float unit(float volumeInM,string unit1)
{
    float fvolume;
    if(unit1 == "centimeters")
    {
       fvolume = volumeInM *1000000;
    }
    if(unit1 == "millimeters")
    {
        fvolume = volumeInM * 1000000000;
    }
    if(unit1 == "kilometers")
    {
        fvolume = volumeInM / 1000000000;
    }
    return fvolume;
}