#include<iostream>
using namespace std;
int main()
{
    int i,n,x,y,sum=0,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x>>y;
        if(x%2==0)
        {
            x++;
        }
        for(j=0;j<y;j++)
        {
            sum=sum+x;
            x=x+2;
        }
        cout<<sum<<endl;
        sum=0;
        }

    }


