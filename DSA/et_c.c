// Calculating elapsed time in C
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 1000000

void input (int a[], int n)
{
    for (int i=0;i<n;i++)
    {
        a[i] = rand(); //modulo defines range of randomly generated integers
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
//Bubble Sort function
void BubbleSort(int a[],int n)
{
    for(int i = 0;i<n-1;i++)
    {
        for(int j = 0; j<n-i-1;j++)
        {
            if (a[j] > a[j+1])
            {
                swap(&a[j],&a[j+1]);
            }
        }
    }
}
//Selection sort
void SelectionSort(int a[],int n)
{
    int i,p,least;
    for(i =0;i<n;i++)
    {
        p = i;
        least = a[i];
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<least)
            {
                least = a[j];
                p = j;
            }
        }
        if (i != p)
        {
            swap(&a[i],&a[p]);
        }
    }
    
}
//Quick Sort
int partition(int a[],int l,int r)
{
    int x = a[r];
        int i = l - 1;
        for(int j=l;j<=r-1;j++)
        {
            if (a[j]<=x)
                {
                    i = i + 1;
                    swap(&a[i],&a[j]);
                }
        }
        swap(&a[i+1],&a[r]);
        return i+1;
}
void QuickSort(int a[],int l,int r)
{
    if(l<r)
    {
        int p = partition(a,l,r);
        QuickSort(a,l,p-1);
        QuickSort(a,p+1,r);
    }
}
//Heapify
void heapify(int arr[], int n, int i) 
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
  
    if (left < n && arr[left] > arr[largest])
      largest = left;
  
    if (right < n && arr[right] > arr[largest])
      largest = right;
    if (largest != i) {
      swap(&arr[i], &arr[largest]);
      heapify(arr, n, largest);
    }
  }
  

  void HeapSort(int arr[], int n) 
  {
    for (int i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);
    //Heap Sort
    for (int i = n - 1; i >= 0; i--) 
    {
      swap(&arr[0], &arr[i]);
      heapify(arr, i, 0);
    }
  }

//Insertion Sort
int InsertionSort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int j = i-1;
        int temp = a[i];
        while (j>=0 && temp <a[j])
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
}
//Shell Sort Function
void ShellSort(int array[], int n) 
{
  for (int interval = n / 2; interval > 0; interval /= 2) {
    for (int i = interval; i < n; i += 1) {
      int temp = array[i];
      int j;
      for (j = i; j >= interval && array[j - interval] > temp; j -= interval) {
        array[j] = array[j - interval];
      }
      array[j] = temp;
    }
  }
}
//Merge Sort
void merge(int arr[], int p, int q, int r) 
{
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];
  int i, j, k;
  i = 0;
  j = 0;
  k = p;
  while (i < n1 && j < n2) 
  {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}
void MergeSort(int arr[], int l, int r) {
  if (l < r) 
  {
    int m = l + (r - l) / 2;
    MergeSort(arr, l, m);
    MergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
  }
}
void elapsed(long tick1, long tick2)
{
  long elapsed = tick2 - tick1;
  printf("Clock ticks used: %d\n",elapsed);
  double elapsed_time = (double)elapsed/CLOCKS_PER_SEC;
  printf("Elasped time: %lf seconds\n",elapsed_time);
}

int main()
{
    int a[size];
    int n,choice;
    printf("\n1.Bubble Sort\n2.Selection Sort\n3.Quick Sort\n4.Heap Sort\n5.Insertion Sort\n6.Shell Sort\n7.Merge Sort.\n8.Exit\n");
    printf("Choice?\n");
    printf(">");
    scanf("%d",&choice);
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    input(a,n);
    printf("\nBefore sorting: " );
    // display(a,n);
    long tick1 = clock();
    switch (choice)
     {
        case 1: 
            BubbleSort(a,n);
            long tick2 = clock();
            printf("After Sorting: ");
            // display(a,n);
            elapsed(tick1,tick2);
            break;
        case 2:
            SelectionSort(a,n);
            long tick3 = clock();
            printf("After Sorting: ");
            // display(a,n);
            elapsed(tick1,tick3);
            break;
        case 3:
        // as starting index of array is 0 and final is n-1
            QuickSort(a,0,n-1);
            long tick4 = clock();
            printf("After Sorting: ");
            // display(a,n);
            elapsed(tick1,tick4);
            break;
        case 4:
            HeapSort(a,n);
            long tick5 = clock();
            printf("After Sorting: ");
            // display(a,n);
            elapsed(tick1,tick5);
            break;
        case 5:
            InsertionSort(a,n);
            long tick6 = clock();
            printf("After Sorting: ");
            // display(a,n);
            elapsed(tick1,tick6);
            break;
        case 6:
            ShellSort(a,n);
            long tick7 = clock();
            printf("After Sorting: ");
            // display(a,n);
            elapsed(tick1,tick7);
        case 7:
            MergeSort(a,0,n-1);
            long tick8 = clock();
            printf("After Sorting: ");
            // display(a,n);
            elapsed(tick1,tick8);
            break;
        case 8:
            printf("Bye Bye!\n");
            exit(0);
        default:
            printf("Enter valid numbers only.\n");
            break;
     }
     
    // long tick2 = clock();
    // printf("After Sorting: ");
    // display(a,n);
    // long elapsed = tick2 - tick1;
    // printf("Clock ticks used: %d\n",elapsed);
    // double elapsed_time = (double)elapsed/CLOCKS_PER_SEC;
    // printf("Elasped time: %lf seconds\n",elapsed_time);
    return 0;
}
