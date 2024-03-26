#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c1,c2,u1,u2;
    float p1,p2,VALOR;
    cin>>c1>>u1>>p1;
    cin>>c2>>u2>>p2;
    VALOR=u1*p1+u2*p2;
    cout<<fixed<<setprecision(2);
    cout<<"VALOR A PAGAR: R$ "<<VALOR<<endl;
    return 0;
}

