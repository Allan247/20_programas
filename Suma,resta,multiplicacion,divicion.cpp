#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
	
float a;
float b;
float Suma;
float Resta;
float Multi; 
float Divi;

	
	cout<<"primer valor a sumar: "<<endl;
	cin>>a;
	cout<<"sogundo valor a sumar: "<<endl;
	cin>>b;
	Suma= a+b; 
	
	
cout<<"El resutado de tu suma es: "<<Suma<<endl;

	cout<<"primer valor a restar: "<<endl;
	cin>>a;
	cout<<"sogundo valor a restar: "<<endl;
	cin>>b;
	Resta= a-b; 
	
	
cout<<"El resutado de tu resta es: "<<Resta<<endl;
	
	cout<<"primer valor a multiplicar: "<<endl;
	cin>>a;
	cout<<"sogundo valor a multiplicar: "<<endl;
	cin>>b;
	Multi= a*b; 
	
	
cout<<"El resutado de tu multiplicacion es: "<<Multi<<endl;

	cout<<"primer valor a dividir: "<<endl;
	cin>>a;
	cout<<"sogundo valor a dividir: "<<endl;
	cin>>b;
	Divi= a/b; 
	
	
cout<<"El resutado de tu divicion es: "<<Divi<<endl;
	
	system("pause");
	return 0;
}

