#include<iostream>
using namespace std;
int main()
{
    double A,B,C,t;
    cin>>A>>B>>C;

    if(B>A&&B>C)
    {
        t=A;
        A=B;
        B=t;
    }
    else if(C>A&&C>B)
    {
        t=A;
        A=C;
        C=t;
    }

    if((A*A)==(B*B+C*C))
    {
        cout<<"TRIANGULO RETANGULO"<<endl;
    }
    if(A>=(B+C))
    {
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }
    else if((A*A)>(B*B+C*C))
    {
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }
    if((A*A)<(B*B+C*C))
    {
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    }

    if(A==B&&A==C)
    {
      cout<<"TRIANGULO EQUILATERO"<<endl;
    }

    if((A==B&&A!=C)||(B==C&&A!=B)||(A==C&&A!=B))
    {
        cout<<"TRIANGULO ISOSCELES"<<endl;
    }
}

