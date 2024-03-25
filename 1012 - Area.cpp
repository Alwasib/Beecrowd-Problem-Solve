#include<bits/stdc++.h>
using namespace std;
int main()
{
    float A,B,C;
    double TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO,pie=3.14159;
    cin>>A>>B>>C;
    cout<<fixed<<setprecision(3);
    TRIANGULO=0.5*A*C;
    CIRCULO=pie*C*C;
    TRAPEZIO=((A+B)/2)*C;
    QUADRADO=B*B;
    RETANGULO=A*B;
    cout<<"TRIANGULO: "<<TRIANGULO<<endl;
    cout<<"CIRCULO: "<<CIRCULO<<endl;
    cout<<"TRAPEZIO: "<<TRAPEZIO<<endl;
    cout<<"QUADRADO: "<<QUADRADO<<endl;
    cout<<"RETANGULO: "<<RETANGULO<<endl;
    return 0;

}


