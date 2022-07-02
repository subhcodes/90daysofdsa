#include<iostream>
using namespace std;

int main()
{
   int i,j,n;
   cin>>n;
   i = 1;
   while(i<=n)
   {
     j = 1;
     while(j<=i)
     {
       cout<<"*";
       j++;
     }
     cout<<endl;4

     i++;
   }
  return 0;
}
