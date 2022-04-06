
1.	Write a simple program that converts the temperature in Celsius scale to Fahrenheit scale and vice versa using the basic concept of class and object. Make separate
classes for Celsius and Fahrenheit which will have the private members that hold the temperature value and make conversion functions in each class for conversion from 
one to another. For example, you need to have a function toFahrenheit() in class Celsius that converts to Fahrenheit scale and returns the value.
Ans:
#include <iostream>
class Celsius
{
    private:
      float tc;
    public:
    float setdata()
    {
       std :: cout<< "Enter temperature in celsius: " << std :: endl;
        std :: cin>> tc;
        return tc;
    }
    void toFahrenheit(float a)
    {
      float result;
      result=(9*a+160)/5;
      std :: cout << a << " converted to Fahrenheit is: " <<result<< std:: endl ;
   
    }

};
class Fahrenheit 
{
    private:
     float tf;
    public:
    float setdata()
    {
        std :: cout <<"Enter temperature in Fahrenheit:"<< std:: endl;
        std :: cin >> tf;
        return tf;
    }
    void toCelsius(float b)
    {
        float res;
        res= (5* (b-32))/9;
        std :: cout << b <<" Converted to celsius is: "<<res << std :: endl;
        

    }
};
int main()
{
    float t;
    Celsius c1;
    t=c1.setdata();
    c1.toFahrenheit(t);
    
    float f;
    
    Fahrenheit f1;
    f = f1.setdata();
    f1.toCelsius(f);
    
    
    return 0;
}

2.	Assume that you want to check whether the number is prime or not. Write a program that asks for numbers repeatedly. When it finishes checking a number the program 
asks if the user wants to do another calculation. The response can be 'y' or 'n'. Don't forget to use the object-oriented concept.
Ans:
#include <iostream>
class prime
{
  private:
   int num;
  public:
  int setdata()
  {
      std :: cout<<"Enter a number to check for prime: "<< std :: endl;
      std :: cin >> num;
      
      return num;
  }
   void check(int n)
   {
       int count;
     for (int i=2;i<=n/2;i++)
     {
       if (n%i==0)
          count++;
         
     }
     if(num<=0)
      {
          std :: cout << "Please, Enter a positive integer!" << std :: endl;
      }
      else 
      {
       if (count<1) 
         std :: cout << n <<" is prime number."<< std :: endl;
       else
        std :: cout << n << " is not a prime number."<<std :: endl;
      }
   }  
   void ask()
   {
       char ch;
       std :: cout << "want another calculation?[Enter 'y' for yes and 'n' for no]"<< std :: endl;
       std :: cin >> ch;
       if (ch == 'y')
       {
        setdata();
        check(num);
        ask();
       }
       else
         std :: cout << "Thank you for checking!";
   }

};
int main()
{
    int c;
    char ch;
    prime d;
    c = d.setdata();
    d.check(c);
    d.ask();
    
    return 0;
}
3.	Create a class called carpark that has int data member for car id, int data member for charge/hour, and float data member for the parked time. Make functions to 
set data members and show the charges and parked hours of the corresponding car id. Make functions for setting and showing the data members. Member function should be
called from other functions.
Ans:
#include <iostream>
class carpark
{
  private:
    int id; //car id
    int cph; //charge per hour
    float pt; //parked time
  public:
   void setdata()
   {
       std :: cout << "Enter the car id:"<< std :: endl;
       std :: cin >> id;
       std :: cout << "Enter charge per hour:" << std :: endl;
       std :: cin >> cph;
       std :: cout <<"Enter parked time: " << std :: endl;
       std :: cin >> pt;
   }
   void showdata()
   {
       std :: cout <<"Car id: " << id << std :: endl;
       std :: cout << "charge per hour: "<< cph << std :: endl;
       std :: cout << "Parked time: "<< pt << std :: endl;
   }

};
int main()
{
    carpark c;
    int n;
    std :: cout << "Enter the no. of cars:"<< std :: endl;
    std :: cin >> n;
    for (int i=1;i<=n;i++)
    {
      std :: cout << "For car "<< i << std :: endl;
      c.setdata();
      std :: cout << "Details of car "<< i << std :: endl;
      std :: cout << "--------------------"<<std :: endl;
      c.showdata();
      std :: cout << std :: endl;
    }
 
    return 0;
}
4.	Write a program with classes to represent a circle, rectangle, and triangle. Each class should have data members to represent the actual objects and member 
functions to read and display objects, find perimeter and area of the objects, and other useful functions. Use the classes to create objects in your program.
Ans:
#include <iostream>
#include <bits/stdc++.h>
class circle
{
    private :
     int r;
     float p,ar;
    public :
    void setdata()
    {

        std :: cout << "Enter value of radius: ";
        std :: cin >> r;
        p =  2 * 3.14 * r;
        ar = 3.14 *r*r;

    }
     void showdata()
     {
         std :: cout << "Perimeter of circle is "<< p << " units."<< std :: endl;
         std :: cout << "Area of circle is "<< ar <<" sq.units. " << std :: endl;
         std :: cout << std :: endl;
     }

};
class rectangle
{
 private :
     int l,b,p,ar;
    public :
    void setdata()
    {

        std :: cout << "Enter length of rectangle: ";
        std :: cin >> l;
        std :: cout << "Enter breadth of rectangle: ";
        std :: cin >> b;
        p = 2*(l+b);
        ar = l*b;

    }
     void showdata()
     {
         std :: cout << "Perimeter of rectangle is "<< p<<" units." << std :: endl;
         std :: cout << "Area of rectangle is "<< ar << " sq. units." << std :: endl;
         std :: cout << std :: endl;
     }
};
class triangle
{
    private :
     int a,b,c,p,s;
     float ar;
    public :
    void setdata()
    {

        std :: cout << "Enter sides of triangle: ";
        std :: cin >> a >> b >> c;
        p = a+b+c;
        s=(a+b+c)/2;
        ar = sqrt(s*(s-a)*(s-b)*(s-c));

    }
     void showdata()
     {
         std :: cout << "Perimeter of triangle is "<< p <<" units." << std :: endl;
         std :: cout << "Area of triangle is "<< ar <<" sq.units." << std :: endl;
         std :: cout << std :: endl;
     }

};
int main()
{
    triangle t;
    t.setdata();
    t.showdata();

    circle c;
    c.setdata();
    c.showdata();

    rectangle r;
    r.setdata();
    r.showdata();
    return 0;


}
5.	Assume that an object represents an employee report that contains information like employee id, total bonus, total overtime in a particular year. Use an array of 
objects to represent n employees' reports. Write a program that displays the report. Use setpara() member function to set report attributes by passing the arguments 
  and member function displayreport() to show the report according to the parameter passed. Display the report in the following format.
An employee with ... ... ... has received Rs ... ... ...as a bonus
and
had worked ... ... ... hours as overtime in the year ... ... ...

Ans:
#include <iostream>
class employee
{
    private:
    int n;
     int eid;
     int bonus;
     int ot;
    public:
     void setpara()
     {
         std :: cout <<"Enter employee id : "<< std ::endl;
         std :: cin >> eid;
         std :: cout << "Enter total Bonus amount: "<< std :: endl;
         std :: cin >>bonus;
         std :: cout << "Enter total Overtime: "<< std :: endl;
         std :: cin >> ot;
     }
     void displayreport()
     {
        std :: cout << "An employee with id: "<<eid<< " has received Rs. "<< bonus << " as a bonus" <<std :: endl;
        std :: cout << "and" << std :: endl;
        std :: cout << "had worked "<< ot << " hours as a overtime in the year" << "......" << std :: endl;
        std :: cout << std:: endl;
     }
};
int main()
{
    int n;
    std :: cout << "Enter no. of employees" << std :: endl;
    std:: cin >> n;
    employee e[n];
    for(int i=0;i<n;i++)
        {
         std :: cout << "For Employee "<< i+1 << std :: endl;
         std :: cout << "---------------" << std:: endl;
         e[i].setpara();
        }
    std :: cout << "Displaying Information" << std :: endl;
    std :: cout <<"------------------------"<< std :: endl;
    for(int i=0;i<n;i++)
    {
        std :: cout <<"DETAILS OF EMPLOYEE " << i+1 << std :: endl;
        e[i].displayreport();
    }
    return 0;
}
