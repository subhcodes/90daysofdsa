#include<iostream>
using namespace std;
int main()
{
   int i,j;
   int n;
   cin>>n;
   for(i=1;i<=n;i++)
   {
     for(j=i;j<=n;j++)
     {
       if(i==1 || j==i || j==n)
     {
        cout<<"*";
   }
     else
     {
       cout<<" ";
     }
   }cout<<"\n";
}
return 0;
}
