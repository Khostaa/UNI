//fibonacci term computation using memoisation
#include <stdio.h>
#define size 100
int arr[size];
int fibo(int n)
{
    if(n==0 || n==1) 
        return n;
    int first,second;

    if (arr[n-1]!=-1)
        first = arr[n-1];
    else
        first = fibo(n-1);
    if(arr[n-2]!= -1)
        second = arr[n-2];
    else
        second = fibo(n-2);
 return arr[n] = first + second;
}
int main()
{
    int n;
    printf("\nEnter n: ");
    scanf("%d",&n);
    for(int i = 0; i<=n;i++)
    {
        arr[i]= -1;
    }
    if (n < 1) printf("Please Enter Valid number!");
    else 
    {
        printf("%dth term of fibonacci series is %d.\n",n,fibo(n-1));
    }
    
    return 0;
}
