#include<iostream>
using namespace std;
int main()
{
 int years,months,days,a,n;
 cin>>n;
 years=n/365;
 a=n%365;
 months=a/30;
 days=a%30;
 cout<<years<<" ano(s)"<<endl;
 cout<<months<<" mes(es)"<<endl;
 cout<<days<<" dia(s)"<<endl;
 return 0;
}

