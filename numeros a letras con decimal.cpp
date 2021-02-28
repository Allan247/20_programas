#include <iostream>
#include <iomanip>
#include <sstream>
#include <limits>
 
#define LIMITE_SUP 999999.99
#define LIMITE_INF -999999.99
#define N_DIGITOS_ENTERO 6
#define UNIDADES 5
#define DECENAS 4
#define CENTENAS 3
#define MILLARES 2
#define DECENAS_MILLAR 1
#define CENTENAS_MILLAR 0
 
using namespace std;
 
void pausar()
{
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cin.get();
}

 
double SolicitarNumero(void)
{
    double num;
    string aux; 
    bool error;
 
   
    do{
        cout << "Introduce un numero (" << LIMITE_INF << " a " << setprecision(2) << fixed << LIMITE_SUP << "): ";
        error=false;
        cin >> aux; 
        istringstream ss(aux); 
        if(!(ss >> num) || aux.find(',',0) != aux.npos){ 
            cout << "Formato de entrada incorrecto. Vuelva a intentarlo." << endl;
            error=true; 
            if(num < LIMITE_INF || num > LIMITE_SUP)
                cout << "El numero introducido excede del rango valido. Vuelva a intentarlo." << endl;
        }
        ss.clear(); 
    }while(error || (num < LIMITE_INF || num > LIMITE_SUP)); 
 
    return num;
}

 
void SepararDigitosInt(int num, int digitos[N_DIGITOS_ENTERO])
{
    for(int i=N_DIGITOS_ENTERO-1; i>=0; i--,num /=10)
        digitos[i]=num%10;
}

 
string ObtenerStringInt(double num)
{
   
    char cadenas[4][11][15]={{"","mil ","dosmil ","tresmil ","cuatromil ","cincomil ","seismil ","sietemil ","ochomil ","nuevemil "},
                             {"","cien ","doscientos ","trescientos ","cuatrocientos ","quinientos ","seiscientos ","setecientos ","ochocientos ","novecientos "},
                             {"","diez ","veinte ","treinta ","cuarenta ","cincuenta ","sesenta ","setenta ","ochenta ","noventa "},
                             {"cero","uno","dos","tres","cuatro","cinco","seis","siete","ocho","nueve"}};
    char cadenaDecenas[9][15]={"once","doce","trece","catorce","quince","dieciseis","diecisiete","dieciocho","diecinueve"};
 
    int digitos[N_DIGITOS_ENTERO];
 
    string salida;
 
    if(num < 0){
        salida += "menos ";
        num *= -1;
    }
 
   
    SepararDigitosInt(num,digitos);
 
 
    for(int i=0; i<N_DIGITOS_ENTERO; i++){
        bool compuesta=false;
        switch(digitos[i]){
            case 0: 
                if(i==N_DIGITOS_ENTERO-1){
                    for(int j=0;j<N_DIGITOS_ENTERO;j++){ 
                        if(digitos[j] != 0){
                            compuesta=true;
                            break;
                        }
                    }
                    if(!compuesta) 
                        salida += cadenas[3][digitos[i]];
                }
                break;
            default: 
                for(int j=i+1;j<N_DIGITOS_ENTERO;j++){ 
                    if(digitos[j] != 0){
                        compuesta=true;
                        break;
                    }
                }
                if(compuesta){ 
                    switch(i){
                        case UNIDADES: case MILLARES:
                            if(i==UNIDADES)
                                salida += cadenas[3][digitos[i]]; 
                            else{
                                if(digitos[i]!=1){
                                    salida += cadenas[3][digitos[i]]; 
                                    salida += " ";
                                }
                                salida += cadenas[0][1];
                            }
                            break;
                        case DECENAS: case DECENAS_MILLAR: 
                            switch(digitos[i]){
                                case 1:
                                    if(digitos[i+1] != 0)
                                        salida += cadenaDecenas[digitos[i+1]-1];
                                    else
                                        salida += cadenas[2][digitos[i]];
                                    if(i==DECENAS){
                                        i++;
                                        continue;
                                    }
                                    salida += cadenas[0][1]; 
                                    i++;
                                    break;
                                case 2: 
                                    if(digitos[i+1] != 0)
                                        salida += "veinti";
                                    else{
                                        salida += cadenas[2][digitos[i]];
                                        if(i==DECENAS_MILLAR){
                                            salida += cadenas[0][1]; 
                                            i++;
                                        }
                                    }
                                    break;
                                default:
                                    salida += cadenas[2][digitos[i]]; 
                                    if(digitos[i+1] != 0)
                                        salida += "y ";
                                    else if(i==DECENAS_MILLAR)
                                        salida += cadenas[0][1]; 
                            }
                            break;
 
                        case CENTENAS: case CENTENAS_MILLAR: 
                            if(digitos[i]==1)
                                salida += "ciento ";
                            else
                                salida += cadenas[1][digitos[i]]; 
                            break;
 
                        default: 
                            salida += cadenas[i][digitos[i]]; 
                    }
                }else{ 
                    switch(i){
                        case UNIDADES: case MILLARES:
                            if(i==UNIDADES){
                                salida += cadenas[3][digitos[i]]; 
                            }else{
                                if(digitos[i]!=1){
                                    salida += cadenas[3][digitos[i]]; 
                                    salida += " ";
                                }
                                salida += cadenas[0][1]; 
                            }
                            break;
 
                        case DECENAS: case DECENAS_MILLAR:
                            salida += cadenas[2][digitos[i]]; 
                            if(i==DECENAS_MILLAR)
                                salida += cadenas[0][1]; 
                            break;
 
                        case CENTENAS: case CENTENAS_MILLAR:
                            salida += cadenas[1][digitos[i]]; 
                            if(i==CENTENAS_MILLAR)
                                salida += cadenas[0][1]; 
                    }
                }
        }
 
    }
    return salida;
}

 
int main(int argc, char* argv[])
{
    int parteEntera,parteDecimal;
    double num;
    string salida;
 
    if(argc==2){
        istringstream ss(argv[1]);
        if(!(ss >> num)){
            cout << "Formato de entrada incorrecto" << endl;
            return 0;
        }
    }else{
        num=SolicitarNumero();
    }
 
  
    parteEntera = num;
    parteDecimal = (num-parteEntera)*100;
 
   
    salida=ObtenerStringInt(num);
 
  
    if(salida[salida.length()-1]!= ' ')
        salida += " ";
 
    if(parteDecimal < 0)
        parteDecimal *= -1;
  
    cout << salida << "y " << parteDecimal << "/100"<< endl;
 
    if(argc != 2){
        cout << "Pulsa intro para salir...";
        pausar();
    }
    return 0;
}
