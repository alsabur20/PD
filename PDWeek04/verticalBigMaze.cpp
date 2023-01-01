#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y);
void printMaze();
void playerMove(int x, int y);

main()
{
    system("cls");
    printMaze();
    int x = 31;
    int y = 9;
    while(true)
    {
     playerMove(x,y);  
     if(y < 22)
     {
      y=y+1;
     }
     if(y == 22)
     {
      gotoxy(x,y-1);
      cout<< " ";
      y = 3;
     }
    }
    
}

void printMaze()
{
cout << "#######################################################################" << endl;
cout << "||.. .....................................................   ......  ||" << endl;
cout << "||.. %%%%%%%%%%%%%%%%        ...     %%%%%%%%%%%%%%  |%|..    %%%%   ||" << endl;
cout << "||..        |%|   |%|     |%|...     |%|        |%|  |%|..     |%|   ||" << endl;
cout << "||..        |%|   |%|     |%|...     |%|        |%|  |%|..     |%|   ||" << endl;
cout << "||..        %%%%%%%%  . . |%|...     %%%%%%%%%%%%%%     ..    %%%.   ||" << endl;
cout << "||..        |%|       . . |%|...    ............... |%| ..       .   ||" << endl;
cout << "||..        %%%%%%%%%%. . |%|...    %%%%%%%%%%%%    |%| ..    %%%.   ||" << endl;
cout << "||..               |%|.             |%|......       |%| ..    |%|.   ||" << endl;
cout << "||..     ......... |%|.        P    |%|......|%|        ..    |%|.   ||" << endl;
cout << "||..|%|  |%|%%%|%|.|%|. |%|            ......|%|        ..|%| |%|.   ||" << endl;
cout << "||..|%|  |%|   |%|..    %%%%%%%%%%%%%  ......|%|         .|%|.       ||" << endl;
cout << "||..|%|  |%|   |%|..           ...|%|     %%%%%%        . |%|.       ||" << endl;
cout << "||..|%|            .           ...|%|               |%| ..|%|.       ||" << endl;
cout << "||..|%|  %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%     |%| ..|%|%%%%%   ||" << endl;
cout << "||...............................................   |%| ..........   ||" << endl;
cout << "||   ............................................          .......   ||" << endl;
cout << "||..|%|  |%|   |%|..    %%%%%%%%%%%%%  ......|%|    |%| ..|%|.       ||" << endl;
cout << "||..|%|  |%|   |%|..           ...|%|     %%%%%%    |%| ..|%|.       ||" << endl;
cout << "||..|%|            .     G     ...|%|               |%| ..|%|.       ||" << endl;
cout << "||..|%|  %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%     |%| ..|%|%%%%%   ||" << endl;
cout << "||...............................................   |%| ..........   ||" << endl;
cout << "||  .............................................          .......   ||" << endl;
cout << "#######################################################################" << endl;

}

void gotoxy(int x, int y)
{
   COORD coordinates;
   coordinates.X = x;
   coordinates.Y = y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void playerMove(int x, int y)
{
   gotoxy(x,y-1);
   cout<< " ";
   gotoxy(x,y);
   cout<< "P";
   Sleep(200);
}