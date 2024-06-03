#include<iostream>
using namespace std;
int main()
{
    int i,n,b,c,j,x;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<i<<" ";
        c=i*i;
        cout<<c<<" ";
        b=c*i;
        cout<<b<<endl;
        cout<<i<<" ";
        x=(i*i)+1;
        cout<<x<<" ";
        cout<<b+1<<endl;
    }
}

