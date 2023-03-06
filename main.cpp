#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,suma;
    while (true){
        cout << "Ingrese un numero: "; cin>>a;
        b=1;
        c=1;
        d=0;
        suma=0;
        while(d<a){ //condicion menor que el numero
            d=b+c; //los dos primeros numeros dan el tercer numero
            if (d%2==0) suma=suma+d; //condicion para la suma
            b=c; //el primer numero pasa a ser el segundo numero
            c=d; //el segundo numero pasa a ser la suma de el primer numero mas el segundo numero
        }
        cout <<"La suma de los numeros pares menos que "<<a<<" en la serie de fibonacci es: "<<suma<<endl;
    }
}
