#include<iostream>
using namespace std;
int main()
{
    int x,i,c=0,d=0,m=0,k=0;
    for(i=1;i<=100;i++)
    {
        cin>>x;
        if(x>=1&&x<=4)
        {
        if(x==1)
        {
          c++;
        }
       else if(x==2)
        {
          d++;
        }
       else if(x==3)
        {
          m++;
        }
        }
        else
        {
            k++;
        }
        if(x==4)
            break;
    }
    if(k>0)
    {
        cout<<"MUITO OBRIGADO"<<endl;
    }
    cout<<"Alcool: "<<c<<endl;
    cout<<"Gasolina: "<<d<<endl;
    cout<<"Diesel: "<<m<<endl;
}

