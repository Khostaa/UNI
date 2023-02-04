//fibonacci term computation using memoisation
#include <stdio.h>
#define size 100
int arr[size];
int fib(int n)
{
    if(n<=1)  //returns fibo(0) = 1 &7 fibo(1) = 1
        return n;
    int first,second;

    if (arr[n-1]!=-1)
        first = arr[n-1];
    else
        first = fib(n-1);
    if(arr[n-2]!= -1)
        second = arr[n-2];
    else
        second = fib(n-2);
    
 return arr[n] = first + second;


}
int main()
{
    int n;
    printf("\nEnter no. of terms: ");
    scanf("%d",&n);
    for(int i = 0; i<n;i++)
    {
        arr[i]= -1;
    }
    printf("Sum of fibonacci terms up to %d term is %d.\n",n,fib(n));
    return 0;
}
