#include<iostream>
using namespace std;
int main()
{
    int i,x,inr,gr,c=0,d=0,a,b,m=0,n=0;
    cin>>inr>>gr;
    if(inr>gr)
    {
        c++;
    }
    if(inr<gr)
    {
        d++;
    }
    if(inr==gr)
    {
        n++;
    }
    m++;
    cout<<"Novo grenal (1-sim 2-nao)"<<endl;
    for(i=1;i<=100;i++)
    {
    cin>>x;
    if(x==1)
    {
        cin>>a>>b;
        if(a>b)
        {
            c++;
        }
        else if(a==b)
        {
            n++;
        }
        else
        {
            d++;
        }
        m++;

    }

     if(x==2)
        break;
            cout<<"Novo grenal (1-sim 2-nao)"<<endl;
    }

    cout<<m<<" grenais"<<endl;
    cout<<"Inter:"<<c<<endl;
    cout<<"Gremio:"<<d<<endl;
    cout<<"Empates:"<<n<<endl;
    if(c>d)
    {
        cout<<"Inter venceu mais"<<endl;
    }
    else
    {
       cout<<"Gremio venceu mais"<<endl;
    }

}

