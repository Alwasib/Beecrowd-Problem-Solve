#include<iostream>
using namespace std;
int main()
{
   int x,y,i;
   cin>>x>>y;
   if(x<y)
   {
   for(i=1;i<=y;i++)
   {
       if(i%x==0)
       {
           cout<<i;
       }
       else
       {
          cout<<i<<" ";
       }

       if(i%x==0)
       {
           cout<<endl;
       }

   }
   }
}


