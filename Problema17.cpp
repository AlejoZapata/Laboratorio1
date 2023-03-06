#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    while(true){
        b=0;c=0;
        cout<<"Ingrese un numero: ";cin>>a;
        for(float i=1;c<a;i++){
            c=0; //se reinicia por que pasamos a otro numero a buscar sus divisores
            b=i*(i+1)/2; //formulita que me dio el ejercicio de numeros triangulares
            for(int j=1;j<=b;j++){ //buscar sus divisores
                if(b%j==0) c++; //contador para saber cuantos divisores hay
            }
        }
        cout<<"El numero es: "<<b<<" que tiene "<<c<<" divisores"<<endl;
    }
}
