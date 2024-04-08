#include<iostream>
using namespace std;
int main()
{
 int a,b,c,x;
 cin>>a>>b;
c=(24-a)+b;
if(c>24)
{
    x=c-24;
  cout<<"O JOGO DUROU "<<x<<" HORA(S)"<<endl;
}
else
{
cout<<"O JOGO DUROU "<<c<<" HORA(S)"<<endl;
}
}
