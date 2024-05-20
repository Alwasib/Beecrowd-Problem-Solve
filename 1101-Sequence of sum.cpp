#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j,sum=0;
    for(i=1;i<=3;i++)
    {
        cin>>m>>n;
          if(m==0||m<0||n<0||n==0)
        {
           break;
        }
      else  if(m>n)
        {
            for(j=n;j<=m;j++)
            {
                cout<<j<<" ";
                sum=sum+j;
            }
            cout<<"Sum="<<sum<<endl;
            sum=0;
        }
        else
        {
            for(j=m;j<=n;j++)
            {
                cout<<j<<" ";
                sum=sum+j;
            }
            cout<<"Sum="<<sum<<endl;
            sum=0;
        }

    }
}



