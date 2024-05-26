#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    float x,y;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x>>y;
        if(y==0)
      {
          cout<<"divisao impossivel"<<endl;
      }
       else if(x>y)
      {
          cout<<fixed<<setprecision(1);
          cout<<x/y<<endl;
      }

      else
      {
          cout<<fixed<<setprecision(1);
          cout<<x/y<<endl;
      }
    }

}
