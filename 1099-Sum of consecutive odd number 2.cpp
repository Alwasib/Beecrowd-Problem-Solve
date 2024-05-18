#include<iostream>
using namespace std;
int main()
{
    int i,N,x,t=0,y,sum=0,j;
    cin>>N;
    for(i=1;i<=N;i++)
    {
        cin>>x>>y;
        if(x>y)
        {
        t=x;
        x=y;
        y=t;
        }
        if(x%2==0)
        {
            x--;
        }
        x=x+2;
        for(j=x;j<y;j++)
        {
           if(j%2==1)
           {
               sum=sum+j;
           }
        }
        cout<<sum<<endl;
      sum=0;
    }


}

