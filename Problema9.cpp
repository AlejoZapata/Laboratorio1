#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,suma;
    while(true){
        cout << "Ingrese un numero: "; cin>>a;
        b=a; //
        suma=0;
        while ( b!=0 ){ //como le vamos quitando el ultimo digito hasta que sea cero
            c=b%10; //c es el ultimo digito con el que vamos a trabajar
            b=b/10; //el valor que entro el usuario le vamos quitando el ultimo digito
            d=c; //para multiplicarlo por si mismo
            if (c>1) { //Solo es necesario elevarlo cuando sea mayores a 1
                for( int i=2; i<=c ;i++ ){
                d=d*c; //elevacion por si mismo
               }
            }
            suma=suma+d; //la sumatoria de los numeros elevados a si mismos
        }
        cout <<"El resultado de la suma es: "<<suma<<endl;
    }
}
