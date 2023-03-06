#include <iostream>

using namespace std;

int main()
{
    int numero1,suma1,suma2,resultado1,resultado2,contador1,contador2;
    bool w=true; //banderita
    while (w==true){
        cout << "Ingrese un numero impar: "; cin >> numero1;
        suma1=numero1%2;
        if(suma1==0) w=true; //determinar que no sea par
        if (suma1!=0){ //determinar que sea impar para que el programa funcione bien
            w=false;
            resultado2=(numero1/2)+1;
            resultado1=(numero1/2)+1;
            suma2=1;
            for (contador1=1;contador1<=numero1;contador1+=1) { //filas
                for (contador2=1;contador2<=numero1;contador2+=1) { //columnas
                    if (contador1==(numero1/2)+1) suma2=-1; //cuando llegue al medio pueda imprimir todas las entradas
                    if (contador2>=resultado2 && contador2<=resultado1){
                        cout << '*';
                    }
                    else{
                        cout << ' ';
                    }
                }
                resultado2-=suma2; //el lado izquierdo vaya sumando o restando
                resultado1+=suma2; //el lado derecho vaya sumando o restando
                cout << endl;
            }
        }
    }
}
