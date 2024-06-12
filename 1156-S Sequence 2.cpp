#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i;
  float sum=0,a=1.0;
  for(i=1;i<=39;i+=2)
  {
    sum=sum+(i/a);
    a=(a+a);
  }
  cout<<fixed<<setprecision(2);
  cout<<sum<<endl;
}

