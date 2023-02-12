#include <stdio.h>
#include <stdlib.h>
#define size 100
//input function
void input (int a[], int n)
{
    for (int i=0;i<n;i++)
    {
        a[i] = rand();
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


int main()
{
    int a[size];
    int n;
    printf("\nEnter no. of elements: ");
    scanf("%d",&n);
    input(a,n);
    printf("\nBefore sorting: ");
    display(a,n);
    BubbleSort(a,n);
    printf("\nAfter Sorting: ");
    display(a,n);
    return 0;
}