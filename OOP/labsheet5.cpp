1. Write a class for instantiating the objects that represent the two-dimensional Cartesian coordinate system.
   A. Make a particular member function of one class as a friend function of another class for addition.
   B. Make the other three functions to work as a bridge between the classes for multiplication, division, and subtraction.
   C. Also write a small program to demonstrate that all the member functions of one class are the friend functions of another class if the former class is made 
     friend to the latter.
   Make least possible classes to demonstrate all the above in a single program without conflict.
  
#include <iostream>
using namespace std;
class cartesian2; //Forward Declaration
class cartesian1
{
    protected:
      float x,y;
    public:
    cartesian1(): x(0),y(0){}; //intializes x to 0 and y to 0;
    cartesian1(float xx,float yy): x(xx),y(yy){}; //gives xx to x and yy to y;
     void add(cartesian1,cartesian2);
     friend void sub(cartesian1,cartesian2);
     friend void mul(cartesian1,cartesian2);
     friend void div(cartesian1,cartesian2);
};
class cartesian2
{
    protected:
      float x,y;
    public:
    cartesian2(): x(0),y(0){}; //intializes x to 0 and y to 0;
    cartesian2(float xx,float yy): x(xx),y(yy){}; //gives xx to x and yy to y;
     friend void cartesian1 :: add(cartesian1,cartesian2);
     friend void sub(cartesian1,cartesian2);
     friend void mul(cartesian1,cartesian2);
     friend void div(cartesian1,cartesian2);
};
void cartesian1 ::  add(cartesian1 a,cartesian2 b)
{
 float x = a.x + b.x;
 float y= a.y + b.y;
 cout << "The Sum is "<<x<<","<<y<<endl;
}
void sub(cartesian1 a,cartesian2 b)
{
    float x = a.x - b.x;
    float y = a.y - b.y;
    cout << "The Difference is "<< x << ","<<y<<endl;
}
int main()
{
    cartesian1 m(3,5),p;
    cartesian2 n(4,6);
    p.add(m,n);
    sub(m,n);
    return 0;
}

Alternative:

#include <iostream>
class cart2;
class cart1
{
  private:
   int x,y;
  public:
    void getdata(int a, int b)
    {
         x=a;
         y=b;
    }
    void add(cart1,cart2);
    friend void sub(cart1,cart2);
    friend void mul(cart1,cart2);
    friend void div(cart1,cart2);
};
class cart2
{
  private:
   int x,y;
  public:
    friend class cart1;
    void getdata(int a, int b)
    {
         x=a;
         y=b;
    }
    friend void cart1 :: add(cart1,cart2);
    friend void sub(cart1,cart2);
    friend void mul(cart1,cart2);
    friend void div(cart1,cart2);
};
void cart1 :: add(cart1 a, cart2 b)
{
  int x= a.x + b.x;
  int y= a.y + b.y;
  std :: cout << "The sum is "<< x <<" , " << y<<std :: endl;
}
void sub (cart1 a, cart2 b)
{
    int x= a.x-b.x;
    int y= a.y-b.y;
    std:: cout <<"The difference is "<< x <<" , " << y << std :: endl;
}
void mul(cart1 a , cart2 b)
{
    int x = a.x * b.x;
    int y= a.y * b.y;
    std :: cout << "The multiple is "<< x << " , "<<y << std :: endl;
}
void div(cart1 a, cart2 b)
{
    int x= a.x/b.x;
    int y=a.y / b.y;
    std :: cout << "Division = "<<x << " , " <<y << std :: endl;
}
int main()
{
    int m,n,o,p;
    cart1 x;
    cart2 y;
    std :: cout << "Enter co-ordinates of x and y: ";
    std :: cin >> m >>n;
    std :: cout << "Enter another co-ordinates of x and y: ";
    std :: cin >> o >> p;
    x.getdata(m,n);
    y.getdata(o,p);
    x.add(x,y);
    sub(x,y);
    mul(x,y);
    div(x,y);
    return 0;
}

2. Write a class to store x, y, and z coordinates of a point in three-dimensional space. Overload addition andsubtraction operators for addition and subtraction of 
two coordinate objects. Implement the operator functions as non-member functions (friend operator functions).
  
#include<iostream>
using namespace std;
class coordinate
{
    float x,y,z;
public:
    coordinate(float a=0,float b=0,float c=0):x(a),y(b),z(c){}
    friend coordinate operator +  (coordinate a,coordinate b);
    friend coordinate operator - (coordinate a, coordinate b);
    void display()
    {
        cout<<x<<","<<y<<","<<z<<endl;

    }
};
coordinate operator +(coordinate a,coordinate b)
{
    coordinate temp(a.x+b.x,a.y+b.y,a.z+b.z);
    return temp;
}
coordinate operator -(coordinate a,coordinate b)
{
    coordinate temp(a.x-b.x,a.y-b.y,a.z-b.z);
    return temp;
}
main()
{
    int x,y,z;
    char temp;
    coordinate s,t;
    cout<<"enter coordinate x,y,z"<<endl;
    cin>>x>>y>>z;
    coordinate a(x,y,z);
    cout<<"enter coordinate"<<endl;
    cin>>x>>y>>z;
    coordinate b(x,y,z);
    cout<<"sum is:";
    s = a+b;
    s.display();
    cout <<"Diffrence is:";
    t = a-b;
    t.display();
    return 0;
}

alternative:
#include <iostream>
using namespace std;
class space
{
    private:
     int x,y, z;
    public:
     space(int a=0, int b=0, int c=0)
     {
         x=a;
         y=b;
         z=c;
     }
     friend space operator + (space a,space b  );
     friend space operator - (space a, space b);
     void display () {cout << x << ","<<y <<","<<z << endl;}
      
};

space operator + (space m,space n)
{
    space temp(m.x+n.x,m.y+n.y,m.z+n.z);
    return temp;
}
space operator - (space m,space n)
{
   space temp(m.x-n.x,m.y-n.y,m.z-n.z);
   return temp ;
}
int main()
{
  int p,q,r,s,t,u;
  space c,d;
  cout << "Enter coordinates of first point(x,y,z): ";
  cin >> p>>q>>r;
  space a(p,q,r);
  cout << "Enter coorinates of second point(x,y,z): ";
  cin >> s >> t >> u;
  space b(s,t,u);
  cout << "Sum is :"<< endl;
  c=a+b;
  c.display();
  cout << "diffrence is :"<<endl;
  d=a-b;
  d.display();

  return 0;
}

3. Write a program to compare two objects of a class that contains an integer value as its data member. Make overloading functions to overload equality(==), less 
than(<), greater than(>), not equal (!=), greater than or equal to (>=), and less than or equal to(<=) operators using member operator functions.
  #include <iostream>
using namespace std;
class compare
{
    private:
     int x;
    public:
     void get()
     {
         cin>>x;
     }
     void operator ==(compare c2)
     {
       if(x==c2.x)
         cout << x << " and " << c2.x << " are equal"<<endl;
        else
          cout << x << " and " << c2.x << " are not equal"<<endl;
     }
     void operator >(compare c2)
      {
          if(x > c2.x)
            cout <<x << " is greater than "<<c2.x << endl;
           else
             cout << c2.x <<" is greater than " << x <<endl;
      }
     void operator <(compare c2)
     {
         if(x < c2.x)
            cout <<x << " is less than "<<c2.x << endl;
           else
             cout << c2.x <<" is less than " << x <<endl;
     }
     void operator !=(compare c2)
    {
        if(x!=c2.x)
         cout << x << " and " << c2.x << " are not equal"<<endl;
        else
          cout << x << " and " << c2.x << " are equal"<<endl;
    }
     void operator >=(compare c2)
     {
         if(x>=c2.x)
         cout << x << " is greater than or equal to "<<c2.x <<endl;
        else
          cout << c2.x << " is greater than or equal to "<<x <<endl;
     }
     void operator <=(compare c2)
     {
        if(x<=c2.x)
         cout << x << " is less than or equal to "<<c2.x <<endl;
        else
          cout << c2.x << " is less than or equal to "<<x <<endl;
     }
     
};
int main()
{
    compare c1,c2;
    cout << "Enter 1st value: ";
    c1.get();
    cout << "Enter 2nd value: ";
    c2.get();
    c1==c2;
    c1>c2;
    c1<c2;
    c1!=c2;
    c1>=c2;
    c1<=c2;
    return 0;
}

4. Write a class Date that overloads prefix and postfix operators to increase the Date object by one day, while causing appropriate increments to the month and year 
(use the appropriate condition for leap year). The prefix and postfix operators in the Date class should behave exactly like the built-in increment operators.
  #include <iostream>
using namespace std;
class Date
{
  private:
    int d,m,y;
   public:
     Date(int year=0,int month=0, int day=0)
     {
         d=day;
         m=month;
         y=year;
     }
     Date operator ++()
     {
         ++d;
          if(d>30)
          {
            ++m;
            d-=30; 
          }     
          if(m>12)
          {
            ++y;
            m-=12;
          }
            
         return Date(y,m,d);
     }
     Date operator ++(int)
     {
         d++;
          if (d>30)
          {
            m++;
            d-=30;
          }
             
          if (m>12)
          {
            y++;
            m-=12;
          }
             
         return Date(y,m,d);
     }
     void display()
     {
         cout << "Date after increment is : "<< y <<"/" <<m<<"/"<<d<<endl;
     }

};
int main()
{
    int dd,mm,yy;
    cout << "Enter Date in years, months and day: ";
    cin >>yy>>mm>>dd;
    Date d1(yy,mm,dd);
    d1++;
    ++d1;
    d1.display();
    
}
