#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
   double A,B,C,s,R1,R2;
   cin>>A>>B>>C;
   s=B*B-4*A*C;

   if(s<0)
   {
       cout<<"Impossivel calcular"<<endl;
   }
   else if(A==0)
   {
       cout<<"Impossivel calcular"<<endl;
   }
   else
   {
     R1=(-B+sqrt(s))/(2*A);
     R2=(-B-sqrt(s))/(2*A);
     cout<<fixed<<setprecision(5);
     cout<<"R1 = "<<R1<<endl;
     cout<<"R2 = "<<R2<<endl;
   }

   return 0;


}

