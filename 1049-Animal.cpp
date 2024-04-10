#include<iostream>
#include<string>
using namespace std;
int main()
{
 string x,y,z;
 string a,b,c,d,e,f,g,h,m,n;
 cin>>x>>y>>z;
 a="ave";
 b="mamifero";
 c="inseto";
 d="anelideo";
 e="carnivoro";
 f="onivoro";
 g="herbivoro";
 h="hematofago";
 m="vertebrado";
 n="invertebrado";
 if(x==m&&y==a&&z==e)
 {
     cout<<"aguia"<<endl;
 }
 else if(x==m&&y==a&&z==f)
 {
     cout<<"pomba"<<endl;
 }
 else if(x==m&&y==b&&z==f)
 {
     cout<<"homem"<<endl;
 }
 else if(x==m&&y==b&&z==g)
 {
     cout<<"vaca"<<endl;
 }
  else if(x==n&&y==c&&z==h)
 {
     cout<<"pulga"<<endl;
 }
  else if(x==n&&y==c&&z==g)
 {
     cout<<"lagarta"<<endl;
 }
  else if(x==n&&y==d&&z==h)
 {
     cout<<"sanguessuga"<<endl;
 }
 else
 {
     cout<<"minhoca"<<endl;
 }
}

