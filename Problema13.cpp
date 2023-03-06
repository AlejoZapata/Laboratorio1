#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    bool w;
    while(true){
        b=0;
        cout << "Ingrese un numero: "; cin >> a;
        for (int i=2;i<a;i++) { //numero a primo
            for (int j=2;j<i;j++) { //numero pa saber si el de arriba es primo
                if (i%j==0) { //si la multiplicacion para saber si i es primo
                    w=false; //si entra aqui significa que el numero no es primo
                    break;
                }
                else if (i%j!=0){
                    w=true; //en este caso, si no entra una sola vez a este else if, significa que encontro un numero primo
                }
            }
            if ((w==true || i==2)){
                c=i;
                b+=c; //en caso de que sea primo que vaya sumando
            }
            if (a==i) break; //apenas llegue hasta el numero ingresado se salga del for
        }
        cout << "El resultado de la suma es: " << b << endl;
    }
}
