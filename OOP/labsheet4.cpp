1.	Write a program that has a class to represent time. The class should have constructors to initialize data members hour, minute, and second to 0 and to initialize
them to values passed as arguments. The class should have a member function to add time objects and return the result as a time object. There should be functions to 
display time in 12-hour and 24-hour format.
Ans:
#include <iostream>
class time
{
 private:
   int hours,minutes,seconds;
  public:
    time()
    {
      hours = 0;
      minutes=0;
      seconds=0;

    }
    time(int hrs,int min,int sec)
    {
      hours=hrs;
      minutes = min;
      seconds = sec;
    }
    void display()
    {
      std :: cout << "Time: ";
      std :: cout << hours <<":"<< minutes <<":"<<seconds<< std :: endl ;
    }
    void add(time x, time y)
    {
        int tmp =0;
        seconds = x.seconds + y.seconds;
        if(seconds > 59)
        {
          seconds =seconds -59;
          tmp ++;
        }
          
        minutes = x.minutes + y.minutes + tmp;
        tmp =0;
        if (minutes > 59)
        {
           minutes = minutes =59;
           tmp++;
        }
        hours = x.hours + y.hours + tmp;
        if(hours >=24)
        {
            hours=hours - 24;
        }
        std :: cout << hours << ":" << minutes << ":" << seconds << std :: endl;
         

    }
   
};
int main()
{
    int t1,t2,t3,t4,t5,t6;
    std :: cout<<"Enter time in hours,minutes & Seconds: "    << std :: endl;
    std :: cin>> t1 >> t2 >> t3;
    time time1(t1,t2,t3);
    std :: cout << "Enter another time in hours, minutes & seconds: " << std ::  endl;
    std :: cin>> t4 >> t5 >> t6;
    time time2(t4,t5,t6);
    time1.display();
    time2.display();a

    std :: cout << "\nAfter Add:";
    time1.add(time1,time2);

    return 0;
}

2.	Write a program that has a class with a dynamically allocated character array as its data member. One object should contain "Engineers are" and another should 
contain " Creatures of logic". Member function join() should concatenate two strings by passing two objects as arguments. Display the concatenated string through a 
member function. Use constructors to allocate and initialize the data member. Also, write a destructor to free the allocated memory for the character array. Make your
own function for the concatenation of two strings.
Ans:
#include<iostream>
#include<cstring>
class dma{
char *c;
int len;
public:
dma(){
len=0;
}
dma(char *s){
len=strlen(s);
c=new char[len+1];
strcpy(c,s);
}
void join(dma &a,dma &b){
len=a.len+b.len;
delete []c;
c=new char[len+1];
strcpy(c,a.c);
strcat(c,b.c);
}
void show(){
std :: cout<<c<<std :: endl;
}
};
int main(){
dma d1("Engineers are"),d2(" Creatures of logic"),d3;
d3.join(d1,d2);
d3.show();
return 0;
}

3.	Write a class that can store Department ID and Department Name with constructors to initialize its members. Write destructor member in the same class and display 
the message "Object n goes out of the scope". Your program should be made such that it should show the order of constructor and destructor invocation.
Ans: 
#include<iostream>
#include<cstring>
       class store{
int id;
char name[30];
public:
store(){
id=0;
}
store(int x,char *y){
id=x;s
strcpy(name,y);
}
void display(){
        std :: cout<<"Department ID: "<<id<<std :: endl;
std :: cout<<"Department Name: "<<name[30]<<std :: endl;
}
~store(){
std ::cout<<"Object goes out of the scope"<< std :: endl;
}
};
int main(){
store s1(1," DEPARTMENT");
s1.display();
return 0;
}

4.	Assume that one constructor initializes data member say num_vehicle, hour, and rate. There should be a 10% discount if num_vehicle exceeds 10. Display the total
charge. Use two objects and show a bit-by-bit copy of one object to another (make your own copy constructor).
Ans:
#include<iostream>
class vehicle{
int num_vehicle;
int hr;
float rate;
float charge;
public:
vehicle(){
num_vehicle=0;
hr=0;
rate=0;
charge=0;
}
vehicle(int a,int b,float c){
num_vehicle=a;
hr=b;
rate=c;
if(hr>10){
charge=hr*rate;
charge=charge-0.1*charge;
}
else{
charge=hr*rate;
}
}
vehicle(vehicle& v1,vehicle& v2)
{
std :: cout<<"The total charge of vehicle 1 :" << v1.charge << std :: endl;
std :: cout<< "The total charge of vehicle 2:" << v2.charge << std :: endl;
}
};
int main(){
vehicle v1(1564,10,49.75),v2(1111,6,55.55),v3(v1,v2);
return 0;
}
5.	Write a program that illustrates the following relationship and comment on them. 
i) const_object.non_const_mem_function
ii) const_object.const_mem_function
iii) non_const_object.non_const_mem_function
iv) non_const_object.const_mem_function

Ans:
#include<iostream>

class program{
const int a;
public:
program(int x):a(x){
}
void fun1(){
std :: cout<<"Value of a: "<<a<<std :: endl;
}
void fun2()const{
std :: cout<<"Value of a: "<<a<<std :: endl;
}
};
int main(){
program p1(1);
p1.fun1();
p1.fun2();
const program p2(2);
p2.fun1(); //const object only can access the const function
p2.fun2();
return 0;

6.	Create a class with a data member to hold a "serial number" for each object created from the class. That is, the first object created will be numbered 1,
  the second 2, and so on by using the basic concept of static data members. Use static member function if it is useful in the program. Otherwise, make a separate
    program that demonstrates the use of static member function.
Ans:
#include<iostream>
class Class{
static int a;
int b=0;
public:
Class(){
a++;
b=a;
}
void display(){
std :: cout<< "Serial number is " << b  << std :: endl;
std :: cout<<  "Total number of object :"<<a<< std :: endl;
}
};
int Class::a=0;
int main(){
Class c1,c2,c3,c4;
c1.display();
c2.display();
c3.display();
c4.display();
return 0;
}
