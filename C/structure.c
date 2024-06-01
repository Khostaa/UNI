1.	Define given structures (with its members) and write a program to read a record and display it.
a.	Person (name, age, address, contact)

# include <stdio.h>

struct person
{
  char name[30];
  int age;
  char address[40];
  long long int contact;
};
int main()
{
    int n;
    printf("Enter no. of data:");
    scanf("%d",&n);
    struct person p[n];
    
    for(int i=0;i<n;i++)
    {
        printf("Enter datas of Person %d: \n",i+1);
        printf("Enter name: ");
        scanf("%s",p[i].name);
        printf("Enter age: ");
        scanf("%d",&p[i].age);
        printf("Enter address: ");
        scanf("%s",p[i].address);
        printf("Enter contact no.:");
        scanf("%lld",&p[i].contact);
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        printf("Person %d details\n",i+1);
        printf("-----------------\n");
        printf("Name: %s\n",p[i].name);
        printf("Age: %d\n",p[i].age);
        printf("Address: %s\n",p[i].address);
        printf("contact: %lld\n\n",p[i].contact);
    }
    return 0;
}

b.	Employee(id, name ,address, contact, DOJ, designation, salary)

# include <stdio.h>
struct employee
{
    int id;
    char name[20];
    char address[40];
    long long int contact;
    int doj;
    char designation[20];
    int salary;
}data;
int main()
{
    int n;
    struct employee;
    printf("Data entry of employees:\n");
    printf("Enter employee id: ");
    scanf("%d",&data.id);
    printf("Enter name:");
    scanf("%s",data.name);
    printf("Enter address:");
    scanf("%s",data.address);
    printf("Enter contact number:");
    scanf("%lld",&data.contact);
    printf("Enter DOJ:");
    scanf("%d",&data.doj);
    printf("Enter Designation:");
    scanf("%s",data.designation);
    printf("Enter salary:");
    scanf("%d",&data.salary);
    printf("\n");

    printf("Employee details\n");
    printf("-----------------\n");
    printf("Employee ID:%d\n",data.id);
    printf("Name:%s\n",data.name);
    printf("Address:%s\n",data.address);
    printf("Contact number:%lld\n",data.contact);
    printf("DOJ:%d\n",data.doj);
    printf("Designation:%s\n",data.designation);
    printf("Salary:%d\n",data.salary);


    return 0;
    
}

c.	Customer(id, name, address, contact)

# include <stdio.h>
struct customer
{
    int id;
    char name[20];
    char address[40];
    long long int contact;
}data;
int main()
{
    struct customer;
    printf("DATA ENTRY\n");
    printf("Enter customer id:");
    scanf("%d",&data.id);
    printf("Enter name:");
    scanf("%s",&data.name);
    printf("Enter address:");
    scanf("%s",data.address);
    printf("Enter contact no.:");
    scanf("%lld",&data.contact);
    printf("\n");

    printf("Customer details\n");
    printf("----------------\n");
    printf("Customer ID:%d\n",data.id);
    printf("Customer Name:%s\n",data.name);
    printf("Customer address:%s\n",data.address);
    printf("Contact:%lld\n",data.contact);
    
    return 0;

}

d.	Item(code, name, price)

# include <stdio.h>
struct item
{
    int code;
    char name[15];
    float price;
};

int main()
{
    int n;
    printf("Enter no. of items:");
    scanf("%d",&n);
    struct item a[n];
    printf("Items Data Entry\n");
    for(int i=0;i<n;i++)
    {
        printf("Item %d:\n",i+1);
        printf("Item code:");
        scanf("%d",&a[i].code);
        printf("Enter name:");
        scanf("%s",a[i].name);
        printf("Enter price:");
        scanf("%f",&a[i].price);
        printf("\n");
    }
      printf("Items Details\n");
      printf("--------------\n");
    for(int i=0;i<n;i++)
    {
        printf("item %d:\n",i+1);
        printf("item code:%d\n",a[i].code);
        printf("Name:%s\n",a[i].name);
        printf("Price:%.2f\n",a[i].price);
        printf("\n");
    }
   return 0;
}

e.	Author(id, name ,contact, email, gender)

# include <stdio.h>
struct author
{
    int id;
    char name[20];
    long long int contact;
    char email[40];
    char gender[20];
}aut;
int main()
{
    struct author;
    printf("Enter Author's id: ");
    scanf("%d",&aut.id);
    printf("Enter Author's name: ");
    scanf("%s",aut.name);
    printf("Enter Contact: ");
    scanf("%lld",&aut.contact);
    printf("Enter Email: ");
    scanf("%s",aut.email);
    printf("Enter Gender: ");
    scanf("%s",aut.gender);

    printf("\n");

    printf("Author details\n");
    printf("---------------\n");
    printf("Author ID: %d\n",aut.id);
    printf("Author's Name: %s\n",aut.name);
    printf("Contact: %lld\n",aut.contact);
    printf("Email: %s\n",aut.email);
    printf("Gender: %s\n",aut.gender);
    
    return 0;
}

f.	Book(ISBN, title, author, category, pages)

# include <stdio.h>
struct Book
{
    long long int isbn;
    char title[30];
    char author[20];
    char category[30];
    int pages;
}data;
int main()
{
    struct Book ;
        printf("Enter Book details\n");
        printf("Enter ISBN:");
        scanf("%lld",&data.isbn);
        printf("Enter title: ");
        scanf("%s",data.title);
        printf("Enter author's name:");
        scanf("%s",data.author);
        printf("Enter category:");
        scanf("%s",data.category);
        printf("Enter pages:");
        scanf("%d",&data.pages);
        
        printf("\n");

        printf("Book details\n");
        printf("-----------------\n");
        printf("ISBN:%lld\n",data.isbn);
        printf("Title:%s\n",data.title);
        printf("Author:%s\n",data.author);
        printf("Category:%s\n",data.category);
        printf("Pages:%d\n",data.pages);
    return 0;

}

g.	Account(id, name, a/c no., a/c type, balance)

#include<stdio.h>
struct Account
{
    int id;
    char name[20];
    long long int acno;
    char actype[20];
    float balance;
}data;
int main()
{
    printf("Data Entry\n");
    printf("Enter Account ID:");
    scanf("%d",&data.id);
    printf("Enter Account holder's name:");
    scanf("%s",data.name);
    printf("Enter Account number:");
    scanf("%lld",&data.acno);
    printf("Enter Account type:");
    scanf("%s",data.actype);
    printf("Enter Balance Amount:");
    scanf("%f",&data.balance);
    printf("\n");
    printf("Account details\n");
    printf("----------------\n");
    printf("Account ID:%d\n",data.id);
    printf("Account holder's name:%s\n",data.name);
    printf("Account number:%lld\n",data.acno);
    printf("Account type:%s\n",data.actype);
    printf("Balance Amount:%.2f",data.balance);
 return 0;
}

h.	Point(x, y)

#include <stdio.h>
struct point
{
  int x;
  int y;
  char name[34];
}p;
int main()
{
    printf("Enter Coordinates\n");
    printf("Enter x:");
    scanf("%d",&p.x);
    printf("Enter y:");
    scanf("%d",&p.y);
    printf("\n");
    printf("x=%d\n",p.x);
    printf("y=%d\n",p.y);
    printf("point is (%d,%d)",p.x,p.y);
   return 0;
}


2.	Define a structure name Complex having data members real and img. WAP to add two given complex numbers.

#include <stdio.h>
struct complex
{
    int real;
    int img;
};
int main()
{
  int sum=0,sum1=0;
  struct complex a[2];
  for (int i=0;i<2;i++)
  {
    printf("Complex no.%d\n",i+1);
    printf("Enter real part:");
    scanf("%d",&a[i].real);
    printf("Enter imaginary part:");
    scanf("%d",&a[i].img);
  }
  for(int i=0;i<2;i++)
  {
      sum+=a[i].real;
      sum1+=a[i].img;
  }
  for(int i=0;i<2;i++)
    {
      printf("Complex no.%d: %d+%di\n",i+1,a[i].real,a[i].img);
    }
     printf("The Sum of given complex numbers is : %d+%di",sum,sum1);

   return 0;
}

3.	Define a structure name Date having its data members year, month, day. WAP to add two given dates.

#include <stdio.h>
struct Date
{
    int year;
    int month;
    int day;
};
int main()
{
    int day=0,month=0,year=0;
    struct Date d[2];
    for(int i=0;i<2;i++)
    {
        printf("Date %d\n",i+1);
        printf("Enter year:");;
        scanf("%d",&d[i].year);
        printf("Enter month:");
        scanf("%d",&d[i].month);
        printf("Enter day:");
        scanf("%d",&d[i].day);
        printf("Date %d: %d/%d/%d\n",i+1,d[i].year,d[i].month,d[i].day);
        printf("\n");
    }
    for(int i=0;i<2;i++)
    {
     day+=d[i].day;
     if (day>31)
     {  
       day=day-31;
       month++;
     }
     month+=d[i].month;
     if(month>12)
     {
        month=month-12;
        year++;
     }
     year+=d[i].year;
    }
    printf("Sum of given dates is %d/%d/%d",year,month,day);
   return 0;
}

4.	Define a structure name Time having its data members hour, minutes and seconds. WAP to add two given time.

# include <stdio.h>
struct Time
{
    int hour;
    int minute;
    int seconds;
};
int main()
{
    int hour=0,min=0,sec=0;
    struct Time t[2];
    for(int i=0;i<2;i++)
    {
        printf("Time %d:\n",i+1);
        printf("Enter hour:");
        scanf("%d",&t[i].hour);
        printf("Enter minutes:");
        scanf("%d",&t[i].minute);
        printf("Enter seconds:");
        scanf("%d",&t[i].seconds);
        printf("time %d: %d:%d:%d\n",i+1,t[i].hour,t[i].minute,t[i].seconds);
        printf("\n");
    }
    for(int i=0;i<2;i++)
    {
     sec+=t[i].seconds;
     if(sec>60)
     {
         sec=sec-60;
         min++;
     }
     min+=t[i].minute;
     if(min>60)
     {
      min=min-60;
      hour++;
     }
     hour+=t[i].hour;
    }
    printf("Times after addtion is: %d:%d:%d",hour,min,sec);
    printf("\n");
  return 0;
}

5.	Define a structure name Distance having its data members feet and inches. WAP to add two given distances.

# include <stdio.h>
struct Distance
{
    int feet;
    int inches;
};
int main()
{
    int feet=0,inches=0;
    struct Distance d[2];
    for(int i=0;i<2;i++)
    {
        printf("Enter Distance %d:\n",i+1);
        printf("Enter distace in feet:");
        scanf("%d",&d[i].feet);
        printf("Enter distance in inches:");
        scanf("%d",&d[i].inches);
        printf("Distance 1 : %d' %d'' \n",d[i].feet,d[i].inches);
        printf("\n");
    }
    for(int i=0;i<2;i++)
    {
        inches+=d[i].inches;
        if(inches>12)
        {
            inches=inches-12;
            feet++;
        }
        feet+=d[i].feet;
    }
    printf("The addition two given distances results in %d' %d'' ",feet,inches);
    printf("\n");
   return 0;
}


