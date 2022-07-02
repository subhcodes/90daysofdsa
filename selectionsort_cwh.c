#include<stdio.h>


void printarray(int a[],int n)
{
    for(int i = 0 ; i<n-1 ; i++)
    {
        printf("ARRAY ELEMENT : %d\n",a[i]);
    }
}

void selectionsort(int *a,int n)
{
    for (int i = 0; i < n-1 ; i++)
    {
        int indexofmin = i;
        for(int j = i+1 ; j<n ; j++)
        {
            if(a[j] < a[indexofmin])
            {
               indexofmin = j;
            }
        }
        //Swapping the minimum to the forward
        int temp = a[i];
        a[i] = a[indexofmin];
        a[indexofmin] = temp;
    }
    
}

int main()
{   
    int a[] = {34,12,45,23,54,32};
    int n = 6;
    printarray(a,n);
    printf("SORTED ARRAY : \n");
    selectionsort(a,n);
    printarray(a,n);
    return 0;
}