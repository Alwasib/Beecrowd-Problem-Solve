#include<bits/stdc++.h>
using namespace std;
int main()
{
    float N1,N2,N3,N4,N5;
    float m,n,s,p,media,d;
    cin>>N1>>N2>>N3>>N4;
    m=N1*2;
    n=N2*3;
    s=N3*4;
    p=N4*1;
    media=(m+n+s+p)/10;
    cout<<fixed<<setprecision(1);
    cout<<"Media: "<<media<<endl;
    if(media>=7.0)
    {
        cout<<"Aluno aprovado."<<endl;
    }
    else if(media<5.0)
    {
        cout<<"Aluno reprovado."<<endl;
    }
    else if(media>=5.0&&media<=6.9)
    {
        cout<<"Aluno em exame."<<endl;
      cin>>N5;
    cout<<"Nota do exame: "<<N5<<endl;
     d=(media+N5)/2;
     if(d>=5.0)
     {
         cout<<"Aluno aprovado."<<endl;
     }
     else if(d<=4.9)
     {
         cout<<"Aluno reprovado."<<endl;
     }
     cout<<fixed<<setprecision(1);
     cout<<"Media final: "<<d<<endl;
    }
     return 0;
}

