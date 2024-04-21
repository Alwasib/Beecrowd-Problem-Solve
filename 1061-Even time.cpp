#include <iostream>
#include<string>
using namespace std;
int main()
{
  string x1,x2,x3,y1,y2,y3;
  int d1,d2,h1,h2,m1,m2,s1,s2;
  int a,b,c,d,e,f,g,h,i,n,p,q,l;
  int day,hour,mint,sec;
  cin>>x1;
  cin>>d1;
  cin>>h1>>x2>>m1>>x3>>s1;
  cin>>y1;
  cin>>d2;
  cin>>h2>>y2>>m2>>y3>>s2;
  a=(m1*60)+s1;
  b=h1*3600;
  c=d1*86400;
  d=a+b+c;
  f=(m2*60)+s2;
  g=h2*3600;
  h=d2*86400;
  i=f+g+h;
   n=i-d;
   day=n/86400;
   p=n%86400;
   hour=p/3600;
   q=p%3600;
   mint=q/60;
   l=q%60;
   sec=l;
   cout<<day<<" dia(s)"<<endl;
   cout<<hour<<" hora(s)"<<endl;
   cout<<mint<<" minuto(s)"<<endl;
   cout<<sec<<" segundo(s)"<<endl;
}

