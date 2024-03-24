#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    double a,b,m,c;
    cin>>s;
    cin>>a>>b;
    m=((b*15)/100);
    c=a+m;
    cout<<fixed<<setprecision(2);
    cout<<"TOTAL = R$ "<<c<<endl;
    return 0;

}
