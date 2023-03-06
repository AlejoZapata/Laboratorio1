#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,i,j;
    while (true){
        cout << "ingrese el tamanio del cuadrado: ";cin>>a;
        i=0,j=0;
        c=2;
        b=1;
        d=b;
        while(i<a-3){
            while(j<4){
                b = b+c;
                d = d+b;
                j++;
            }
            i++;
            c = c+2;
            j=0;
        }
        cout<<"En una espiral de "<<a<<" X "<<a<<" la suma es: "<<d<<endl;
    }
}
