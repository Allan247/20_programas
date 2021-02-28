#include <iostream>
using namespace std;
int main(void){
	
	int opcion; 	
	double pulgadas,milimetros, yardas, metros, millas, kilometros;
	
	cout<< "Ingrese una opcion: "<< endl;
	cout<< "1. Pulgadas a milimetros" <<endl;
	cout<< "2. Yardas a metros"<< endl;
	cout<< "3. Millas a kilometros"<< endl;
	cin>> opcion;
	
	switch (opcion){
		
		case 1:
			
			cout<< "---Pulgadas a milimetros---"<< endl;
			cout<< "Ingrese la cantidad de pulgadas a convertir: "<< endl;
			cin >> pulgadas;
			milimetros = pulgadas * 25.40;
			cout<< pulgadas << " pulgadas equivalen a " << milimetros << "milimetros." << endl; 
			break;
			
		case 2: 
		
			cout<< "---Yardas a metros---"<< endl; 
				cout<< "Ingrese la cantidad de yardas a convertir: "<< endl;
			cin >> yardas;
			metros = yardas * 0.9144;
			cout<< yardas << " yardas equivalen a " << metros << "metros." << endl; 
			break;
			
		case 3:
			
			cout<< "---Millas a kilometros"<< endl;	
				cout<< "Ingrese la cantidad de millas a convertir: "<< endl;
			cin >> millas;
			kilometros = millas * 1.6093;
			cout<< millas << " millas equivalen a " << kilometros << "kilometros." << endl; 
			break;
			
		default: 
		
			cout << "La opcion ingresada no es corecta" << endl;
			break;
				
		
	}
	
	
}
