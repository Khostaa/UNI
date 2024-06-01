//selection sort
#include <stdio.h>
#include <stdlib.h>
#define size 100000
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
//SelectionSort function
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
int main()
{
    int a[size];
    int n;
    printf("\nEnter no. of elements: ");
    scanf("%d",&n);
    input(a,n);
    printf("\nBefore sorting: ");
    display(a,n);
    SelectionSort(a,n);
    printf("\nAfter Sorting: ");
    display(a,n);
    return 0;
}