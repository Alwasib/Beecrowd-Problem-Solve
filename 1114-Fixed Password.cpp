#include<iostream>
using namespace std;
int main()
{
    int x,i;
    for(i=1;i<=100;i++)
    {
        cin>>x;
        if(x==2002)
        {
            cout<<"Acesso Permitido"<<endl;
        }
        else
        {
            cout<<"Senha Invalida"<<endl;
        }
        if(x==2002)
            break;
    }


}
