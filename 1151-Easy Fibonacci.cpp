#include<iostream>
using namespace std;
int main()
{
  int n,f=0,s=1,t=0,i,c=2;
  cin>>n;
  for(i=2;i<n;i++)
  {
      if(i==2)
      {
            cout<<"0 1";
      }
      if(i==2)
      {
          cout<<" ";
      }
      c++;
     t=f+s;
     if(c==n)
     {
         cout<<t<<endl;
     }
     else
     {
       cout<<t<<" ";
     }

      f=s;
      s=t;
  }

}

