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
    //int value = i;
    while(j<=i)
    {
      cout << i ;
      i++;
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
