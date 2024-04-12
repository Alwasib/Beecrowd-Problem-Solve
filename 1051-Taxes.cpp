#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x,a,b,y,c;
    cin>>x;
    if(x>=0&&x<=2000.00)
    {
        cout<<"Isento"<<endl;
    }
    else if(x>2000.00&&x<=3000.00)
    {
        b=x-2000.00;
        c=b*0.08;
        cout<<fixed<<setprecision(2);
        cout<<"R$ "<<c<<endl;
    }
     else if(x>3000.00&&x<=4500.00)
    {
        a=1000*0.08;
        b=x-3000.00;
        c=b*0.18;
        cout<<fixed<<setprecision(2);
        cout<<"R$ "<<a+c<<endl;

    }
     else
    {
        a=1000*0.08;
        y=1500*0.18;
        b=x-4500.00;
        c=b*0.28;
        cout<<fixed<<setprecision(2);
        cout<<"R$ "<<y+a+c<<endl;

    }
}

