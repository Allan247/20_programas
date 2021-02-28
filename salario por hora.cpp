#include<iostream>
using namespace std;

int main(){
	int hora, valor, salario;
	
	cout << "Digite las horas trabajadas: ";
	cin >> hora;
	cout << "Digite el valor pagado por hora: ";
	cin >> valor;
	
	salario = hora * valor;
	
	cout << "\nEl salario del trabajador es: "<<salario;	
	cin.get();
	return 0;
}
