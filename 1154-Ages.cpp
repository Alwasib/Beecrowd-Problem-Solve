#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i,c=0;
  float x,sum=0,p;
  for(i=1;i<=100;i++)
  {
      cin>>x;
      if(x>0)
      {
  sum=sum+x;
      c++;
      }
     else if(x<0)
        break;
  }
   p=sum/c;
   cout<<fixed<<setprecision(2);
  cout<<p<<endl;

}

