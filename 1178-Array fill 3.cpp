#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i,n[100];
   double t,p,c;
   cin>>t;
   for(i=0;i<100;i++)
   {
       if(i==0)
       {
       cout<<fixed<<setprecision(4);
       cout<<"N["<<i<<"] = "<<t<<endl;
       }
       else
       {
         p=t/2;
           cout<<fixed<<setprecision(4);
       cout<<"N["<<i<<"] = "<<p<<endl;
       c=t;
       t=p;

       }

   }
}

