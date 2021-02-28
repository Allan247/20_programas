#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
void coordenadas(int x,int y)
{  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
}  


void diamante()
{
	int x=20, xx=20;
	int y=20, yy=20;
	for(int i=7;i<=16;i++)
	{
		x++;
		coordenadas(x,i);
		cout<<"*";
		y--;
		coordenadas(y,i);
		cout<<"*";
	}
	for(int j=25;j>=16;j--)
	{
		xx--;
		coordenadas(xx,j);
		cout<<"*";
		yy++;
		coordenadas(yy,j);
		cout<<"*";
	}
	coordenadas(20,26);
	cout<<"*";
}

void triangulo()
{
	int x=20;
	int y=20;
	for(int i=7;i<16;i++)
	{
		x++;
		coordenadas(x,i);
		cout<<"*";
		y--;
		coordenadas(y,i);
		cout<<"*";
	}
	for(int i=10;i<31;i++)
	{
		coordenadas(i,16);
		cout<<"*";
	}
}

void cuadrado()
{
	for (int i=5;i<14;i++)
	{
		coordenadas(5, i);
		cout<<"*";
		coordenadas(24,i);
		cout<<"*";
	}
	for(int j=5;j<25;j++)
	{
		coordenadas(j,5);
		cout<<"*";
		coordenadas(j, 14);
		cout<<"*";
	}
}


void rectangulo()
{
	for (int i=5;i<19;i++)
	{
		coordenadas(5, i);
		cout<<"*";
		coordenadas(15,i);
		cout<<"*";
	}
	for(int j=5;j<16;j++)
	{
		coordenadas(j,5);
		cout<<"*";
		coordenadas(j, 19);
		cout<<"*";
	}
}

void figuras()
{
	system("cls");
	int opcion;
	string opc;
	cout<<"1.	Cuadrado"<<endl;
	cout<<"2.	Rectangulo"<<endl;
	cout<<"3. 	Triangulo"<<endl;
	cout<<"4. 	Diamante"<<endl;
	cout<<"Ingrese la opcion que desea: "; cin>>opcion;
	
	switch(opcion)
	{
		case 1:
			cuadrado();
			break;
		case 2:
			rectangulo();
			break;
		case 3:
			triangulo();
			break;
		case 4:
			diamante();
			break;
		default:
			cout<<"Esa opcion no existe"<<endl;
			break;
	}
	system("pause");
	system("cls");
	cout<<"\nDesea ver otra figura(s/n): ";cin>>opc;
	if(opc=="s")
	{
		figuras();
	}
	else
	{
		cout<<"Nos vemos"<<endl;
	}
}



