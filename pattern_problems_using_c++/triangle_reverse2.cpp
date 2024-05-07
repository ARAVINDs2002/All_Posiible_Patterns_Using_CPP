#include<iostream>
using namespace std;
int main()
{
int i;
for(i=1;i<=5;i++)
   {

   for(int space=5;space>=i;space--)
   {
       cout<<" ";
   }
   for(int j=1;j<=(2*i)-1;j++)
   {
    cout<<"*";
   }
      cout<<endl;

   }

}



