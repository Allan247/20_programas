#include <iostream>
using namespace std;

main(){
    int number;
    cout<<"Escriba la tabla de multiplicacion del 1/10 :"<<endl;
    cin>>number;
    
    for(int i=1;i<=10;i++){
        int multiplicacion = i * number;
        cout<<number <<" x "<< i <<"="<< multiplicacion <<endl;
    }
    
    return 0;
}
