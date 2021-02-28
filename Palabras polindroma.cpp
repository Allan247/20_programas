#include<iostream>
#include<cstring>
using namespace std ;

int main(){
char cadena[100],copia[100];
cout<<"ingrese palabra :"<<endl;
gets(cadena);
for(int i=(strlen(cadena)-1);i>=0;i--){
  copia[strlen(cadena)-1-i]=cadena[i];
 }
 copia[strlen(cadena)]='\0';
 if(strcmp(cadena,copia)==0){
  cout<<"Es palindroma";
 }else{
  cout<<"No es palindroma";
 }
return 0;
}
