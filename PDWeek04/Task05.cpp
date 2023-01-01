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
  system("cls");
  sVertical();
  aVertical();
  bVertical();
  uVertical();
  rVertical();
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
   gotoxy(35,1);
   cout<< "   ##           " << endl;
   gotoxy(35,2);
   cout<< "   ###          " << endl;
   gotoxy(35,3);
   cout<< "  ## ##         " << endl;
   gotoxy(35,4);
   cout<< "  ##  ##        " << endl;
   gotoxy(35,5);
   cout<< "  ######        " << endl;
   gotoxy(35,6);
   cout<< "  ##  ##        " << endl;
   gotoxy(35,7);
   cout<< " ###  ##        " << endl;
}
void bVertical()
{
   gotoxy(60,1);
   cout<< "#######   " << endl;
   gotoxy(60,2);
   cout<< "##    ##   " << endl;
   gotoxy(60,3);
   cout<< "##    ##   " << endl; 
   gotoxy(60,4);
   cout<< "########   " << endl;
   gotoxy(60,5);
   cout<< "##    ##   " << endl;
   gotoxy(60,6);
   cout<< "##    ##   " << endl;
   gotoxy(60,7);
   cout<< "#######   " << endl;
}
void uVertical()
{
   gotoxy(85,1);
   cout<< "##       ##   " << endl;
   gotoxy(85,2);
   cout<< "##       ##   " << endl;
   gotoxy(85,3);
   cout<< "##       ##   " << endl; 
   gotoxy(85,4);
   cout<< "##       ##   " << endl;
   gotoxy(85,5);
   cout<< "##       ##   " << endl;
   gotoxy(85,6);
   cout<< " ##     ##    " << endl;
   gotoxy(85,7);
   cout<< "   #####      " << endl;
}
void sVertical()
{
  gotoxy(10,1);
   cout<< "  #####         " << endl;
  gotoxy(10,2);
   cout<< " ##    #        " << endl;
  gotoxy(10,3);
   cout<< " ##             " << endl; 
  gotoxy(10,4);
   cout<< "  #####         " << endl;
  gotoxy(10,5);
   cout<< "      ##        " << endl;
  gotoxy(10,6);
   cout<< "#     ##        " << endl;
  gotoxy(10,7);
   cout<< " #####          " << endl;
}
void rVertical()
{
   gotoxy(110,1);
   cout<< " #######        " << endl;
   gotoxy(110,2);
   cout<< " ##     #        " << endl;
   gotoxy(110,3);
   cout<< " ##    #           " << endl; 
   gotoxy(110,4);
   cout<< " ######        " << endl;
   gotoxy(110,5);
   cout<< " ##   ##     " << endl;
   gotoxy(110,6);
   cout<< " ##    ##    " << endl;
   gotoxy(110,7);
   cout<< " ##     ##     " << endl;
}