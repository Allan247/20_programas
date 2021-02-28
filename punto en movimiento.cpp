#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void gotoxy(int x1, int y1){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x1;
	dwPos.Y = y1;
	SetConsoleCursorPosition(hcon, dwPos);
}

char opcion;
int x=10,y=10;


int main()
{
	while(opcion!='z')
	{
		system("cls");
		gotoxy(x,y); cout<<"O";
		opcion=getch();
		switch(opcion)
		{
			case 'w': y--; break;
			case 's': y++; break;
			case 'a': x--; break;
			case 'd': x++; break;
		}
	}
	return 0;
	
		
}
