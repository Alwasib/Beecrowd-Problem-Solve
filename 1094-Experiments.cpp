#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
   int n,i,x[10000],sum=0,d=0,m=0,z;
   float a,b,p,e,f,g,q;
   string s,r,c;
   cin>>n;
   r='R';
   c='C';
   for(i=0;i<n;i++)
   {
       cin>>x[i]>>s;
       if(s==r)
       {
         d=d+x[i];
       }
       if(s==c)
       {
          m=m+x[i];
       }
   }
   for(i=0;i<n;i++)
   {
      sum=sum+x[i];
   }
   z=sum-(d+m);
   e=sum;
   f=m;
   g=d;
   q=z;
   cout<<"Total: "<<sum<<" cobaias"<<endl;
   cout<<"Total de coelhos: "<<m<<endl;
   cout<<"Total de ratos: "<<d<<endl;
    cout<<"Total de sapos: "<<z<<endl;
    a=(f/e)*100;
    b=(g/e)*100;
    p=(q/e)*100;
    cout<<fixed<<setprecision(2);
    cout<<"Percentual de coelhos: "<<a<<" %"<<endl;
    cout<<"Percentual de ratos: "<<b<<" %"<<endl;
    cout<<"Percentual de sapos: "<<p<<" %"<<endl;

}

