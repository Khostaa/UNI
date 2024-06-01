1.	/*Write a program to set a structure to hold a date (mm,dd and yy), assign values to the members of the structure and print out the values in the format 
11/28/2004 by function. Pass the structure to the function*/
 #include <iostream>
using namespace std;
struct student
{
    int year;
    int month;
    int day;
};
void display(student);
int main()
{
    struct student d;
    cout<<"Enter the year:";
    cin>>d.year;
    cout<<"Enter the month:";
    cin>>d.month;
    cout<<"Enter the day:";
    cin>>d.day;
    display(d);
    return 0;
}
void display(student d)
{
    cout<<d.month<<'/'<<d.day<<'/'<<d.year;

}

2.	Write a program using the function overloading that converts feet to inches. Use function with no argument, one argument and two arguments. Decide yourself 
the types of arguments. Use pass by reference in any one of the function above.

#include <iostream>
using namespace std;
void func1(); //function with no arguments
void func2(int &); //function with pass by reference argument
void func3(int , int) ;//fucntion with two arguments
int main()
{
    int f1,f2;
 cout << "Enter the value in feet:";
    cin >> f1>>f2;
    func1();
          func2(f1);
    func3(f1,f2);
    return 0;
    
}
void func1()
{
    cout << "Nothing to show here!" << endl;
}
void func2(int &a)
{
    int inches = a*12;
    cout << a << " changed to inches is "<<inches << endl;
}
void func3(int a, int b)
{
    int i1,i2;
    i1=a*12;
           i2= b*12;
    cout << a << " Changed to inches is "<< i1 <<endl;
    cout << b << " Changed to inches is "<<i2<< endl;
}
3.	Define two namespaces: Square and Cube. In both the namespaces, define an integer variable named "num" and a function named "fun". The "fun" function in 
"Square" namespace, 
should return the square of an integer passed as an argument while the "fun" function in "Cube"
 namespace, should return the cube of an integer passed as an argument. In the main function, set the integer variables "num" of both the namespaces with different
 values. Then, compute and print the cube of the integer variable "num" of the "Square" namespace using the "fun" function of the "Cube" namespace 
and the square of the integer variable "num" of the "Cube" namespace using the "fun" function of the "Square" namespace.
#include <iostream>
 namespace square
 {
     int num; 
    int fun (int n)
     {
      return n*n;
     }
 }
 namespace cube
 {
     int num;
     int fun(int n)
     {
        return n*n*n;
     }
 }
 int main()
 {
  std :: cout << "Enter the vaules of num for square and cube nums: ";
  std :: cin >> square :: num >> cube :: num;
               std :: cout << "Cube = " << cube :: fun(square :: num)<<std :: endl;
  std :: cout << "Square = " << square :: fun(cube :: num)<<std :: endl;
  return 0;
 }
4.	/*Write a function that passes two temperatures by reference and sets the larger of the two numbers to a value entered by user by using return by reference.*/
#include <iostream>
int &large(int &,int&);
int main()
{
    int t1,t2,l;
    std :: cout <<"Enter values of temperature: ";
    std :: cin>>t1>>t2;
    l=large(t1,t2);
    std :: cout << l << " is largest.";
    return 0;
}
int &large (int &a,int &b)
       {
    if(a>b)
      return a;
    else
      return b;
}
5.	/*Assume that employee will have to pay 10 percent income tax to the government. Ask user to enter the employee salary. Use inline function to display the net
payment to the employee by the company.*/
#include <iostream>
inline double salary(double sal)
{
  return (sal-0.1*sal);
       }
    
int main()
{
           double sal;
    std :: cout <<"Enter salary of employee: ";
    std :: cin >> sal;
    std :: cout << "Net salary of employee is " << salary(sal);
    return 0;
}
6.	/*Write a program that displays the current monthly salary of chief executive officer, information officer, and system analyst, programmer that has been increased 
by 9, 10, 12, and 12 percentages respectively in year 2010. Let us assume that the salaries in year 2009 are

Chief executive officer Rs. 35000/m
Information officer Rs. 25000/m
System analyst Rs. 24000/m
Programmer Rs. 18000/m
Make a function that takes two arguments; one salary and the other increment. Use proper default argument.
*/
#include <iostream>
int salary(int sal,int per=9)
{
    return(sal+per*sal/100);
}
int main()
{
    std :: cout<<" Increased Salary of officials are: "<<std::endl;
    std :: cout << "Chief Executive Officer: "<< salary(35000,9)<<std::endl;
    std :: cout << "Information Officer: "<< salary(25000,10)<<std::endl;
   std :: cout <<"System analyst: " << salary(24000,12)<<std::endl;
   std :: cout <<"Programmer : "<< salary(18000,12);
    return 0;
}
