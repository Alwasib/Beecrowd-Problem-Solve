#include<bits/stdc++.h>
using namespace std;
int main()
{
    float hours,km,c=12;
    float litre,a;
    cin>>hours>>km;
    a=km/12;
    litre=hours*a;
    cout<<fixed<<setprecision(3);
    cout<<litre<<endl;
}
