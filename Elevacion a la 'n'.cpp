#include<iostream>
using namespace std;
int main(){
    int num, pot, i, elev;
	
	cout<<"Digite un numero: ";
	cin>>num;
	cout<<"Digite la potencia: ";
	cin>>pot;
	i=1;
	elev=1;
	while(i<=pot){
		elev=num*elev;
		i++;
	}
	cout<<"El resultado de la elevacion es: "<<elev;
	
	cin.get();
	return 0;
}
