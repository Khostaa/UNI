Virtual functions and Runtime type information (RTTI):

1.	Write a program to create a class shape with functions to find the area of the shapes and display the names of the shapes and other essential components of the 
class. Create derived classes circle, rectangle, and trapezoid each having overriding functions area() and display(). Write a suitable program to illustrate virtual
  functions and virtual destructors.
Program code:
 
#include <iostream>
using namespace std;
class shape
{
    protected:
     int x,y;
  public:
   shape() : x(0),y(0){} //default construtor for shape class
   shape (int a, int b) //paramaterized construtor for shape class
   {
       x=a;
       y=b;
   }
   virtual ~shape() //virtual destructor
   {
       cout <<"Virtual destructor destroyed."<<endl;
   }
   virtual int area(){return 0;}; //virtual function

   virtual void display() {};
};
class circle : public shape
{
  private: 
   int r;
  public:
   
   circle(int radius)
   {
       r=radius;
   }
   int area()
   {
        return 3.14 * r * r;
   }
   void display()
   {
       cout << "The area of Circle is "<< area()<<endl;
   }
   ~circle()
    {
        cout << "Destrctor from derived class Circle destroyed"<<endl;
    }
};
class rectangle : public shape
{
 private:
  int l;
  int b;
 public:
  rectangle(int length, int breadth)
  {
      l=length;
      b=breadth;
  } 
  int area()
  {
      return l*b;
  }
  void display()
  {
      cout << "The area of rectangle is "<< area() <<endl;
  }
  ~rectangle()
  {
      cout << "Destructor from derived class rectange destroyed." << endl;
  }
};
class trapezoid : public shape
{
    private:
     int a,b,h;
     float ar;
    public:
      trapezoid(int b1,int b2,int height)
      {
          a=b1;
          b=b2;
          h=height;
      }
      int area()
      {
          ar = (a+b)*h/2;
          return ar;
      }
      void display()
      {
          cout << "The area of trapezoid is "<<area() << endl;
      }
      ~trapezoid()
      {
          cout << "Destuctor from derived class trapezoid destoryed"<<endl;
      }
};
int main()
{
    int k,l,b,m,n,h;
    cout << "Enter radius of circle: ";
    cin >> k;
    circle c(k);
    cout << "Enter length and breadth of rectangle:";
    cin >> l>> b;
    rectangle rect(l,b);
    cout << "Enter two bases and height of trapezoid: "; 
    cin >> m>>n>>h;
    trapezoid t(m,n,h);
   shape *s[]={&c,&rect,&t};
   for (int i=0;i<3;i++)
   {
     s[i]->area();
     s[i]->display();
   }
  return 0;
}

2.	Create a class Person and two derived classes Employee and Student, inherited from class Person. Now create a class Manager which is derived from two base 
  classes Employee and Student. Show the use of the virtual base class.
Program code:

 #include <iostream>
 using namespace std;
 class Person
 {
     protected:
      char name[20];
      int age;
     public:
      void pread()
      {
        cout << "Enter name:";
        cin >> name;
        cout <<"Enter age: ";
        cin >> age;
      }
      void pdisplay()
      {
          cout << "Name = "<< name << endl;
          cout << "Age = "<< age <<endl;
      }


 };
class Employee : public virtual Person
 {
     protected:
      char d[30];
     public:
      void read()
      {
          cout << "Enter designation:";
          cin >>d;
      }
      void display()
      {
          cout << "Designation: " << d << endl;
      }

 };
 class Student : public virtual Person
 {
     protected:
      int roll;
     public:
      void read()
      {
          cout << "Enter roll no: ";
          cin >> roll;
      }
      void display()
      {
          cout << "Roll no.: " <<roll <<endl;
      }

 };
 class manager : public Employee,Student
 {
     protected:
      unsigned int salary;
     public:
      void read()
      {
          Employee :: read();
          Student :: read();
          cout << "Enter salary: ";
          cin >> salary;
      }
      void display()
      {
          Employee :: display();
          Student :: display();
          cout << "Salary: "<< salary <<endl;
      }
 
 };
 int main()
 {
     manager m;
     cout << "Enter Data For Manager:" << endl;
     m.pread();
     m.read();
     cout << endl ;
     cout << "Displaying Information: "<<endl;
     cout << "-------------------------"<<endl;
     m.pdisplay();
     m.display();
     return 0;
 }

3.	Write a program with an abstract class Student and create derive classes Engineering, Medicine and Science from base class Student. Create the objects of the derived classes and process them and access them using an array of pointers of type base class Student.
Program code:

#include <iostream>
#include <cstring>
using namespace std;
class Student
{
  protected:
   char name[20];
   int roll;
  public:
   virtual void input()=0;

   virtual void output()=0; // pure virtual function which makes abstract class
  
};
class Engineering: public Student
{
  protected:
   char name[30];
   int roll;
  public: 
   void input()
   {
     cout << "Enter details of Engineering Student: "<<endl;
     cout << "Enter name: " ;
     cin >> name;
     cout << "Enter roll no: ";
     cin >> roll;
     cout <<endl;
   }
   void output()
   {
     cout<<"**Displaying informatiion of engineering student** "<<endl;
     cout<<"------------------------------------------------"<<endl;
     cout << "Name : " << name<<endl;
     cout << "Roll no: "<< roll<<endl;
     cout <<endl;
   }
};
class Medical: public Student
{
  protected:
   char name[30];
   int roll;
  public: 
   void input()
   {
     cout <<"Enter details of Medical Student: "<<endl;
     cout << "Enter name: " ;
     cin >> name;
     cout << "Enter roll no: ";
     cin >> roll;
     cout <<endl;
   }
   void output()
   {
     cout <<"**Displaying information of Medical Student**"<<endl;
     cout <<"--------------------------------------------"<<endl;
     cout << "Name : " << name <<endl;
     cout << "Roll no: "<< roll <<endl;
     cout <<endl;
   }
};
class Science: public Student
{
  protected:
   char name[30];
   int roll;
  public: 
   void input()
   {
     cout << "Enter details of Science Student"<<endl;
     cout << "Enter name: " ;
     cin >> name;
     cout << "Enter roll no: ";
     cin >> roll;
     cout <<endl;
   }
   void output()
   {
     cout << "**Displaying information of Science Student** "<<endl;
     cout <<"---------------------------------------------"<<endl;
     cout << "Name : " << name <<endl;
     cout << "Roll no: "<< roll <<endl;
     cout <<endl;
   }
};
int main()
{
  Engineering en;
  Medical m;
  Science sc;
  Student *s[]={&en,&m,&sc};
 
  for (int i=0;i<3;i++)
     s[i]->input();
  for (int i=0;i<3;i++)
     s[i]->output();

  return 0;

}

4.	Create a polymorphic class Vehicle and create other derived classes Bus, Car, and Bike from Vehicle. Illustrate RTTI by the use of dynamic_cast and typeid operators in this program.
Program code:


#include <iostream>
#include <typeinfo>
using namespace std;

class Vehicle
{
  public:
   virtual void diplay()
   {    
   }
};
class Bus :public Vehicle
{
};
class Car : public Vehicle
{
};
class Bike: public Vehicle
{
};
int main()
{
    Vehicle *pveh,veh;
    Bus *pbu,bu;
    Car *pca,ca;
    Bike *pbk,bk;

   cout <<"**Results for Base pointer pointing to Derived objects**"<<endl;
    
    pveh=&bu;
    pbu=dynamic_cast<Bus *>(pveh);
    if(pbu)
       cout <<"The cast to derived pointer pbu is successful."<<endl;
    else
        cout <<"The cast to derived pointer pbu has failed."<<endl;
    
    pveh=&ca;
    pca=dynamic_cast<Car *>(pveh);
    if(pca)
      cout <<"The cast to derived pointer pca is successful."<<endl;
    else
       cout<<"The cast to derived pointer pca has failed."<<endl;

    pveh = &bk; 
    pbk = dynamic_cast<Bike * > (pveh);
    if (pbk)
       cout <<"The cast to derived pointer pbk is successful."<<endl;
    else  
       cout <<"The cast to derived pointer pbk has failed."<<endl;

    cout <<endl<<"**Results for Base pointer pointing to base objects.**"<<endl;

    pveh =&veh;
    pbu = dynamic_cast<Bus * > (pveh);
    if(pbu) cout <<"The cast to derived pointer pbu is successful."<<endl;
    else cout <<"The cast to derived pointer pbu has failed."<<endl;

   
    
    pveh = &veh;
    pca = dynamic_cast<Car *>(pveh);
    if(pca) cout <<"The cast to derived pointer pca si successful."<<endl;
    else cout <<"The cast to derived pointer pca has failed."<<endl;

    pveh =&veh;
    pbk =dynamic_cast<Bike *>(pveh);
    if(pbk) cout <<"The Cast to derived pointer pbk is successful"<<endl;
    else cout <<"The cast to derived pointer pck has failed."<<endl;

    cout << endl << "**Findings type with typeid**"<<endl;
    cout << "----------------------------------"<<endl;
    cout << "type of veh is : "<<typeid(veh).name()<<endl;
    cout <<"type of *pveh is : "<<typeid(*pveh).name()<<endl;
    cout <<"type of bu is : "<<typeid(bu).name()<<endl;
    cout <<"type of ca is : "<<typeid(ca).name()<<endl;
    cout<<"type of bk is : "<<typeid(bk).name()<<endl;
   
    cout<<endl<<"**finding type with polymorphic types**"<<endl;
    pveh = &bu;
    cout <<"type of *pveh when pointing to bu is : "<<typeid(*pveh).name()<<endl;
    pveh = &veh;
    cout <<"type of *pveh when pointing to veh is : "<<typeid(*pveh).name()<<endl;\
     
     cout<<endl<<"**Comparing types with typeid**"<<endl;
    if(typeid(bu)==typeid(ca))
         cout <<"type of bus and car is same."<<endl;
    else
        cout <<"type of bus and car is different."<<endl;
    return 0;  
}
