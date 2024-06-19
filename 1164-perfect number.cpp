#include<iostream>
using namespace std;
int main()
{
    int i,n,x,j,sum=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x>0)
        {
        for(j=1;j<=x;j++)
        {
            if(j==x)
                break;
            if(x%j==0)
            {
               sum=sum+j;
            }
        }
        if(sum==x)
        {
            cout<<x<<" eh perfeito"<<endl;
        }
        else
        {
             cout<<x<<" nao eh perfeito"<<endl;
        }
        sum=0;
        }

    }
}

