#include <iostream>
#include <cmath>  
#include <iomanip> 
using namespace std;

int main() {
	
	float a, o;
	cout <<"Ingresa el lado adyacente del triangulo: ";
	cin >>a;
	cout <<"Ingresar el lado opuesto del triangulo: ";
	cin >> o;
	
	cout  << setprecision(3)  << sqrt(a*a + o*o);
}

