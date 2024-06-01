1. WAP to declare variable of all data types, read the values and display them.
#include <stdio.h> 
#include <stdlib.h>
int main() 
  { 
   int a; 
   float b; 
   double c; 
   char chare; 
   printf("\nEnter a integer:- ");
   scanf("%d", &a); 
   printf("\nEnter a float:- ");
   scanf("%f", &b); 
   printf("\nEnter a double:- "); 
   scanf("%lf", &c); 
   printf("\nEnter a character:- ");
   scanf(" %c", &chare); 
   printf("\nYou have entered a %d integer, %f float, %lf double and %c character!", a, b, c, chare); 
   return 0; 
   }
   
2. WAP to read distance between two cities (in km) and display the distance in meters, feet, inches and centimeters.

#include<stdio.h>
#include <stdlib.h>
int main()
{
 float km, m, ft, inch;
 printf("Enter the distance between two city:- ");
 scanf("%f", &km);
 m = km*1000;
 ft = km * 3280.8; inch = km * 10000;
 printf("The required distance in meters:- %f \n ft:- %f \n inch:- %f", m, ft, inch);
 return 0;
}

3. WAP to read marks obtained by a student in 5 subjects. Read the full marks of each subject
as well. Print the percent scored by the student.
#include <stdio.h>
#include <stdlib.h>
int main()
{
 float a, b, c, d, e, marks, percentage, totalmarks;
 printf("Enter your marks obtained in Physics:- ");
 scanf("%f", &a);
 printf("Enter your marks obtained in Mathematics:- ");
 scanf("%f", &b);
 printf("Enter your marks obtained in Digital Logics:- ");
 scanf("%f", &c);
 printf("Enter your marks obtained in Basic Electrical Engineering:- ");
 scanf("%f", &d);
 printf("Enter your marks obtained in Computer Programming:- ");
 scanf("%f", &e);
 printf("The total marks :- ");
 scanf("%f", &totalmarks);
 marks = a + b + c + d + e;
 percentage = (marks/totalmarks)*100;
 printf("The percentage obtained by student is :- %.2f ", percentage);
 return 0;
}

4. WAP to read temperature in Fahrenheit and convert it into centigrade.
C=5/9 (F-32)

#include <stdio.h>
int main()
{
 float c, f;
 printf("Please Enter temperature in fahrenheit: \n");
 scanf("%f", &f); c = ((f-32)* 5) / 9;
 printf("%.2f Fahrenheit = \n %.2f Celsius ", f, c);
 return 0;
}

5. The length and breadth of a rectangle and radius of a circle are input through the keyboard. 
   WAP to calculate the area & perimeter of the rectangle and the are & circumference of the circle.
   
#include <stdio.h>
int main()
{
 float pie = 3.14;
 float l, b, c, a, p, a1, r;
 printf("\nEnter the length of rectangle:- ");
 scanf("%f", &l); printf("\nEnter the breadth of rectangle:- ");
 scanf("%f", &b);
 a = l*b; p = 2*(l+b); printf("\nThe perimeter of rectangle is:- %.2f", p);
 printf("\nThe Area of rectangle is:- %.2f", a);
 printf("\nEnter the radius of circle:- ");
 scanf("%f", &r); a1 = pie * r * r; c = 2 * pie * r;
 printf("\nThe Area of circle is:- %.2f ", a1);
 printf("\nThe circumference of circle is:- %.2f ", c);
 return 0;
}
6. WAP to read two numbers and swap (interchange) their values.

#include<stdio.h>
int main() 
{
 double first, second, temp;
 printf("Enter first number: ");
 scanf("%lf", &first);
 printf("Enter second number: ");
 scanf("%lf", &second);// Value of first is assigned to temp
 temp = first; // Value of second is assigned to first
 first = second; // Value of temp (initial value of first) is assigned to second
 second = temp;
 // %.2lf displays number up to 2 decimal points
 printf("\nAfter swapping, firstNumber = %.2lf\n", first);
 printf("After swapping, secondNumber = %.2lf", second);
 return 0;
}

7. If a five digit number is input through the keyboard,
a. calculate the sum of its digits.
b. reverse the number
c. Sum the first and last digit.

#include <stdio.h>
int main()
{
 int a,sum, reverse, sm1, f, b, c, d, e, x;
 printf("Enter a 5 digit number:- ");
 scanf("%d", &a);
 b = a /10000;
 //first digit f = a % 10;
 // last digit x = a % 10000;
 // reminder not including first digit c = x / 1000;
 // second digit d = (x % 1000) / 100;
 //third digit e = ((x % 1000) % 100)/10;
 // fourth digit sum = b + c + d + e + f;
 sm1 = b + f;
 reverse = f*10000 + e* 1000 +d * 100 + c* 10 + b;
 printf("\nThe sum of the digits is:- %d", sum);
 printf("\nThe reverse of the digits is:-%d ", reverse);
 printf("\nThe sum of first and last digit is:-%d ", sm1);
 return 0;
}

8. WAP to solve the polynomial equation of order 5.
x 1x08x 4x 5 4 3  
#include <stdio.h>
#include <math.h>
int main()
{
 int a, b, c, d, x, e, zero, f;
 printf("\nWhat is the coeff of x^5:- ");
 scanf(" %d", &a);
 printf("\nEnter the coeff of x^4:- ");
 scanf(" %d", &b);
 printf("\nEnter the coeff of x^3:- ");
 scanf(" %d", &c);
 printf("\nEnter the coeff of x^2:- ");
 scanf(" %d", &d);
 printf("\nEnter the coeff of x:- ");
 scanf(" %d", &e);
 printf("\nEnter the constant:- ");
 scanf(" %d", &f);
 for(x = 0; x <= 6 ;x++){ if (((pow(x, 5)) *a +(pow(x, 4))*b + (pow(x, 3))*c +
 (pow(x, 2))*d + (x)*e + f) == 0)
 {
 printf("The required solution is :- %d", x); 
 }
 else { 
  printf("No required solution available!"); 
  }
 return 0;
}

9. WAP to read two numbers and find the quotient and remainder.
#include <stdio.h>
int main()
{
 int a,b;
 printf("Enter the Dividend:- ");
 scanf("%d",&a);
 printf("\nEnter the Divisor:- ");
 scanf("%d",&b);
 printf("\nQuotient=%d",a/b);
 printf("\nRemainder=%d",a%b);
 return 0;
}
10. WAP to read time in total seconds and convert it into hr,min,sec.

#include <stdio.h>
int main()
{
 int t,h,m,s;
 printf("Enter the total time in seconds:- ");
 scanf("%d",&t);
 s=t%60;
 h=t/3600;
 m=t/60-h*60;
 printf("The given time is %dhours,%dminutes, %dseconds", h,m,s);
 return 0;
}
