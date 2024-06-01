#include<iostream>
using namespace std;
int main()
{
   int n,i,j,s;
   cin>>n;
   for(i=1;i<=n*4;i++)
   {
       if(i%4==0)
        {
            cout<<"PUM";
        }
        else
        {
        cout<<i<<" ";
        }
        if(i%4==0)
        {
            cout<<endl;
        }
    }
}

