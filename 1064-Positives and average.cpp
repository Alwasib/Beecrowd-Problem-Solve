#include<bits/stdc++.h>
using namespace std;
int main()
{
  float a[6],c=0,s=0,m;

  for(int i=0;i<6;i++)
  {
    cin>>a[i];
  }
 for(int i=0;i<6;i++)
  {
    if(a[i]>0)
    {
        c++;
        s=s+a[i];
    }
  }
  m=s/c;
  cout<<c<<" valores positivos"<<endl;
  cout<<fixed<<setprecision(1);
  cout<<m<<endl;
}
