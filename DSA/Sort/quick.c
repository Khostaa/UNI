//Quick sort
// #include <chrono> in c++ to display time
//infine looping is valid but infinite recursion causes segmentation fault
#include <stdio.h>
#include <stdlib.h>
#define size 1000
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
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int a[],int l,int r)
{
    int x = l;
    int y = r;
    int pivot = a[l];
    while(x<y)
    {
        while (a[x]<=pivot)
            x++;
        while (a[y]>pivot)
            y--;
        if (x<y)
        {
            swap(&a[x],&a[y]);
        }
        swap(&a[l],&a[y]);
        return y;
    }
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


int main()
{
    int a[size];
    int n;
    printf("\nEnter no. of elements: ");
    scanf("%d",&n);
    input(a,n);
    printf("\nBefore Sorting: ");
    display(a,n);
    printf("Sorting Started.\n");
    QuickSort(a,0,n-1); //starting address(Leftmost) of array is 0 and and end address(rightmost) is n-1
    printf("Finished\n");
    printf("\nAfter Sorting: ");
    display(a,n);
    return 0;
}