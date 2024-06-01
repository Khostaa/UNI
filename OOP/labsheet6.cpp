1.	Write a program that can convert the Distance (meter, centimeter) to meters measurement in float and vice versa. Make a class distance with two data members,
meter and centimeter. You can add function members as per your requirement.
Code:
#include <iostream>
using namespace std;
class Distance
{
 private:
 float m, cm;
 public:
 Distance()
 {
 }
  Distance(float k) 
 {
  m=k;
  cm = k * 100;
 }
 void display()
 {
  cout <<"Given "<<m <<" meter= " << cm<<" centimeter.";
 }
};
int main()
{
  Distance d1;
  float x;
  cout << "Enter the data in meter to be changed:";
  cin >> x;
  d1 = x;
  d1.display();
  return 0;
}

2.	Write two classes to store distances in meter-centimeter and feet-inch systems respectively. Write conversions functions so that the program can convert objects 
of both types.
Code:
#include <iostream>
using namespace std;
class inch_feet
{
 private:
   float in, fe;
 public:
   void set_data(float i, float f)
   {
    fe = f;
    in = i;
   }
   float get_in()
   {
    return in;
   }
   float get_fe()
   {
     return fe;
   }
};
class meter_centi
{
 private:
  float m, cm;
public:
  void set_data(float me, float c)
   {
    cm = c;
    m = me;
   }
   meter_centi() {}
   meter_centi(inch_feet I)
  {
    cm = I.get_in() / 2.54;
    m = I.get_fe() / 3.2808;
   }
 void dispaly(inch_feet i)
 {
   cout<<i.get_fe()<<" feet = "<<m<<" meter."<<"\n"<<i.get_in()<<" inch =
   "<<cm<<" centimeter.";
  }
};
int main()
{
  inch_feet i1, i2;
  meter_centi m1, m2;
  float a, b, c, d;
  cout << "Enter the distance in inch and feet :";
  cin >> c >> d;
  i1.set_data(c, d);
  m1 = i1;
  m1.dispaly(i1);
  return 0;
}

3.	
4.	Write three derived classes inheriting functionality of base class person (should have a member function that asks to enter name and age) and with added unique 
features of student, and employee, and functionality to assign, change and delete records of student and employee. And make one member function for printing the 
address of the objects of classes (base and derived) using this pointer. Create two objects of the base class and derived classes each and print the addresses of
individual objects. Using a calculator, calculate the address space occupied by each object and verify this with address spaces printed by the program.
Code:
#include <iostream>
using namespace std;
class person
{
 private:
  string name;
  int age;
 public:
  void set_data()
  {
    cout << "Enter the name of person :";
    getline(cin, name);
    cout << "Enter the age of person :";
    cin >> age;
  } 
void display()
 {  
   cout << "\n\n\nPresonal details !!!!\n--------------------------------\nName : " << name << "\nAge= " << age;
 }
};
class employee : public person
{
protected:
 int salary, em_id;
public:
 void set_data()
{
 cout << "Enter the salary :";
 cin >> salary;
 cout << "Enter the emloyee ID :";
 cin >> em_id;
}
void dispaly()
{
 cout << "\n\n\nEmployee Details !!!!!\n--------------------------\n";
 cout << "Salary : " << salary << "\nEmployee ID No : " << em_id;
}
};
class student : public person
{
 protected:
   int opp, ecm, micro;
public:
  void set_data()
{
 person::set_data();
 cout << "Enter the marks obtained in C++ : ";
 cin >> opp;
 cout << "Enter the marks obtained in ECM : ";
 cin >> ecm;
 cout << "Enter the marks obtained in Microprocessor : ";
 cin >> micro;
}
void display()
{
  person::display();
  cout << "\n\n\nMarks obtained !!!!!!\n---------------------------------\n";
  cout << "Marks obtained in C++ : " << opp << "\nMarks obtained in ECM : "<< ecm << "\nMarks obtained in Microprocessor : " << micro;
}
};
int main()
{
  employee e1;
  student s1;
  s1.set_data();
  e1.set_data();
  s1.display();
  e1.dispaly();
 return 0;
}

5.	Write a base class that asks the user to enter a complex number and make a derived class that adds the complex number of its own with the base. Finally, make a 
third class that is a friend of derived and calculate the difference of the base complex number and its own complex number.
Code:
#include <iostream>
using namespace std;
class base
{
private:
 int r, i;
public:
 void set_data()
 {
  cout << "\nEnter the real and imaginary part of complex number : ";
  cin >> r >> i;
 }
 int get_re(){return r;}
 int get_ie(){return i;}
};
class derived_add : public base
{
 protected:
  int r1, i1;
 public:
  void set_data()
{
  base::set_data();
  cout << "\nEnter the real and imaginary part of complex number : ";
  cin >> r1 >> i1;
}
derived_add add()
{
  derived_add d;
  d.r1=r1+get_re();
  d.i1=i1+get_ie();
 return d;
}
void display()
{
 cout<<"\nSum = "<<r1<<"+ j"<<i1;
}
};
class derived_sub : public base
{
 protected:
  int r2, i2;
 public:
  void set_data()
  {
    base::set_data();
    cout << "\nEnter the real and imaginary part of complex number : ";
    cin >> r2 >> i2;
  }
 derived_sub sub()
 {
  derived_sub d;
  d.r2=r2-get_re();
  d.i2=i2-get_ie();
  return d;
}
void display()
{
 cout<<"\nDifference ="<<r2<<"+j"<<i2;
}
};
int main()
{
  derived_add D1,D2;
  derived_sub s1,s2;
  D1.set_data();
  D2=D1.add();
  D2.display();
  s1.set_data();
  s2=s1.sub();
  s2.display();
  return 0;
}


