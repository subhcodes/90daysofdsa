#include <stdio.h>

void printarray(int a[],int n)
{
    for(int i = 0 ; i<n-1 ; i++)
    {
        printf("ARRAY ELEMENT : %d\n",a[i]);
    }
}

void insertionsort(int *a,int n)
{
   for(int i = 1 ; i<= n-1;i++)
   {
       int key,j;
       key = a[i];
       j = i-1;
       while(j>=0 && a[j] > key)
       {
          a[j+1] = a[j];    // i = i-1;
          j--;
       }
       a[j+1] = key;   // same as saying a[i] = key
   }
}


int main()
{
    int a[] = {12, 54, 32, 51, 78};
    int n = 5;
    printarray(a,n);
    insertionsort(a, n);
    printf("SORTED ARRAY : \n");
    printarray(a,n);

    return 0;
}