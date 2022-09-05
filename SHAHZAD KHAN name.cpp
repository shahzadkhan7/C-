#include<iostream>
#include<conio.h>
#include<windows.h>
//void gotoxy(int ,int);
using namespace std;
void Color(int color)
{
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void gotoxy(int x, int y) 
{ 
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;
CursorPosition.X = x; // Locates column
CursorPosition.Y = y; // Locates Row
SetConsoleCursorPosition(console,CursorPosition); // Sets position for next thing to be printed 
}
		
int main()
{
  int i,j;
  
  
	      //S STARTS//
   for(i=8,j=2;i>=2;i--)
  {
   Sleep(100);
   //system("color 01");
   Color(02);
   gotoxy(i,j);
   cout<<"*";
  }
  
  for(i=2,j=2;j<=5;j++)
  {
   Sleep(50);
   //system("color 01");
   Color(02);
   gotoxy(i,j);
   cout<<"*";
  }
  
  for(i=2,j=5;i<=8;i++)
  {
   Sleep(20);
   //system("color 01");
   Color(02);
   gotoxy(i,j);
   cout<<"*";
  }
  

for(i=8,j=5;j<=8;j++)
  {
   Sleep(50);
   //system("color 01");
   Color(02);
   gotoxy(i,j);
   cout<<"*";
  } 
   
  for(i=8,j=8;i>=2;i--)
  {
   Sleep(50);
   //system("color 01");
   Color(02);
   gotoxy(i,j);
   cout<<"*";
  } //S ends  */
  
  // H Start
    for(i=10,j=2;j<=8;j++)
  {
   Sleep(50);
   //system("color 01");
   Color(01);
   gotoxy(i,j);
   cout<<"*";
  }
  
   for(i=10,j=5;i<=18;i++)
  {
   Sleep(10);
   //system("color 01");
   Color(01);
   gotoxy(i,j);
   cout<<"*";
  } 
  
     for(i=18,j=2;j<=8;j++)
  {
   Sleep(50);
   //system("color 01");
   Color(01);
   gotoxy(i,j);
   cout<<"*";
  } //H end
  
  //A STARTS
     for(i=20,j=8;j>=3;j--)
  {
   Sleep(50);
   //system("color 01");
   Color(05);
   gotoxy(i,j);
   cout<<"*";
  }
  
   for(i=21,j=2;i<=27;i++)
  {
   Sleep(50);
   //system("color 01");
   Color(05);
   gotoxy(i,j);
   cout<<"*";
  }
  
  for(i=28,j=3;j<=8;j++)
  {
   Sleep(50);
  // system("color 01");
  Color(05);
   gotoxy(i,j);
   cout<<"*";
  }
  for(i=20,j=5;i<=28;i++)
  {
   Sleep(50);
   //system("color 01");
   Color(05);
   gotoxy(i,j);
   cout<<"*";
  } //A ends
  
  //H STARTS

  for(i=30,j=2;j<=8;j++)
  {
   Sleep(50);
   //system("color 01");
   Color(3);
   gotoxy(i,j);
   cout<<"*";
  }
  
   for(i=30,j=5;i<=38;i++)
  {
   Sleep(50);
   //system("color 01");
   Color(3);
   gotoxy(i,j);
   cout<<"*";
  } 
  
     for(i=38,j=2;j<=8;j++)
  {
   Sleep(50);
  // system("color 01");
  Color(3);
   gotoxy(i,j);
   cout<<"*";
  } //H end
  
  //Z starts
  
     for(i=42,j=2;i<=48;i++)
  {
   Sleep(50);
   //system("color 01");
   Color(7);
   gotoxy(i,j);
   cout<<"*";
  } 
  
  for(i=48,j=2;j<=8,i>=42;i--,j++)
  {
   Sleep(50);
   //system("color 01");
   Color(7);
   gotoxy(i,j);
   cout<<"*";
  } 
  
   for(i=42,j=8;i<=48;i++)
  {
   Sleep(50);
  // system("color 01");
  Color(7);
   gotoxy(i,j);
   cout<<"*";
  } //Z ends
  
  //A starts
  
   for(i=50,j=8;j>=3;j--)
  {
   Sleep(50);
   //system("color 01");
   Color(06);
   gotoxy(i,j);
   cout<<"*";
  } 
  
    for(i=51,j=2;i<=57;i++)
  {
   Sleep(50);
  // system("color 01");
  Color(06);
   gotoxy(i,j);
   cout<<"*";
  } 
  
  
    for(i=58,j=3;j<=8;j++)
  {
   Sleep(50);
   //system("color 01");
   Color(06);
   gotoxy(i,j);
   cout<<"*";
  } 
  
    for(i=50,j=5;i<=58;i++)
  {
   Sleep(50);
   //system("color 01");
   Color(6);
   gotoxy(i,j);
   cout<<"*";
  } //A ends
  
  //D starts
  
  for(i=60,j=2;j<=8;j++)
  {
   Sleep(50);
   //system("color 01");
   Color(02);
   gotoxy(i,j);
   cout<<"*";
  }
  
   
  for(i=60,j=2;i<=67;i++)
  {
   Sleep(50);
   //system("color 01");
   Color(02);
   gotoxy(i,j);
   cout<<"*";
  }
  
    
  for(i=68,j=3;j<=7;j++)
  {
   Sleep(50);
   //system("color 01");
   Color(02);
   gotoxy(i,j);
   cout<<"*";
  }
  
     
  for(i=67,j=8;i>=60;i--)
  {
   Sleep(50);
  // system("color 01");
  Color(02);
   gotoxy(i,j);
   cout<<"*";
  } //D ends
 
  
  //K starts
  
  for(i=75,j=2;j<=8;j++)
  {
  	Sleep(50);
  	//system("color 01");
  	Color(05);
  	gotoxy(i,j);
  	cout<<"*";
  }
  
  for(i=78,j=2;j<=5;j++,i--)
  {
  	Sleep(50);
  	//system("color 01");
  	Color(05);
  	gotoxy(i,j);
  	cout<<"*";
  }
  
  for(i=75,j=5;j<=8;j++,i++)
  {
  	Sleep(50);
  	//system("color 01");
  	Color(5);
  	gotoxy(i,j);
  	cout<<"*";
  } //K ends
  
  //H starts
  
  for(i=80,j=2;j<=8;j++)
  {
  	Sleep(50);
  	//system("color 01");
  	Color(4);
  	gotoxy(i,j);
  	cout<<"*";
  }
  
   for(i=80,j=5;i<=88;i++)
  {
  	Sleep(50);
  //	system("color 01");
  Color(04);
  	gotoxy(i,j);
  	cout<<"*";
  }
  
  
   for(i=88,j=2;j<=8;j++)
  {
  	Sleep(50);
  	//system("color 01");
  	Color(04);
  	gotoxy(i,j);
  	cout<<"*";
  } // H ends
  
  //A starts
  
    for(i=90,j=8;j>=3;j--)
  {
  	Sleep(50);
  //	system("color 01");
  Color(1);
  	gotoxy(i,j);
  	cout<<"*";
  }
  
  
    for(i=91,j=2;i<=97;i++)
  {
  	Sleep(50);
  	//system("color 01");
  	Color(1);
  	gotoxy(i,j);
  	cout<<"*";
  }
  
  for(i=98,j=3;j<=8;j++)
  {
  	Sleep(50);
  	//system("color 01");
  	Color(01);
  	gotoxy(i,j);
  	cout<<"*";
  }
  
   for(i=90,j=5;i<=98;i++)
  {
  	Sleep(50);
  	//system("color 01");
  	Color(01);
  	gotoxy(i,j);
  	cout<<"*";
  } //A ends
  
  //N Starts
  
  for(i=100,j=2;j<=8;j++)
  {
  	Sleep(50);
  	//system("color 01");
  	Color(06);
  	gotoxy(i,j);
  	cout<<"*";
  } 
  
   for(i=100,j=2;j<=8;j++,i++)
  {
  	Sleep(50);
  //	system("color 01");
  Color(06);
  	gotoxy(i,j);
  	cout<<"*";
  } 
  
    for(i=108,j=8;j>=2;j--)
  {
  	Sleep(50);
  	//system("color 01");
  	Color(6);
  	gotoxy(i,j);
  	cout<<"*";
  } //N ends
  
  
  
  
  
  
  
  
  
  
  
  

  getch();

}




