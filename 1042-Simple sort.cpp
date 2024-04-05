#include<iostream>
using namespace std;
int main()
{
    int a[3],i,j,mn;
    int s,b,c;
    for(i=0;i<3;i++)
    {
        cin>>a[i];
    }
    s=a[0];
    b=a[1];
    c=a[2];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        if(a[i]<a[j])
        {
            mn=a[i];
            a[i]=a[j];
            a[j]=mn;

        }
        }
    }
    for(i=0;i<3;i++)
    {
    cout<<a[i]<<endl;
    }
    cout<<endl;
    cout<<s<<endl;
    cout<<b<<endl;
    cout<<c<<endl;


}

