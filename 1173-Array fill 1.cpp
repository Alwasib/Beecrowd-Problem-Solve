#include<iostream>
using namespace std;
int main()
{
    int i,c=0,v;
    cin>>v;
    for(i=1;i<=10;i++)
    {
      cout<<"N["<<c<<"] = "<<v<<endl;
      v=v+v;
      c++;
    }

}

