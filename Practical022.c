//Write a program to interchange the largest 
//and the smallest number in an array.
#include <stdio.h>
#include <conio.h>
void read_array(int my_array[], int);
void display_array(int my_array[], int);
void interchange(int arr[], int);
int fnd_biggest_pos(int my_array[10], int n);
int fnd_smallest_pos(int my_array[10], int n);
int main()
{
int arr[1000], n;
printf("\n Enter the size of the array : ");
scanf("%d", &n);
read_array(arr, n);
interchange(arr, n);
printf("\n The new array is: ");
display_array(arr,n);
return 0;
}
void read_array(int my_array[10], int n)
{
int i;
for(i=0;i<n;i++)
{
 printf("\n arr[%d] = ", i);
 scanf("%d", &my_array[i]);
}
}
void display_array(int my_array[10], int n)
{
int i;
for(i=0;i<n;i++)
 printf("\n arr[%d] = %d", i, my_array[i]);
}
void interchange(int my_array[10], int n)
{
int temp, big_pos, small_pos;
big_pos = fnd_biggest_pos(my_array, n);
small_pos = fnd_smallest_pos(my_array,n);
temp = my_array[big_pos];
my_array[big_pos] = my_array[small_pos];
my_array[small_pos] = temp;
}

int fnd_biggest_pos(int my_array[10], int n)
{
 	int i, large = my_array[0], pos=0;
	for(i=1;i<n;i++)
	{
 	 if (my_array[i] > large)
 	 {
 	    large = my_array[i];
  		pos=i;
     }
   }
   return pos;
}



int fnd_smallest_pos (int my_array[10], int n)
{
int i, small = my_array[0], pos=0;
for(i=1;i<n;i++)
{
 if (my_array[i] < small)
 {
 small = my_array[i];
 pos=i;
 }
}
return pos;
}
