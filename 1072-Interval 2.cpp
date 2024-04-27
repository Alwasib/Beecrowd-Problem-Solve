#include<iostream>
using namespace std;
int main()
{
    int n,x[10000],i,c=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x[i];
    }
     for(i=1;i<=n;i++)
    {
        if(x[i]>=10&&x[i]<=20)
        {
            c++;
        }
    }
    cout<<c<<" in"<<endl;
    cout<<n-c<<" out"<<endl;

}
