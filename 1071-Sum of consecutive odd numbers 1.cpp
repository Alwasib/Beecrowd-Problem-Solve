#include<iostream>
using namespace std;
int main()
{
 int x,y,i,sum=0;
 cin>>x>>y;
 if(x<y)
 {
 for(i=x+1;i<=y-1;i++)
 {
     if(i%2==1||i%2==-1)
     {
         sum=sum+i;

     }

 }
  cout<<sum<<endl;
 }

   else if(y<0)
    {
      for(i=y+1;i<=x-1;i++)
      {
          if(i%2==1||i%2==-1)
          {
              sum=sum+i;
          }
      }
       cout<<sum<<endl;
    }
    else
    {
    for(i=y+1;i<x-1;i++)
    {
     if(i%2==1||i%2==-1)
     {
         sum=sum+i;

     }

}
    cout<<sum<<endl;
}
}

