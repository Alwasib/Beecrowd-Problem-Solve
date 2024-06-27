#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i,c=0;
   float x;
   for(i=1;i<=100;i++)
   {
       cin>>x;
       if(x>10)
       {
           c++;
       }
       else
       {
           cout<<fixed<<setprecision(1);
           cout<<"A["<<c<<"] = "<<x<<endl;
           c++;
       }

   }

}

