#include<iostream>
using namespace std;
int main()
{
    int i,t,n[1000],c=0,p;
    cin>>t;
    p=t-1;
    for(i=0;i<1000;i++)
    {
       cout<<"N["<<i<<"] = "<<c<<endl;
       c++;
       if(c>p)
       {
           c=0;
       }
    }
}

