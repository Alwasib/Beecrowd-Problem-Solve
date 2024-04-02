#include<bits/stdc++.h>
using namespace std;
int main()
{
    int X,Y;
    float Z;
    cin>>X>>Y;
    if(X==1)
    {
        Z=Y*4.00;
        cout<<fixed<<setprecision(2);
        cout<<"Total: R$ "<<Z<<endl;
    }
    else if(X==2)
    {
        Z=Y*4.50;
        cout<<fixed<<setprecision(2);
        cout<<"Total: R$ "<<Z<<endl;
    }
    else if(X==3)
    {
        Z=Y*5.00;
        cout<<fixed<<setprecision(2);
        cout<<"Total: R$ "<<Z<<endl;
    }
    else if(X==4)
    {
        Z=Y*2.00;
        cout<<fixed<<setprecision(2);
        cout<<"Total: R$ "<<Z<<endl;
    }
    else if(X==5)
    {
        Z=Y*1.50;
        cout<<fixed<<setprecision(2);
        cout<<"Total: R$ "<<Z<<endl;
    }
    return 0;
}

