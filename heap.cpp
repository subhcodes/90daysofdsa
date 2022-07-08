#include <iostream>
#include <queue>
using namespace std;

class heap
{
public:
    int arr[100];
    int size;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val; // insert at end

        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
    }

    void deletefromheap()
    {
        if (size == 0)
        {
            cout << "nothing to delete " << endl;
        }
        // step1 putting first in last
        arr[1] = arr[size];
        // step2 deleting last
        size--;

        // step 3 current position of node
        int i = 1;
        while (i < size)
        {
            int leftindex = 2 * i;
            int rightindex = 2 * i + 1;

            if (leftindex < size && arr[i] < arr[leftindex]) // leftindex < size kyuki check krna kahi out of bound toh nhi gya
            {
                swap(arr[i], arr[leftindex]);
                i = leftindex;
            }
            else if (rightindex < size && arr[1] < arr[rightindex])
            {
                swap(arr[i], arr[rightindex]);
                i = rightindex;
            }
            else
            {
                return;
            }
        }
    }
};

// heapify algorithm
void heapify(int arr[], int n, int i) // n = size
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }

    if (right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }

    // update hua ya nhi
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest); ///// koi dosre element ko heapify kr skte hai kya ?
    }
}

void heapsort(int arr[], int n)
{
    int t = n;
    while (t > 1)
    {
        // swap
        swap(arr[t], arr[1]);
        t--;
        heapify(arr, t, 1);
    }
}

int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    cout << "before deletion : " << endl;
    h.print();
    h.deletefromheap();
    cout << "\nafter deletion : " << endl;
    h.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    for (int i = n / 2; i > 0; i--) /// kyuki n/2+1 toh leaf hai already heap
    {
        heapify(arr, n, i);
    }
    cout << "\nPRINTING THE ARRAY HEAPIFY : " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    // heapsort
    heapsort(arr, n);
    cout << "\nPRINTING THE HEAP SORT ARRAY : " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    // max heap
    priority_queue<int> pq;
    pq.push(3);
    pq.push(4);
    pq.push(5);
    pq.push(1);
    pq.push(2);
  
    cout << "\nTOP ELEMENT IN PRIORITY QUEUE (max) : " << pq.top() << endl;
    pq.pop();
    cout << "TOP ELEMENT AFTER POP IN PRIORITY QUEUE : " << pq.top() << endl;
    cout << "size : " << pq.size();

    // min heap
    priority_queue<int, vector<int>, greater<int>> minheap;
    minheap.push(3);
    minheap.push(4);
    minheap.push(5);
    minheap.push(1);
    minheap.push(2);

    cout << "\nTOP ELEMENT IN PRIORITY QUEUE (min) : " << minheap.top() << endl;
    minheap.pop();
    cout << "TOP ELEMENT AFTER POP IN PRIORITY QUEUE : " << minheap.top() << endl;
    cout << "size : " << minheap.size();

    return 0;
}