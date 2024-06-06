#include<iostream>
using namespace std;
int main()
{
    int i,a,n,j,sum=0,p;
    cin>>a>>n;
    if(n<=0)
    {
        for(j=1;j<=100;j++)
        {
            cin>>p;

            if(p>0)
                break;
        }
        for(i=0;i<p;i++)
        {
            sum=(sum+i)+a;
        }
        cout<<sum<<endl;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            sum=(sum+i)+a;
        }
         cout<<sum<<endl;
    }

}

