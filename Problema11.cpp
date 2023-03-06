#include <iostream>

using namespace std;

int main()
{
    while ( true ){
        int a,b,i;
        cout <<"Ingrese el primer numero: ";cin>>a;
        b=a;
        for(i=2;a>=2;a-=1){ //
            for(;i%a!=0;i+=2){
                if(i>a && a<b){
                    a=b+1;
                    i+=2;
                }
            }
        }
        cout<<"El MCM es "<<i<<endl;
    }
}
