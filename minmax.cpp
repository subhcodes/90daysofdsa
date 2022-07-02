#include<iostream>
using namespace std;

struct Pair
{
  int min;
  int max;
};

Pair getminmax(int arr[],int n)
{
  struct Pair minmax;
  int i;

  // only one element
  if(n == 1)
  {
    minmax.min = arr[0];
    minmax.max = arr[0];
    return minmax;
  }

  // Comparing the starting two
  if(arr[0] > arr[1])
  {
    minmax.min = arr[1];
    minmax.max = arr[0];
  }
  else
  {
    minmax.min = arr[0];
    minmax.max = arr[1];
  }

  for(i = 2 ; i<n; i++)
  {
    if(arr[i] > minmax.max)
    {
      minmax.max = arr[i];
    }
    else if(arr[i] < minmax.min)
    {
      minmax.min = arr[i];
    }
  }
  return minmax;
}

int main()
{
  int arr[5] = {12,3,24,45,2};
  struct Pair minmax = getminmax(arr,5);
  cout<<"MAX : "<<minmax.max<<endl;
  cout<<"MIN : "<<minmax.min<<endl;
  return 0;
}
