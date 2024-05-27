#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    float n,j=0,sum=0;
    for(i=1;i<=100;i++)
    {
        cin>>n;
        if(n>=0&&n<=10)
        {
         sum=sum+n;
         j++;
        }
       else if(n<0||n>10)
        {
            cout<<"nota invalida"<<endl;
        }
        if(j==2)
            break;
    }
    cout<<fixed<<setprecision(2);
    cout<<"media = "<<sum/2<<endl;

}
