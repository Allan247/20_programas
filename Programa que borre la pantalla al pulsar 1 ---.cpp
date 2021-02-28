#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int letra;
	
	cout<<"!!!!!Programa que borra la pantalla al pulsar 1!!!!!!";
	cout<<"\n---------------------------------------------------\n";
	cout<<"Por favor, digite el numero 1: ";
	cin>> letra;
	
	if(letra==1){
		system("cls");
		cout<<"Ha funcionado el borrado de pantalla";
	}
	else{
		cout<<"\nTecla equivocada, tienes que pulsar 1: ";
		cin>> letra;
		if(letra==1){
		system("cls");
		cout<<"Ha funcionado el borrado de pantalla";
		}
	}
	cin.get();
	return 0;	
}
