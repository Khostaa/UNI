
1.	WAP to find the power of any number using recursion.

#include <stdio.h>
int power(int,int);

int main()
{
  int num1,num2,res;
  printf("Enter a number:");
  scanf("%d",&num1);
  printf("Enter a number to be raised to the power:");
  scanf("%d",&num2);

  res=power(num1,num2);

  printf("%d raised to the power of %d is %d",num2,num1,res);

  return 0;
}
int power(int x,int y)
{
    if(y==1)
    {
        return x;
    }
    else
    {
        return x * power(x,y-1);
    }
}

2.	WAP to find the product of two given numbers using recursion.

 #include <stdio.h>
int product(int,int);
int main()
{
    int num1,num2,res;
    printf("Enter a number:");
    scanf("%d",&num1);
    printf("Enter another number:");
    scanf("%d",&num2);

    res= product(num1,num2);

    printf("product of %d and %d is %d",num1,num2,res);

    return 0;
}
int product(int a,int b)
{
    if(b==1)
        return a;
    else
        return a+product(a,b-1);
}

3.	WAP to find the sum of all natural numbers from 1 to n using recursion.

#include <stdio.h>

int sum(int);
int main()
{
    int num,res;
    printf("Enter a positive integer:");
    scanf("%d",&num);

    res=sum(num);

    printf("The sum of natural numbers for 1 to %d is %d",num,res);

    return 0;
}
int sum(int n)
{
    int s=0;

    if(n==1)
    {
        return 1;
    }

    else
    {
      s=s+n;
      n--;
      return s+sum(n);
    }
}

4.	WAP to find the reverse of any number using recursion.

#include <stdio.h>

int rev(int);
int main()
{
    int a,res;
    printf("Enter a number:");
    scanf("%d",&a);

    res=rev(a);

    printf("Reverse number: %d",res);

    return 0;
}

int rev(int n)
{
    int rem;
    static int s=0;
    if(n!=0)
    {
        rem=n%10;
        s=s*10+rem;
        rev(n/10);
    }
    return s;
}

5.	WAP to find the sum of digits of a given number using recursion.

#include <stdio.h>

int sum(int);
int main()
{
    int num,res;
    printf("Enter a number:");
    scanf("%d",&num);

    res=sum(num);

    printf("The sum of digits of %d is %d",num,res);
    return 0;
}
int sum(int n)
{
    int s;
    if (n==0)
        return 0;
    else
        s=n%10;
        n=n/10;
        return s + sum(n);

}

6.	WAP to find the factorial of any given number using recursion.

#include <stdio.h>

int fact(int);
int main()
{
    int n,res;
    printf("Enter a number:");
    scanf("%d",&n);

    res=fact(n);

    printf(" %d!=%d",n,res);
    return 0;
}
int fact(int x)
{
    if (x==0)
    {
        return 1;
    }


    return x*fact(x-1);
}

7.	WAP to generate nth Fibonacci term using recursion.

#include <stdio.h>

int fib(int);
int main()
{
    int n,i;
    printf("Enter no. of terms:");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
         printf("%d ",fib(i));
    }

    return 0;
}
int fib(int a)
{
    if(a==0)
        return 0;
    else if(a==1)
        return 1;
    else
        return fib(a-1)+fib(a-2);
}

