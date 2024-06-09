#include<iostream>
using namespace std;
int main()
{
   int i,n,c=1,sum=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
       sum=c*i;
       c=sum;
    }
    cout<<sum<<endl;
}

