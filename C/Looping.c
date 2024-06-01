
1.	WAP to print numbers from 25 to 150.
#include <stdio.h>

int main()
{
    int i=25;
    do{
        printf("%d\n",i);
    i++;
    }while(i<=150);

    return 0;
}

2.	WAP to calculate the sum of numbers from 1 to 100.
   #include <stdio.h>
   #include <math.h>

   int main()
   {
      int i, Sum=0;
      for(int i=1;i<=100;i++)
      {
        Sum=Sum+i;
      }
       printf("The sum of numbers from 0 to 100 is %d", Sum);

    return 0;
 }

3.	WAP to calculate sum of cube of numbers from 1 to 100.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,Sum=0;
    for(i=1;i<=100;i++)
    {
        Sum = i*i*i + Sum;
    }
    printf("The Sum of cube of numbers from 1 to 100 is %d",Sum);
    return 0;
}

4.	WAP to print odd numbers from 200 to 250.
#include <stdio.h>
#include <math.h>

int main()
{
    int i;
    for(i=200;i<250;)
    {
        if(i%2==0)
        {
            i++;
            printf("%d\n",i);
        }
        else
        {
           printf("%d\n",i);
        }
        i++;
    }
return 0;

}

5.	WAP to read a number and check whether its prime no. or not.
#include <stdio.h>
int main() {
  int n, i, flag = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  for (i = 2; i <= n / 2; i++) {
    // condition for non-prime
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  if (n == 1) {
    printf("1 is neither prime nor composite.");
  }
  else {
    if (flag == 0)
      printf("%d is a prime number.", n);
    else
      printf("%d is not a prime number.", n);
  }

  return 0;
}

6.	WAP to print all the prime numbers between 2 to 500.
#include<stdio.h>

int main()
{
    int i,j,flag;
    for(i=2;i<=500;i++)
    {
        flag=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag = 1;
                break;
            }
        }
           if (flag ==0)
            {
            printf(" %d ",i);
            }
     }

    return 0;
}

7.	WAP to display all three Armstrong numbers between 1 to 500.
#include <stdio.h>
#include <conio.h>

int main()
{
    int n, d1, d2,d3,sum=0;
    int i;
    for (i=100;i<=500;i++)
    {
        n=i;
        d1=n%10;
        n=n/10;
        d2=n%10;
        d3=n/10;
        sum=(d1*d1*d1)+(d2*d2*d2)+(d3*d3*d3);
        if(sum==i){
            printf("%d\n",i);}
    }
    return 0;
}

8.	WAP to display Fibonacci series upto n terms (0 1 1 2 3 5 8 13 …..).
#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b,sum=0,n;
    a=0; b=1;
    printf("Enter the nth value:");
    scanf("%d",&n);
    printf("fibonacci series:");
    while(sum<=n)
        {
        printf(" %d ",sum);
         a=b;
         b=sum;
         sum=a+b;
        }
        return 0;


}

9.	WAP to display multiplication table of 5 from 1 to 10.
#include <stdio.h>
#include <stdlib.h>

int main()
{
         int i,mul;
         for(i=1;i<=10;i++)
        {
            mul=5*i;
        printf("5X%d=%d\n",i,mul);
        }
    return 0;
}

10.	 WAP to display all the characters and ASCII values whose ASCII ranges from 1 to 255.
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int count;
  for (count=1;count<=255; count++)
  {
      printf("The ASCII Value of %c is %d \n",count,count);
  }
  return 0;
}

11.	 WAP to read n different numbers and display the sum.
 #include <stdio.h>

int main()
{
  int n, sum = 0, c, value;

  printf("Enter the  number of integers you want to add:\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 1; c <= n; c++)
  {
    scanf("%d", &value);
    sum = sum + value;
  }

  printf("Sum of the integers = %d\n", sum);

  return 0;
}

12.	WAP to read a number and calculate its factorial.
#include <stdio.h>

int main()
{
    int i,n,f=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=i*f;
    }
      printf("%d!=%d",n,f);


    return 0;
}

13.	 Two numbers are entered through the keyboard. WAP to find the value of one number raised to the power of another.
 #include <stdio.h>
#include <conio.h>

int main()
{
    int a,b,c,res=1;
    printf("Enter a number:");
    scanf("%d",&a);
    printf ("Enter a number to be raised to the power:");
    scanf("%d",&b);
    c=b;
    while(b!=0)
    {
        res=a*res;
        b=b-1;
    }
    printf("%d raised to the power %d : %d",a,c,res);
    return 0;
}

14.	 WAP to find the sum of series; 1+ 2/22+3/33+……+n/nn.
#include<stdio.h>
#include <math.h>
int main()
{
    int a,num;
    float sum = 0.0;

    printf("Enter the number upto which sum is required:");
    scanf("%d",&a);

    for(num=1;num <= a;num++)
    {
        sum = sum + (num / pow(num,num));

    }

    printf("Sum of series is %f\n", sum);

    return 0;
}
15.	 WAP to read the values from the user and find the sum of the given numbers until the user enters 0 and also find its average.
   #include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,i;
	b=0;
	c=-1;
	do
	{
	    printf("Enter a number :");
	   scanf("%d",&i);
	   b=b+i;
	  c=c+1;
	} while (i!=0);
	a=b/c;
	printf("The total sum of given numbers is %d\n",b);
	printf("Average of given numbers is  %d",a);
	return 0;

}

16.	WAP to read a number and reverse it (For example 12345 to 54321).

                       #include <stdio.h>
                   int main()
                    {
                   int n, r = 0;

                printf("Enter a number to reverse:");
                scanf("%d", &n);

               while (n != 0)
              {
                r = r * 10;
                r = r + n%10;
                n = n/10;
             }

             printf("Reverse of the number = %d\n", r);

             return 0;
              }

17.	WAP to read a number and find its HCF and LCM.
#include <stdio.h>
int main() {
  int a, b, x, y, t, Hcf, Lcm;

  printf("Enter two integers\n");
  scanf("%d%d", &x, &y);

  a = x;
  b = y;

  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }

  Hcf = a;
  Lcm = (x*y)/Hcf;

  printf("Highest common factor of %d and %d = %d\n", x, y, Hcf);
  printf("Least common multiple of %d and %d = %d\n", x, y, Lcm);

  return 0;
}


18.	  WAP to check whether the given number is palindrome or not.
                         #include <stdio.h>

                         int main(){
                         int num,r,sum=0,t;

                         printf("Enter a number: ");
                         scanf("%d",&num);

                          for(t=num;num!=0;num=num/10){
                          r=num % 10;
                          sum=sum*10+r;
                          }
                          if(t==sum)
                          printf("%d is a palindrome number.\n",t);
                          else
                          printf("%d is not a palindrome number.\n",t);
                          return 0;

                        }

19.	 WAP to find  the sum of the series 1+11+111+1111+11111+…n.
                          #include <stdio.h>

                           int main()
                            {
                            int i,n, sum=0;
                            printf("Enter the nth value:");
                            scanf("%d",&n);
                            printf("series:");
                            for(i=1;i<=n;)
                            {
                            printf(" %d ",i);
                            sum=sum+i;
                             i=1+i*10;
                             }

                             printf("\nSum of series is %d",sum);

                      return 0;
                    }



20.	 WAP to read a positive integer and read and print its binary equivalent.

#include <stdio.h>

int main()
{
    int number, n, remainder, binary = 0, place = 1;

    printf("Enter a number :");
    scanf("%d", &number);

    n = number;

    while (n > 0)
    {
        remainder = n % 2;
        binary += remainder * place;
        place *= 10;
        n /= 2;
    }

    printf("Binary equivalent of %d is %d", number, binary);

    return 0;
}

21.	WAP to  display n term of the square natural natural numbers and their sum. (1,4 ,9,16,…..)

#include <stdio.h>

int main()
{
    int i,n,s,sum=0;
    printf("Enter the nth term:");
    scanf("%d",&n);
    printf("Series:");
    for (i=1;i<=n;i++)
    {

        s=i*i;
         printf(" %d ",s);
        sum=sum+s;
    }
    printf("\nThe Sum of series is %d",sum);
    return 0;
}

