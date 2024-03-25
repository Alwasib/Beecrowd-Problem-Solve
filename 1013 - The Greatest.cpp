#include <iostream>

using namespace std;

int main()
 {
       int a,b,c,p,d;
       cin>>a>>b>>c;
       p=(a+b+abs(a-b))/2;
       d=(p+c+abs(p-c))/2;
       cout<<d<<" eh o maior"<<endl;

    return 0;
}
