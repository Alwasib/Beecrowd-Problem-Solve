#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    double x1,x2,y1,y2,a,b,DISTANCE;
    cin>>x1>>y1;
    cin>>x2>>y2;
    a=x2-x1;
    b=y2-y1;
    DISTANCE=sqrt(a*a+b*b);
    cout<<fixed<<setprecision(4);
    cout<<DISTANCE<<endl;
    return 0;

}

