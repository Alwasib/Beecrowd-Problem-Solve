#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n,a,b,c,x;
    cin>>n;
   for(int i=1;i<=n;i++)
   {
       cin>>a>>b>>c;
       x=((a*2)+(b*3)+(c*5))/10;
       cout<<fixed<<setprecision(1);
       cout<<x<<endl;
   }

}
