#include<iostream>
using namespace std;
int main()
{
    int i,n,b,c;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<i<<" ";
        c=i*i;
        cout<<c<<" ";
        b=c*i;
        cout<<b<<endl;
    }
}

