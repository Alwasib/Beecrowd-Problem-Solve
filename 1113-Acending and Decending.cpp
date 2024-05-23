#include<iostream>
using namespace std;
int main()
{
    int x,y,i;
    for(i=1;i<=100;i++)
    {
        cin>>x>>y;
        if(x>y)
        {
            cout<<"Decrescente"<<endl;
        }
        else if(x==y)
        {
            break;
        }
        else
        {
          cout<<"Crescente"<<endl;
        }
         if(x==y)
        break;
    }

}

