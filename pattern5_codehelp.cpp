#include<iostream>
using namespace std;

int main()
{
   int i,j,n,count = 1;
   cin>>n;
   i = 1;
   while(i<=n)
   {
     j = 1;
     while(j<=i)
     {
       cout<<count<<" ";
       count++;
       j++;
     }
     cout<<endl;
     i++;
   }
   return 0;
}
