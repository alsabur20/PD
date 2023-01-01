#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y);
void aVertical();
void bVertical();
void uVertical();
void sVertical();
void rVertical();

main()
{
  int x;
  int y;
  gotoxy(0,0);
  aVertical();
  gotoxy(10,0);
  cout <<"";
  gotoxy(20,0);
  cout <<"";
  gotoxy(30,0);
  cout <<"";
  gotoxy(40,0);
  aVertical();
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
void bVertical()
{
   cout<< "#######   " << endl;
   cout<< "##    ##   " << endl;
   cout<< "##    ##   " << endl; 
   cout<< "########   " << endl;
   cout<< "##    ##   " << endl;
   cout<< "##    ##   " << endl;
   cout<< "#######   " << endl;
}
void uVertical()
{
   cout<< "##       ##   " << endl;
   cout<< "##       ##   " << endl;
   cout<< "##       ##   " << endl; 
   cout<< "##       ##   " << endl;
   cout<< "##       ##   " << endl;
   cout<< " ##     ##    " << endl;
   cout<< "   #####      " << endl;
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
void rVertical()
{

   cout<< " ######         " << endl;
   cout<< " ##    #        " << endl;
   cout<< " ##   #           " << endl; 
   cout<< " ######        " << endl;
   cout<< " ##   ##     " << endl;
   cout<< " ##    ##    " << endl;
   cout<< " ##     ##     " << endl;
}