#include <iostream>
#include <cmath>
#include <ctime>
#include <ratio>
#include <chrono>
#define size 1000
using namespace std;
using namespace std:: chrono;

//input function
void input (int a[], int n)
{
    for (int i=0;i<n;i++)
    {
        a[i] = rand()%1000; //modulo defines range of randomly generated integers
    }           
}
// display function
void display(int a[],int n)
{
    for(int i = 0;i<n;i++)
    {
        cout <<a[i]<<" " ;
    }
    cout << endl;
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
// void elapsed(auto t1,auto t2)
// {
//    double duration = std :: chrono::duration_cast<std :: chrono :: nanoseconds>(t2 - t1).count(); 
//    cout<<"Elapsed time(s):"<<duration/pow(10,9)<<endl;
// }

int main()
{
    int a[size];
    int n,choice;
    time_t t;
    srand((unsigned) time(&t));
    do
    {
        cout << "\n1.Bubble Sort\t2.Selection Sort\t3.Quick Sort\t4.Heap Sort\n5.Insertion Sort\t6.Shell Sort\t7.Merge Sort.\t8.Exit\n";
        cout << "Choice?" <<endl << ">";
        cin >> choice;
        cout << "Enter no. of elements: ";
        cin >> n;
        input(a,n);
        cout << "\nBefore sorting: ";
        display(a,n);
        switch(choice)
        {
            case 1:
                high_resolution_clock::time_point t1 = high_resolution_clock ::now();
                BubbleSort(a,n);
                high_resolution_clock::time_point t2 = high_resolution_clock::now();
                auto duration1 = duration_cast<microseconds>(t2-t1).count();
                cout<<"Elapsed time: "<<duration1 << " microseconds";
                cout << "After Sorting: ";
                display(a,n);
                break;
            case 2:
                high_resolution_clock::time_point t3 = high_resolution_clock ::now();
                SelectionSort(a,n);
                high_resolution_clock::time_point t4 = high_resolution_clock::now();
                auto duration2 = duration_cast<microseconds>(t4-t3).count();
                cout<<"Elapsed time: "<<duration2 << " microseconds";
                cout << "After Sorting: ";
                display(a,n);
                break;
            case 3:
                high_resolution_clock::time_point t5 = high_resolution_clock ::now();
                BubbleSort(a,n);
                high_resolution_clock::time_point t6 = high_resolution_clock::now();
                auto duration3 = duration_cast<microseconds>(t6-t5).count();
                cout<<"Elapsed time: "<<duration3 << " microseconds";
                cout << "After Sorting: ";
                display(a,n);
                break;
            case 4:
                high_resolution_clock::time_point t7 = high_resolution_clock ::now();
                QuickSort(a,0,n-1);
                high_resolution_clock::time_point t8 = high_resolution_clock::now();
                auto duration4 = duration_cast<microseconds>(t8-t7).count();
                cout<<"Elapsed time: "<<duration4 << " microseconds";
                cout << "After Sorting: ";
                display(a,n);
                break;
            case 5:
                high_resolution_clock::time_point t9 = high_resolution_clock ::now();
                HeapSort(a,n);
                high_resolution_clock::time_point t10 = high_resolution_clock::now();
                auto duration5 = duration_cast<microseconds>(t10-t9).count();
                cout<<"Elapsed time: "<<duration5 << " microseconds";
                cout << "After Sorting: ";
                display(a,n);
                break;
            case 6:
                high_resolution_clock::time_point t11 = high_resolution_clock ::now();
                ShellSort(a,n);
                high_resolution_clock::time_point t12 = high_resolution_clock::now();
                auto duration6 = duration_cast<microseconds>(t12-t11).count();
                cout<<"Elapsed time: "<<duration6 << " microseconds";
                cout << "After Sorting: ";
                display(a,n);
                break;
            case 7:
                high_resolution_clock::time_point t13 = high_resolution_clock ::now();
                MergeSort(a,0,n-1);
                high_resolution_clock::time_point t14 = high_resolution_clock::now();
                auto duration7 = duration_cast<microseconds>(t14-t13).count();
                cout<<"Elapsed time: "<<duration7 << " microseconds";
                cout << "After Sorting: ";
                display(a,n);
            case 8:
                cout <<"Bye Bye!\n";
                break;
            default:
                printf("Enter valid numbers only.\n");
                break;
        }
    }while(choice!=8);

    return 0;
}