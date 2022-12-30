#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y);
void aVertical();
void wVertical();
void iVertical();
void sVertical();

main()
{
  int x;
  int y;
  aVertical();
  cout << endl;
  wVertical();
  cout << endl;
  aVertical();
  cout << endl;
  iVertical();
  cout << endl;
  sVertical();
}

void gotoxy(int x, int y)
{
   COORD coordinates;
   coordinates.X = x;
   coordinates.Y = y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void aVertical()
{
   cout<< "   ##           " << endl;
   cout<< "    ##          " << endl;
   cout<< "  ## ##         " << endl;
   cout<< "  ##  ##        " << endl;
   cout<< "  ## ###        " << endl;
   cout<< "  ##  ##        " << endl;
   cout<< " ###  ##        " << endl;
}
void wVertical()
{
   cout<< "##         ##   " << endl;
   cout<< "##         ##   " << endl;
   cout<< "##         ##   " << endl; 
   cout<< "##   ##    ##   " << endl;
   cout<< "##  ## ##  ##   " << endl;
   cout<< "## #     # ##   " << endl;
   cout<< "##         ##   " << endl;
}
void iVertical()
{
   cout<< " ###########    " << endl;
   cout<< "      ##        " << endl;
   cout<< "      ##        " << endl; 
   cout<< "      ##        " << endl;
   cout<< "      ##        " << endl;
   cout<< "      ##        " << endl;
   cout<< " ###########    " << endl;
}
void sVertical()
{
   cout<< "  #####         " << endl;
   cout<< " ##    #        " << endl;
   cout<< " ##             " << endl; 
   cout<< "  #####         " << endl;
   cout<< "      ##        " << endl;
   cout<< "#     ##        " << endl;
   cout<< " #####          " << endl;
}