#include<iostream>
using namespace std;
int main()
{
   for(int a=1;a<=6;a++)
    {
        for(int b=6;b>a;b--)
        {
            cout<<" ";
        }
        for(int k=1;k<=(2*a-1);k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }



    for(int i=5;i>=1;i--)
    {
        for(int space=6;space>i;space--)
        {
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

