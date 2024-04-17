#include<iostream>
using namespace std;
int main()
{
    int i,a[10],c=0;
    for(i=1;i<=5;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=5;i++)
    {
          if(a[i]%2==0)
            {
              c++;
            }
    }
    cout<<c<<" valores pares"<<endl;
}
