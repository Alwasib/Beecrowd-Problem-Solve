#include<iostream>
using namespace std;
int main()
{
    int x,i,n,sum=0,c=0,p,j;
    cin>>x>>n;
    if(x<n)
    {
        for(i=x;i<1000;i++)
        {
          sum=sum+i;
          c++;
          if(sum>n)
                break;
        }
        cout<<c<<endl;
    }
    else
    {
        for(i=1;i<=1000;i++)
        {
            cin>>p;
        if(p>x)
        {
            for(j=x;j<=1000;j++)
            {
                sum=sum+j;
                c++;
                if(sum>p)
                    break;
            }
        }
        if(sum>p)
            break;
        }
        cout<<c<<endl;
    }

}

