#include<iostream>
using namespace std;

int main()
{
  int i,n,j;
  cin>>n;
  i = 1;
  while(i<=n)
  {
    j = 1;
    while(j<=n)
    {
      cout<<n-j+1<<" ";
      j++;
  }
    cout<<endl;
    i++;
  }
  return 0;
}
