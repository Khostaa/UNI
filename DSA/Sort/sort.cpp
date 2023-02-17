#include <iostream>
#include <cmath>
#include <chrono>
#define size 100

using namespace std;


//function for calculating elapsed time

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
        cout <<a[i]<<" " ;
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


int main()
{
    int a[size];
    int n,choice;
    cout << "\nEnter no. of elements: ";
    cin >> n;
    cout << "\n1.Bubble Sort\n2.Selection Sort\n3.Quick Sort\n4.Heap Sort\n5.Insertion Sort\n6.Shell Sort\n7.Merge Sort.";
    cout << "\nChoice?" <<endl << ">";
    cin >> choice;
    switch (choice)
    {
    case 1:
        input(a,n);
        cout << "\nBefore sorting: ";
        display(a,n);
        auto t1 = chrono :: high_resolution_clock::now();
        /*run some code*/
        BubbleSort(a,n);
        //get the end time 
        auto t2 = chrono ::high_resolution_clock::now();
        //find the difference
        auto duration = chrono :: duration_cast<chrono :: nanoseconds>(t2 - t1).count();
        //output
        cout<<"Elapsed time(s):"<<duration<<endl;
        cout << "After Sorting: ";
        display(a,n);
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    
    default:
        printf("Enter valid numbers only.\n");
        break;
    }

    return 0;
}