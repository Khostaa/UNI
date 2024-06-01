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
//Insertion Sort Function
void InsertionSort(int a[],int n)
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

int main()
{
    int a[size];
    int n;
    printf("\nEnter no. of elements: ");
    scanf("%d",&n);
    input(a,n);
    printf("\nBefore sorting: ");
    display(a,n);
    InsertionSort(a,n);
    printf("\nAfter Sorting: ");
    display(a,n);
    return 0;
}