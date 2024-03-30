#include<iostream>
using namespace std;
int main()
{
    double N;
    int hn,ft,tw,tn,fv,two,a,b,c,d;
    int e,f,g,on,m,gf,s,gtf,gtn,w,x,gfv,y,gfon;
    cin>>N;
    a=N*100;
    hn=a/10000;
    b=a%10000;
    ft=b/5000;
    c=b%5000;
    tw=c/2000;
    d=c%2000;
    tn=d/1000;
    e=d%1000;
    fv=e/500;
    f=e%500;
    two=f/200;
    g=f%200;
    cout<<"NOTAS:"<<endl;
    cout<<hn<<" nota(s) de R$ 100.00"<<endl;
    cout<<ft<<" nota(s) de R$ 50.00"<<endl;
    cout<<tw<<" nota(s) de R$ 20.00"<<endl;
    cout<<tn<<" nota(s) de R$ 10.00"<<endl;
    cout<<fv<<" nota(s) de R$ 5.00"<<endl;
    cout<<two<<" nota(s) de R$ 2.00"<<endl;
    on=g/100;
    m=g%100;
    gf=m/50;
    s=m%50;
    gtf=s/25;
    w=s%25;
    gtn=w/10;
    x=w%10;
    gfv=x/5;
    y=x%5;
    gfon=y/1;
    cout<<"MOEDAS:"<<endl;
    cout<<on<<" moeda(s) de R$ 1.00"<<endl;
    cout<<gf<<" moeda(s) de R$ 0.50"<<endl;
    cout<<gtf<<" moeda(s) de R$ 0.25"<<endl;
    cout<<gtn<<" moeda(s) de R$ 0.10"<<endl;
    cout<<gfv<<" moeda(s) de R$ 0.05"<<endl;
    cout<<gfon<<" moeda(s) de R$ 0.01"<<endl;
    return 0;
}
