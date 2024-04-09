#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x,y;
    cin>>x;
    if(x>=0&&x<=400.00)
    {
        y=(x/100)*15;
        cout<<fixed<<setprecision(2);
        cout<<"Novo salario: "<<x+y<<endl;
        cout<<"Reajuste ganho: "<<y<<endl;
        cout<<"Em percentual: "<<"15 %"<<endl;
    }
    else if(x>400.00&&x<=800.00)
    {
        y=(x/100)*12;
        cout<<fixed<<setprecision(2);
        cout<<"Novo salario: "<<x+y<<endl;
        cout<<"Reajuste ganho: "<<y<<endl;
        cout<<"Em percentual: "<<"12 %"<<endl;
    }
    else if(x>800.00&&x<=1200.00)
    {
        y=(x/100)*10;
        cout<<fixed<<setprecision(2);
        cout<<"Novo salario: "<<x+y<<endl;
        cout<<"Reajuste ganho: "<<y<<endl;
        cout<<"Em percentual: "<<"10 %"<<endl;
    }
    else if(x>1200.00&&x<=2000.00)
    {
        y=(x/100)*7;
        cout<<fixed<<setprecision(2);
        cout<<"Novo salario: "<<x+y<<endl;
        cout<<"Reajuste ganho: "<<y<<endl;
        cout<<"Em percentual: "<<"7 %"<<endl;
    }
      else
    {
        y=(x/100)*4;
        cout<<fixed<<setprecision(2);
        cout<<"Novo salario: "<<x+y<<endl;
        cout<<"Reajuste ganho: "<<y<<endl;
        cout<<"Em percentual: "<<"4 %"<<endl;
    }
}

