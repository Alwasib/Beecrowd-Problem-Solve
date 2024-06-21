#include<iostream>
using namespace std;
int main()
{
    int i,x[11],c=0;
    for(i=1;i<=10;i++)
    {
        cin>>x[i];
        if(x[i]>0)
        {

            cout<<"X["<<c<<"] = "<<x[i]<<endl;
            c++;
        }
        else
        {

            cout<<"X["<<c<<"] = 1"<<endl;
             c++;
        }
    }

}

