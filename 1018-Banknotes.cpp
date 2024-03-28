#include<iostream>
using namespace std;
int main()
{
  int N,hnd,ft,a,b;
  int tw,c,tn,d,fv,e,two,f,on;
  cin>>N;
  hnd=N/100;
  a=N%100;
  ft=a/50;
  b=a%50;
  tw=b/20;
  c=b%20;
  tn=c/10;
  d=c%10;
  fv=d/5;
  e=d%5;
  two=e/2;
  f=e%2;
  on=f/1;
  cout<<N<<endl;
  cout<<hnd<<" nota(s) de R$ 100,00"<<endl;
  cout<<ft<<" nota(s) de R$ 50,00"<<endl;
  cout<<tw<<" nota(s) de R$ 20,00"<<endl;
  cout<<tn<<" nota(s) de R$ 10,00"<<endl;
  cout<<fv<<" nota(s) de R$ 5,00"<<endl;
  cout<<two<<" nota(s) de R$ 2,00"<<endl;
  cout<<on<<" nota(s) de R$ 1,00"<<endl;
  return 0;
}
