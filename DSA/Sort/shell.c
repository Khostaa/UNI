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
// Shell sort function
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
int main()
{
    int a[size];
    int n;
    printf("\nEnter no. of elements: ");
    scanf("%d",&n);
    input(a,n);
    printf("\nBefore sorting: ");
    display(a,n);
    ShellSort(a,n);
    printf("\nAfter Sorting: ");
    display(a,n);
    return 0;
}