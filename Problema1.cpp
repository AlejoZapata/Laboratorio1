#include <iostream>

using namespace std;

int main()
{
    int a;
    char c;
    while(true){
        cout << "ingrese el caracter: ";
        cin >> c;
        a=int(c);
        if((a>=65 && a<=90)||(a>=97 && a<=122)){
            if(a==65 || a==69 || a==73 || a==79 || a==85) cout <<c<< " es una vocal mayuscula" << endl;
                else if(a==97 || a==101 || a==105 || a==111 || a==117) cout << c << " es una vocal minuscula" << endl;
                else cout << c << " es una consonante" << endl;
                        }
        else cout << "No es una letra" << endl;
    }
}
