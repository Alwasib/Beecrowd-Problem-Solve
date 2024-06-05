#include<iostream>
using namespace std;
int main()
{
  int i,x,j;
  for(i=1;i<=10000;i++)
  {
      cin>>x;
      for(j=1;j<=x;j++)
      {
          if(j==x)
          {
            cout<<j<<endl;
          }
          else
          {
             cout<<j<<" ";
          }

      }
      if(x==0)
        break;
  }
}


