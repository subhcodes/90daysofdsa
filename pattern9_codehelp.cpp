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
    char start = 'A';
    while(j<=n)
    {
      cout << start ;
      ++start;
      //cout<<"start after print : "<<" "<<start<<endl;
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
