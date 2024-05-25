#include<iostream>
using namespace std;
int main()
{
    int x,y,i;
    for(i=1;i<=100;i++)
    {
        cin>>x>>y;
        if(x>0&&y>0)
        {
            cout<<"primeiro"<<endl;
        }
       else if(x>0&&y<0)
        {
            cout<<"quarto"<<endl;
        }
         else if(x<0&&y<0)
        {
            cout<<"terceiro"<<endl;
        }
        else if(x==0||y==0)
        {
            break;
        }
        else
        {
          cout<<"segundo"<<endl;
        }
        if(x==0||y==0)
            break;

    }


}

