#include<iostream>
using namespace std;
int main()
{
    int i,x[1000],mx=0,p=0;
 for(i=0;i<100;i++)
 {
     cin>>x[i];

 }
   mx=x[0];
   for(i=0;i<100;i++)
   {
   if(x[i]>mx)
   {
       mx=x[i];
       p=i;
   }
   }
 cout<<mx<<endl;
  cout<<p+1<<endl;


}
