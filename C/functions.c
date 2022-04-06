
1.	WAP to find the square of any number using function.

#include <stdio.h>
int square(int);
int main()
{
    int n,res;
    printf("Enter a number:");
    scanf("%d",&n);
    res=square(n);
    printf("square of %d is %d",n,res);
    return 0;
}
int square(int a)
{
    int sq;
    sq=a*a;
    return sq;
}
2.	WAP to Swap two numbers using function.

#include <stdio.h>
int swap(int *,int *);
int main()
{
    int num1,num2,res;
    printf("Enter a number:");
    scanf("%d",&num1);
    printf("Enter another number:");
    scanf("%d",&num2);
    printf("Before swapping num1=%d,num2=%d\n",num1,num2);
    res=swap(&num1,&num2);
    printf("After swapping num1=%d,num2=%d",num1,num2);
    return 0;
}
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    
}
3.	WAP to check a given number is odd or even using function.

#include <stdio.h>
#include <conio.h>
int oddeven(int);

int main()
{
    int n,res;
    printf("Enter a number:");
    scanf("%d",&n);

    res=oddeven(n);

    if (res==1)
    {
        printf("ODD number");
    }
    else
    {
        printf("EVEN number");
    }
    return 0;
}
int oddeven(int a)
{
    if(a%2==0)
    {
         return 0;
    }
       return 1;
}


4.	WAP to read a +ve integer and find the sum of digits using function.

#include <stdio.h>

int total(int);
int main()
{
    int n,res;
    printf("Enter a +ve integer:");
    scanf("%d",&n);

    res = total(n);

    printf("The Sum of digits of %d is %d",n,res);
    return 0;
}
int total(int a)
{
 int sum=0,rem;
  while(a!=0)
  {
      rem=a%10;
      sum=sum+rem;
      a=a/10;
  }
   return sum;
}
5.	WAP to find the factorial of the given number using function.

#include <stdio.h>

int fact(int);
int main()
{
    int n,res;
    printf("Enter a number to find a factorial:");
    scanf("%d",&n);

    res=fact(n);
    printf("%d!=%d",n,res);
    return 0;
}
int fact(int a)
{
    int t=1,y;
    for(int y=1;y<=a;y++)
    {
        t=t*y;
    }
    return t;
}
6.	WAP to convert given lowercase letter to uppercase using function.

#include <stdio.h>

char uppercase(char);
int main()
{
    char c,res;
    printf("Enter a lowercase character:");
    scanf("%c",&c);

    res=uppercase(c);

    printf("Uppercase character of %c is %c",c,res);
    return 0;
}
char uppercase(char x)
{
    if(x>=97 && x<=122)
    {
        x=x-32;
    }
    return x;
}
7.	WAP to reverse a given number using function.

#include <stdio.h>

int reverse(int);
int main()
{
    int n,res;
    printf("Enter a number to reverse:");
    scanf("%d",&n);

    res=reverse(n);

    printf("The reverse of %d is %d",n,res);
    return 0;
}
int reverse(int a)
{
    int r=0;
    while(a!=0)
    {
        r=r*10;
        r=r+a%10;
        a=a/10;
    }
    return r;
}
8.	WAP to find the HCF of given two numbers using function.

#include <stdio.h>
int HCF(int,int);
int main()
{
    int num1,num2,res;
    printf("Enter a number:");
    scanf("%d",&num1);
    printf("Enter another number:");
    scanf("%d",&num2);

    res= HCF(num1,num2);

    printf("The HCF of %d and %d is %d",num1,num2,res);

}
int HCF(int a,int b)
{
    int i,m;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0 && b%i==0)
        {
          m=i;
        }

    }
    return m;
}
9.	WAP to find the LCM of given two numbers using function.

#include <stdio.h>

int LCM(int,int);
int main()
{
    int num1,num2,res;
    printf("Enter a number:");
    scanf("%d",&num1);
    printf("Enter another number:");
    scanf("%d",&num2);

    res=LCM(num1,num2);

    printf("LCM of %d and %d is %d",num1,num2,res);
    return 0;
}
int LCM(int a,int b)
{
    int m,i,n;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0 && b%i==0)
        {
            m=i;
        }
    }
    n=(a*b)/m;

    return n;
}
10.	 /*Wap to find the value of one number raised to the power of another using function.*/

#include<stdio.h>
int raise(int,int);
int main()
{
    int x,y,res;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("Enter a number to be raised to the power:");
    scanf("%d",&y);

    res=raise(x,y);

    printf("value of %d ^ %d is %d",x,y, res);
    return 0;
}
int raise(int a,int b)
{
    int t,z;
    z=a;

    for(t=1;t<b;t++)
    {
        z=z*a;
    }
    return z;

}

11.	 /* WAP to convert decimal number into binary number using function.*/

#include <stdio.h>
int dec2bin(int);
int main()
{
    int n,res;
    printf("Enter a decimal number:");
    scanf("%d",&n);

    res=dec2bin(n);

    printf("the binary form of %d is %d",n,res);
    return 0;
}
int dec2bin(int a)
{
  int place=1,bin=0,remainder;
  while(a>0)
  {
      remainder=a%2;
      bin=bin+remainder*place;
      place=place*10;
      a=a/2 ;
  }
  return bin;
}

12.	 /*WAP to check whether a number is prime or not using the function.*/

#include <stdio.h>
int prime(int);
int main()
{
    int n,res;
    printf("Enter a positive integer:");
    scanf("%d",&n);

    res=prime(n);

    if(res==0)
    {
        printf("%d is a prime number.",n);
    }

    else
    {
        printf("%d is not a prime number.",n);
    }
    return 0;
}
int prime(int a)
{
    int i;
    for(i=2;i<=a/2;i++)
    {
        if(a%i!=0)
        {
            continue;
        }
        else
        {
         return 1;
        }
    }
    return 0;
}
