#include<iostream>
using namespace std;
int main()
{
  float a[6],c=0;

  for(int i=0;i<6;i++)
  {
    cin>>a[i];
  }
 for(int i=0;i<6;i++)
  {
    if(a[i]>0)
    {
        c++;
    }
  }
  cout<<c<<" valores positivos"<<endl;

}
