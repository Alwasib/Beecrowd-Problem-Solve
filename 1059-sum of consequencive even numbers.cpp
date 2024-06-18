#include<iostream>
using namespace std;
int main()
{
    int i,x,j,sum=0,c=0;
    for(i=1;i<=1000;i++)
    {
      cin>>x;
      if(x==0)
        break;
     if(x%2==1)
     {
         x++;
         for(j=1;j<=5;j++)
         {
             sum=sum+x;
             x=x+2;
         }
         cout<<sum<<endl;
         sum=0;
     }
      else if(x<0)
      {
          if(x%2==-1)
          {
              x++;
          }
          for(j=1;j<=5;j++)
          {
              sum=sum+x;
              x=x+2;
          }
          cout<<sum<<endl;
          sum=0;
      }

     else
     {
          for(j=1;j<=5;j++)
         {
             sum=sum+x;
             x=x+2;
         }
         cout<<sum<<endl;
         sum=0;
     }

    }

    }



