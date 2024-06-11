#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i;
  float sum=0,a=2;
  for(i=1;i<100;i++)
  {
         sum=sum+(1/a);
         a++;

  }
  cout<<fixed<<setprecision(2);
  cout<<sum+1<<endl;

}

