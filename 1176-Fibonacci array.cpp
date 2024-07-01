#include<iostream>
using namespace std;
int main()
{
    int i,t,k;
    long long int n[61];
    n[0]=0;
    n[1]=1;
    for(i=2;i<=60;i++)
    {
        n[i]=n[i-1]+n[i-2];
    }
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>k;
        cout<<"Fib("<<k<<") = "<<n[k]<<endl;
    }

}




