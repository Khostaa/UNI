
Array of Structures

1.	Define a structure named Student having its members name, roll no and marks in five subjects. WAP to read the record of 10 students. 
    Calculate the total marks and percentage of each student and print them.

#include <stdio.h>
struct Student
{
    char name[20];
    int roll;
    int maths;
    int c;
    int phy;
    int chem;
    int eng;
};
int main()
{
    int total[10];
    float percent[10];
    struct Student s[10];
    for(int i=0;i<10;i++)
    {
      printf("Details of Student %d\n",i+1);
      printf("Enter name: ");
      scanf("%s",s[i].name);
      printf("Enter roll no.: ");
      scanf("%d",&s[i].roll);
      printf("Enter marks obtained in Maths: ");
      scanf("%d",&s[i].maths);
      printf("Enter marks obtained in C programming: ");
      scanf("%d",&s[i].c);
      printf("Enter marks obtained in Physics: ");
      scanf("%d",&s[i].phy);
      printf("Enter marks obtained in Chemistry: ");
      scanf("%d",&s[i].chem);
      printf("Enter marks obtained in English: ");
      scanf("%d",&s[i].eng);
      total[i]=s[i].maths+s[i].c+s[i].phy+s[i].chem+s[i].eng;
      percent[i]=(total[i]*100)/500;
      printf("\n");
    }
    printf("Students Grade:\n\n");
    for(int i=0;i<10;i++)
    {
        printf("%d.Student Name: %s\n",i+1,s[i].name);
        printf("  Roll no.:%d\n",s[i].roll);
        printf("  Marks scored in Maths:%d\n",s[i].maths);
        printf("  Marks scored in C programming:%d\n",s[i].c);
        printf("  Marks scored in Physics:%d\n",s[i].phy);
        printf("  Marks scored in Chemistry:%d\n",s[i].chem);
        printf("  Marks scored in English:%d\n",s[i].eng);
        printf("  Total marks obtained:%d\n",total[i]);
        printf("  Percentage Scored:%.2f\n",percent[i]);
    }     
   return 0;
}

2.	Define a structure named Employee having its members empid, name, address, salary.
WAP to record of 10 employees and 
a.	Display record of all employees who live in “DHARAN”.

# include <stdio.h>
# include <string.h>
struct Employee
{
 int empid;
 char name[20];
 char address[30];
 int  salary;
};
int main()
{
    struct Employee n[10];
    printf("Employee Details:\n");
    printf("-----------------\n");
    for (int i=0;i<10;i++)
    {
        printf("Employee %d:\n",i+1);
        printf("Enter Employee ID:");
        scanf("%d",&n[i].empid);
        printf("Enter name:");
        scanf("%s",n[i].name);
        printf("Enter Address:");
        scanf("%s",n[i].address);
        printf("Enter salary:");
        scanf("%d",&n[i].salary);
        printf("\n");
    }
    printf("\nEmployees living in Dharan:\n");
    for(int i=0;i<10;i++)
    {
        if(strcmp(n[i].address,"DHARAN")==0) 
        {
          printf("Employee ID:%d\n",n[i].empid);
          printf("Name:%s\n",n[i].name);
          printf("Address=%s\n",n[i].address);
          printf("Salary:%d\n",n[i].salary);
          printf("\n");
        }
    }
     return 0;
}

b.	Display record of all employees who doesn’t live in “DHARAN”.

# include <stdio.h>
#include <string.h>
struct Employee
{
 int empid;
 char name[20];
 char address[30];
 int  salary;
};
int main()
{
    struct Employee n[10];
    printf("Employee Details:\n");
    printf("-----------------\n");
    for (int i=0;i<10;i++)
    {
        printf("Employee %d:\n",i+1);
        printf("Enter Employee ID:");
        scanf("%d",&n[i].empid);
        printf("Enter name:");
        scanf("%s",n[i].name);
        printf("Enter Address:");
        scanf("%s",n[i].address);
        printf("Enter salary:");
        scanf("%d",&n[i].salary);
        printf("\n");
    }
    printf("Employees not living in DHARAN\n");
    
    for(int i=0;i<10;i++)
    {
        if (strcmp(n[i].address,"DHARAN")==1)
        {
          printf("Employee ID:%d\n",n[i].empid);
          printf("Name:%s\n",n[i].name);
          printf("Address=%s\n",n[i].address);
          printf("Salary:%d\n",n[i].salary);
          printf("\n");
        }
    }
    return 0;
}    

c.	Display record of all employees whose salary ranges between 15000 and 20000.

#include <stdio.h>
struct Employee
{
 int empid;
 char name[20];
 char address[30];
 int  salary;
};
int main()
{
    struct Employee n[10];
    printf("Employee Details:\n");
    printf("-----------------\n");
    for (int i=0;i<10;i++)
    {
        printf("Employee %d:\n",i+1);
        printf("Enter Employee ID:");
        scanf("%d",&n[i].empid);
        printf("Enter name:");
        scanf("%s",n[i].name);
        printf("Enter Address:");
        scanf("%s",n[i].address);
        printf("Enter salary:");
        scanf("%d",&n[i].salary);
        printf("\n");
    }
    printf("Employees with salary between 15000 to 20000:\n\n");
    for(int i=0;i<10;i++)
    {
        if (n[i].salary>=15000 && n[i].salary<=20000)
        {
          printf("Employee ID:%d\n",n[i].empid);
          printf("Name:%s\n",n[i].name);
          printf("Address=%s\n",n[i].address);
          printf("Salary:%d\n",n[i].salary);
          printf("\n");
        }
    }
    return 0;
}

d.	Display record of all employees by increasing salary of all employees by 10%.

#include <stdio.h>
struct Employee
{
 int empid;
 char name[20];
 char address[30];
 int  salary;
};
int main()
{
    struct Employee n[10];
    printf("Employee Details:\n");
    printf("-----------------\n");
    for (int i=0;i<10;i++)
    {
        printf("Employee %d:\n",i+1);
        printf("Enter Employee ID:");
        scanf("%d",&n[i].empid);
        printf("Enter name:");
        scanf("%s",n[i].name);
        printf("Enter Address:");
        scanf("%s",n[i].address);
        printf("Enter salary:");
        scanf("%d",&n[i].salary);
        printf("\n");
    }
    printf("\nAfter increasing Salaries by 10 percent:\n\n");
    for(int i=0;i<10;i++)
    {
        printf("Employee ID:%d\n",n[i].empid);
        printf("Name:%s\n",n[i].name);
        printf("Address=%s\n",n[i].address);
        n[i].salary+=(10*n[i].salary)/100;
        printf("Salary:%d\n",n[i].salary);
        printf("\n");
    }
return 0;
}

e.	Increase salary by 10% of only those employees who live in “BIRATNAGAR” and display record of all employees.

#include <stdio.h>
#include <string.h>
struct Employee
{
 int empid;
 char name[20];
 char address[30];
 int  salary;
};
int main()
{
    struct Employee n[10];
    printf("Employee Details:\n");
    printf("-----------------\n");
    for (int i=0;i<10;i++)
    {
        printf("Employee %d:\n",i+1);
        printf("Enter Employee ID:");
        scanf("%d",&n[i].empid);
        printf("Enter name:");
        scanf("%s",n[i].name);
        printf("Enter Address:");
        scanf("%s",n[i].address);
        printf("Enter salary:");
        scanf("%d",&n[i].salary);
        printf("\n");
    }
    printf("\nAfter increasing Salary of Employees living in BIRATNAGAR by 10 percent:\n\n");
    for(int i=0;i<10;i++)
    {
        printf("Employee ID:%d\n",n[i].empid);
        printf("Name:%s\n",n[i].name);
        printf("Address=%s\n",n[i].address);
        if(strcmp(n[i].address,"BIRATNAGAR")==0)
        {
            n[i].salary+=(10*n[i].salary)/100;
        }
        printf("Salary:%d\n",n[i].salary);
        printf("\n");
    }
    return 0;
}
 
3.	Define a structure
Name (fname, mname, lastname)
Person (age, contact, address)
WAP to nest the structure Name within the structure Person and read the record of 10 persons and display it.

# include <stdio.h>
struct Name
{
    char fname[20];
    char mname[20];
    char lastname[20];
};
struct Person
{
    struct Name fullname;
    int age;
    long long int contact;
    char address[40];
};
int main()
{
    int i;
    struct Person p[10];
    for (i=0;i<10;i++)
    {
     printf("\nEnter details\n");
     printf("Enter first name:");
     scanf("%s",p[i].fullname.fname);
     printf("Enter middle name:");
     scanf("%s",p[i].fullname.mname);
     printf("Enter last name:");
     scanf("%s",p[i].fullname.lastname);
     printf("Enter age:");
     scanf("%d",&p[i].age);
     printf("Enter contact number:");
     scanf("%lld",&p[i].contact);
     printf("Enter address:");
     scanf("%s",p[i].address);
     printf("\n");
    }
    printf("\n Displaying Names\n");
    for(i=0;i<10;i++)
    {
        printf("Person %d:\n",i+1);
        printf("Name:%s %s %s\n",p[i].fullname.fname,p[i].fullname.mname,p[i].fullname.lastname);
        printf("Age:%d\n",p[i].age);
        printf("Contact:%lld\n",p[i].contact);
        printf("Address:%s\n",p[i].address);
        printf("\n");
    }
    return 0;
}

4.	Define a structure Complex with its members real and img. WAP function to addcomplex() to add two given comples numbers. The function should take two complex type arguments and also return  complex type and WAP to implement UDF in main program.

#include <stdio.h>
struct complex
{
    int x /*real*/,y/*img*/;
};
struct complex addComplex(struct complex,struct complex);
int main()
{
    struct complex c[3];
    int i=0;
   
    for(i=0;i<2;i++)
    {
        printf("for complex %d:\n",i+1);
        printf("Enter real part:");
        scanf("%d",&c[i].x);
        printf("Enter imaginary part:");
        scanf("%d",&c[i].y);
    }
     c[2]=addComplex(c[0],c[1]); 
    {
      printf("Sum of given two complex number is %d+%di",c[2].x,c[2].y);
    }
}
 struct complex addComplex(struct complex c1,struct complex c2)
{
   struct complex c3;
   c3.x=c1.x+c2.x;
   c3.y=c1.y+c2.y;
   return c3;
}

5.	Define a structure named Time with its members hr, min and sec. Write a user defined function named timediff() to calculate the difference between two periods. The function should take two Time type arguments and also return Time type. Write a program to implement UDF in main program.

# include <stdio.h>
struct Time
{
  int hr;
  int min;
  int sec;
};
struct Time timediff(struct Time,struct Time);
int main()
{
  int i;
  struct Time t[3];
  for (int i=0;i<2;i++)
  {
      printf("Enter Time %d:\n",i+1);
      printf("Enter hour:");
      scanf("%d",&t[i].hr);
      printf("Enter minutes:");
      scanf("%d",&t[i].min);
      printf("Enter seconds:");
      scanf("%d",&t[i].sec);
      printf("\n");
  }
  if(t[1].hr<t[0].hr)
     t[2]=timediff(t[0],t[1]);
     else if(t[0].hr==t[1].hr)
         if(t[1].min<t[0].min)
             t[2]=timediff(t[0],t[1]);
         else if (t[0].min==t[1].min)
            if(t[1].sec<=t[0].sec)
              t[2]=timediff(t[0],t[1]);
            else 
              t[2]=timediff(t[1],t[0]);
   else
      t[2]=timediff(t[1],t[0]);

   printf("The time difference is %d:%d:%d",t[2].hr,t[2].min,t[2].sec);
   
   return 0;   
}
struct Time timediff(struct Time x, struct Time y) 
{
  struct Time z;
  z.hr=x.hr-y.hr;
  if (x.min<y.min) {
    z.hr--;
    x.min+=60;
  }
  z.min=x.min-y.min;
  if (x.sec<y.sec) {
    z.min--;
    x.sec+=60;
  }
  z.sec=x.sec-y.sec;
  return z;
}



6.	Define a structure named Student having members name and roll no. WAP to read record of 10 students. Sort the students record in ascending order according to their roll numbers.

# include <stdio.h>
struct student
{
    char name[20];
    int roll;
}s[10],t[10],temp;
int main()
{
    int i;
    printf("Enter information:\n");
    for (i=0;i<10;i++)
    {
        printf("\nStudent %d:\n",i+1); 
        printf("Enter Name:");
        scanf("%s",s[i].name);
        printf("Enter Roll number:");
        scanf("%d",&s[i].roll);
        printf("\n");
    }
    for(i=0;i<10;i++)
    {
        t[i]=s[i];
        for(int j=i;j<10;j++)
        {
          if(t[i].roll>s[j].roll)
          {
              temp=t[i];
              t[i]=s[j];
              s[j]=temp;
          }
        }
    }
    printf("\nDisplaying information:\n");
    for(i=0;i<10;i++)
    {
        printf("Student %d:\n",i+1);
        printf("Name:%s\n",t[i].name);
        printf("Roll no.:%d\n",t[i].roll);
        printf("\n");
    }
    return 0;
}



