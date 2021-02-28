#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
using namespace std; 

void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 } 
void control();

int main(){
	control();
}

void control(){
	system("cls");
int z,x,a,b,c,d,e,f,p,g,cent1,cent2;
int uni,dec,uni1,dec1,uni2,dec2,uni3,dec3;
gotoxy(20,1);cout<<("________________________________________");
gotoxy(20,2);cout<<("Multilicacion de Dos Digitos de forma Grafica  ");


gotoxy(20,6);cout<<("Ingrese Cantidad: ");
cin>>a;
gotoxy(20,7);cout<<("Ingrese Cantidad: ");
cin>>b;
int r=a*b;
gotoxy(20,10);cout<<a;
gotoxy(18,12);cout<<("X");gotoxy(20,12);cout<<b;
gotoxy(15,13);cout<<("___________");

	uni = a%10; a /= 10;
	dec = a%10; a /= 10;
    uni1 = b%10; b /= 10;
	dec1 = b%10; b /= 10;

c=uni1*uni;
	uni2 = c%10; c /= 10;
	dec2 = c%10; c /= 10;
	cent1= c%10; c /= 10;
	
d=uni1*dec+dec2;
gotoxy(20,15);cout<<d<<uni2;

e=dec1*uni;
	uni3 = e%10; e /= 10;
	dec3 = e%10; e /= 10;
	
	cent2 = e%10; e /= 10;
	
f=dec1*dec+dec3;
gotoxy(19,16);cout<<f<<uni3;
gotoxy(15,17);cout<<("____________");
/*x=dec2+dec3;
p=dec2+dec+uni3;*/
gotoxy(19,18);cout<<r;

gotoxy(20,22);cout<<(" Desea Volver a repetir: ");
cin>>z;
if (z==1){
 control();

}else{
	exit (0);
}
}
