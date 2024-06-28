#include<iostream>
using namespace std;
int main()
{
  int i,j,n[11],x[11],c=0;
   for(i=1;i<=10;i++)
   {
     cin>>n[i];
   }
    for(i=1;i<=10;i++)
   {
     cin>>x[i];
   }
     for(i=10;i>0;i--)
   {
       cout<<"N["<<c<<"] = ";
     cout<<x[i]<<endl;
     c++;
   }
   for(i=10;i>0;i--)
   {
       cout<<"N["<<c<<"] = ";
       cout<<n[i]<<endl;
       c++;
   }

}
