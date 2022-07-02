#include<iostream>
using namespace std;
// all the elements of standard c++ library are placed within namespace

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
      cout<<i;
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
