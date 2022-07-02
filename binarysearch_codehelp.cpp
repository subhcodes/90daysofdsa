#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int key)
{
  int start = 0;
  int end = n - 1;
  int mid = start + (end - start)/2;
  while(start <= end)
  {
    if(arr[mid] == key)
    {
      return mid;
    }
    if(arr[mid] > key)
    {
      end = mid-1;    //greater wala part
    }
    else
    {
      start = mid+1;  // chota wala part
    }
      mid = start + (end - start)/2;  // for better optimization
  }
  return -1;
}
int main()
{
  int even[6] = {2,4,6,8,10,12};
  int index = binarysearch(even,6,8);
  cout<<"Found at "<<index;
  return 0;
}
