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
           if(x%j==0)
           {
               sum=sum+j;
           }

        }
        sum=sum-1;
        if(sum==x)
        {
            cout<<x<<" eh primo"<<endl;
        }
        else
        {
          cout<<x<<" nao eh primo"<<endl;
        }
        sum=0;

    }
    }
}

