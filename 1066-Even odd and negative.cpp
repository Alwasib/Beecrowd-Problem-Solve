#include<iostream>
using namespace std;
int main()
{
    int i,a[10],c=0,x=0,d=0,m=0;
    for(i=1;i<=5;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=5;i++)
    {
          if(a[i]%2==0)
            {
              c++;
            }
    }
    cout<<c<<" valor(es) par(es)"<<endl;
     for(i=1;i<=5;i++)
    {
          if(a[i]%2==1||a[i]%2==-1)
            {
              x++;
            }
    }
    cout<<x<<" valor(es) impar(es)"<<endl;
    for(i=1;i<=5;i++)
    {
        if(a[i]>0)
        {
            d++;
        }
    }
    cout<<d<<" valor(es) positivo(s)"<<endl;
     for(i=1;i<=5;i++)
    {
        if(a[i]<0)
        {
            m++;
        }
    }
    cout<<m<<" valor(es) negativo(s)"<<endl;
}

