#include <iostream>

using namespace std;

int main()
{
    int a,b;
    while(true){
        cout << "Ingrese el dia: "; cin>>a;
        cout<<"Ingrese el mes: ";cin>>b;
        if(a>31 || b>12){
            cout<<a<<" / "<<b<<" es una fecha invalida"<<endl;
        }
        if(a<32 && b<13){
            if(b==1 || b==3 || b==5 || b==7 ||b==8|| b==10 || b==12){
                if(a>31){
                    cout<<a<<" / "<<b<<" es una fecha invalida"<<endl;
                }
            cout<<a<<" / "<<b<<" es una fecha valida"<<endl;
            }
            if(b==4 || b==6 || b==9 || b==11){
                if(a>30){
                    cout<<a<<" / "<<b<<" es una fecha invalida"<<endl;
                }
            cout<<a<<" / "<<b<<" es una fecha valida"<<endl;
            }
            if(b==2){
                if(a>29){
                    cout<<a<<" / "<<b<<" es una fecha invalida"<<endl;
                }
                if(a==29){
                    cout<<a<<" / "<<b<<" es una fecha valida en bisiesto"<<endl;
                }
                if(a<29){
                    cout<<a<<" / "<<b<<" es una fecha valida"<<endl;
                }
            }
        }
    }
}
