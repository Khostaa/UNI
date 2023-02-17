#include <stdio.h>
#include <stdlib.h>
#define size 100
//input function
void input (int a[], int n)
{
    for (int i=0;i<n;i++)
    {
        a[i] = rand()%100; //modulo defines range of randomly generated integers
    }
            
}
// display function
void display(int a[],int n)
{
    for(int i = 0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
//swap function
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
//Heapify
void heapify(int arr[], int n, int i) {
    // Find largest among root, left child and right child
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
  
    if (left < n && arr[left] > arr[largest])
      largest = left;
  
    if (right < n && arr[right] > arr[largest])
      largest = right;
  
    // Swap and continue heapifying if root is not largest
    if (largest != i) {
      swap(&arr[i], &arr[largest]);
      heapify(arr, n, largest);
    }
  }
  
  // Main function to do heap sort
  void HeapSort(int arr[], int n) {
    // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);
  
    // Heap sort
    for (int i = n - 1; i >= 0; i--) {
      swap(&arr[0], &arr[i]);
  
      // Heapify root element to get highest element at root again
      heapify(arr, i, 0);
    }
  }

int main()
{
    int a[size];
    int n;
    printf("\nEnter no. of elements: ");
    scanf("%d",&n);
    input(a,n);
    printf("\nBefore sorting: ");
    display(a,n);
    HeapSort(a,n);
    printf("\nAfter Sorting: ");
    display(a,n);
    return 0;
}