1. WAP to read 3 numbers and Find the middle number.

#include <stdio.h>
int main()
{
 int a,b,c;
 printf("Enter First number:");
 scanf("%d",&a);
 printf("\nEnter Second number:");
 scanf("%d",&b);
 printf("\nEnter Third number: ");
 scanf("%d",&c);
 if(a>b && a<c || a>c && a<b)
{
 printf("The middle number is %d",a);
}
else if(b>a && b<c || b<a && b>c)
{
 printf("The middle number is %d",b);
}
else if(a>c && c>b || c>a && c<b)
{
  printf("The middle number is %d",c);
}
else
 printf("Error");
return 0;
}

2. WAP to read an alphabet and convert it into Uppercase if it is lowercase and vice-versa.

#include <stdio.h>
int main()
{
 char a;
 printf("Enter an Alphabet:");
 scanf("%c",&a);
 if(a>=65 && a<=90)
 {
  a=a+32;
  printf("The lowercase alphabet is %c",a);
}
 else if(a>=97 && a<=122)
 {
  a=a-32;
  printf("The Upppercase alphabet is %c",a);
 }
 else
 {
  printf("Please enter the valid Alphabet");
 } 
 return 0;
}

3. WAP to read a year and check whether it is leap year or not.
(note:- a year is leap year if is divisible by 4 or 4100 and 400)
#include <stdio.h>
int main()
{
 int a,b;
 printf("Enter a year:");
 scanf("%d",&a);
 b=a%4;
 if(b==0)
 {
  printf("%d is leap year.",a);
 }
 else
 {
  printf("%d is not a leap year.",a);
 }
 return 0;
}

4. WAP to find all the possible roots of quadratic equation ax2+bx+c.
#include <stdio.h>
#include <math.h>
int main()
{
 int a, b, c, d;
 double root1, root2;
 printf("Enter the coefficient of X^2:");
 scanf("%f",&a);
 printf("\nEnter the coefficient of X:");
 scanf("%f",&b);
 printf("\nEnter the constant:");
 scanf("%f",&c);
 d = b*b - 4*a*c;
 if (d < 0){
 printf("First root = %.2lf + i%.2lf\n", -b/(double)(2*a), sqrt(-d)/(2*a));
 printf("Second root = %.2lf - i%.2lf\n", -b/(double)(2*a), sqrt(-d)/(2*a));
}
else {
 root1 = (-b + sqrt(d))/(2*a);
 root2 = (-b - sqrt(d))/(2*a);
 printf("First root = %.2lf\n", root1);
 printf("Second root = %.2lf\n", root2);
 }
return 0;
}

5. WAP to calculate the area of triangle given the length of its sides. But for the three sides to form a triangle, the sum of sides must be greater than the third.
 #include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
 float a,b,c,s,area;
 printf("Enter the three sides of the triangle:");
 scanf ("%f%f%f",&a,&b,&c);
 s=(a+b+c)/2;
 if((a+b)>c && (b+c)>a && (a+c)>b)
 {
 area= sqrt(s*(s-a)*(s-b)*(s-c));
 printf("The Area of triangle is %f",area);
 }
 else
 {
 printf("Sum of two sides of a triangle must be greater than the third side");
 }
 return 0;
}

6. WAP to read a three digit number and check whether it is a Armstrong number or not.
(eg. :153=(1*1*1)+(5*5*5)+(2*2*2) is an Armstrong number)

#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
 int n,a,b,c,s;
 printf("Enter the three digit number:");
 scanf("%d",&n);
 a=n/100;
 b=(n%100)/10;
 c=(n%10);
 s=(a*a*a)+(b*b*b)+(c*c*c);
 if(n==s)
 {
 printf("%d is an armstrong number.",n);
 }
 else
 {
 printf("%d is not an armstrong number.",n);
 }
 return 0;
}

7. WAP to read two numbers and perform the corresponding arithmetic operations on those numbers. ( using both else if and switch).
 Using else if :
#include<stdio.h>
int main()
{
 int a,b,res;
 char c;
 printf ("Enter any arithmetic operator:");
 scanf("%c",&c);
 printf ("Enter two numbers:");
 scanf ("%d%d",&a,&b);
 if ( c=='+')
 {
 res= a + b;
 }
 else if(c == '-')
 {
 res= a - b;
 }
 else if(c == '*')
 {
 res= a * b;
 }
 else if(c == '/')
 {
 res= a / b;
 }
 else if(c == '%')
 {
 res= a % b;
 }
 printf("%d%c%d is %d",a,c,b,res);
 return 0;
}

Using Switch:

#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b, res;
 char c;
 printf("Enter any arithmetic operator\n");
 scanf("%c",&c);
 printf("Enter two numbers:");
 scanf ("%d%d",&a,&b);
 switch(c)
 {
 case'+':
 res = a + b;
 break;
 case'-':
 res = a - b;
 break;
 case '*': 
 res = a * b ;
 break;
 case '/':
 res = a / b;
 break;
 case'%':
 res = a % b;
 break;
 }
 printf("%d%c%d is %d",a,c,b,res);
 getch ();
}
 
8. WAP to read the percentage scored by student and print the corresponding division(using both else if and switch)
Percent Division
>80 Distinction
60-79 first division
50-59 second division
40-49 third division
<40 fail

Using else if :
#include <stdio.h>
#include <stdlib.h>
int main()
{
 int x;
 printf("Enter the percentage scored:");
 scanf ("%d",&x);
 if(x>=80 && x<=100)
 {
  printf("Distinction");
 }
 else if (x>=60 && x<=79)
 {
  printf("First Division");
 }
 else if (x>=50 && x<=59)
 {
  printf("Second Division");
 }
 else if (x>=40 && x<=49)
 {
  printf("Third Division");
 }
 else if (x<40)
 {
  printf("Fail");
 }
 else
 {
  printf("Enter the Valid Percentage");
 }
return 0;
}

Using switch:
#include <stdio.h>
void main()
{
 int x;
 printf("Enter the Percentage scored:");
 scanf("%d",&x);
 switch(x/10)
{
 case 10:
 case 9:
 case 8:
   printf("Distinction");
   break;
 case 7:
 case 6:
  printf("First Division");
  break;
case 5:
  printf("Second Division");
  break;
case 4:
  printf("Third Division");
  break;
case 3:
case 2:
case 1:
case 0:
 printf("Fail");
 break;
 default:
 printf("Enter the valid percentage");
 }
 getch();
}
9. WAP to calculate electricity bill for domestic consumers.
Units charge/unit
0-20 3.00
21-30 7
31-50 8.5
51-150 10
151-250 11
251-400 12
Above 400 13
 #include <stdio.h>
int main()
{
 float u,a;
 printf("Enter the consumed units:");
 scanf("%f",&u);
 if(u>=0 && u<=20)
 {
 a= u * 3;
 printf("The Bill Amount is Rs.%f",a);
 }
 else if(u>=21 && u<=30)
 {
 a= u * 7;
 printf("The Bill Amount is Rs.%f",a);
 }
 else if(u>=31 && u<=50)
 {
 a= u * 8.5;
 printf("The Bill Amount is Rs.%f",a);
 }
 else if(u>=51 && u<=150)
 {
 a= u * 10;
 printf("The Bill Amount is Rs.%f",a);
 }
 else if(u>=151 && u<=250)
 {
 a= u * 11;
 printf("The Bill Amount is Rs.%f",a);
 }
 else if(u>=251 && u<=400)
 {
 a= u * 12;
 printf("The Bill Amount is Rs.%f",a);
 }
 else if(u>=401)
{
 a= u * 13;
 printf("The Bill Amount is Rs.%f",a);
}
 return 0;
}
