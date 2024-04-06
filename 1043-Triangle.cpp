#include<bits/stdc++.h>
using namespace std;
int main()
{
    float A,B,C;
    cin>>A>>B>>C;

    if((A+B)>C&&(A+C)>B&&(B+C)>A)
    {
        cout<<fixed<<setprecision(1);
        cout<<"Perimetro = "<<A+B+C<<endl;
    }
    else
    {
        cout<<fixed<<setprecision(1);
        cout<<"Area = "<<((A+B)/2)*C<<endl;
    }

}
