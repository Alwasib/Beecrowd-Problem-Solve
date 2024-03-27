#include<iostream>
using namespace std;
int main()
{
    int a,b,seconds,minutes,hours,N,d;
    cin>>N;
    a=N/60;
    hours=a/60;
    d=hours*60*60;
    b=N-d;
    minutes=b/60;
    seconds=b%60;

    cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
    return 0;
}

