1.	WAP to write “Purwanchal Campus” to a file, read the content form the file and display it on screen.

#include <stdio.h>
int main()
{
    FILE *ptr;
    char s[20];
    ptr=fopen("campus.txt","w");
    fputs("Purwanchal Campus",ptr);
    fclose(ptr);
    ptr=fopen("campus.txt","r");
    fgets(s,20,ptr);
    printf("%s",s);
    fclose(ptr);

    return 0;

}

2.	WAP to read numbers from a file and write odd and even numbers to separate file.

# include <stdio.h>
int main()
{ 
    int n,a;
    FILE *num,*e,*o;
    num=fopen("number","w");
    if(num==NULL)
    {
        printf("Error opening file.");
        return 1;
    }
    printf("Enter no. of elements: ");
    scanf("%d",&a);
    printf("Enter %d non-negative elements with a space: ",a);
    for(int i=0;i<a;i++)
    {
      scanf("%d",&n);
      if(n==-1) break;
      putw(n,num);
    }
    fclose(num);
    
    e=fopen("even","w");
    o=fopen("odd","w");
    if(e==NULL || o==NULL)
    {
        printf("Error opening file.");
        return 1;
    }

    num=fopen("number","r");
    while((n=getw(num))!=EOF)
    {
        if(n%2 == 0)
        {
         putw(n,e);
        }
        else
        {
          putw(n,o);
        }
        
    }
    fclose(e);
    fclose(o);
    fclose(num);

    e=fopen("even","r");
    printf("Even number: ");
    while((n=getw(e))!=EOF)
    {
        printf("%d ",n);
    }
    fclose(e);
    printf("\n");
    o=fopen("odd","r");
    printf("Odd number: ");
    while((n=getw(o))!=EOF)
    {
        printf("%d ",n);
    }
    fclose(o);
    return 0;
}

3.	WAP to merge two file to third file.

# include <stdio.h>
int main()
{
    char c,ch,sync;
    FILE *f1,*f2,*f3;
    f1=fopen("file1.txt","r");
    f2=fopen("file2.txt","r");
    f3=fopen("merge.txt","w");
    if(f1==NULL || f2==NULL || f3==NULL)
    {
        printf("Error opening file.");
        return 1;
    }
     
    while(c=fgetc(f1)!=EOF)
    {
        fputc(c,f3);
    }
    fclose(f1);
    
    while(ch=fgetc(f2)!=EOF)
    {
        fputc(ch,f3);
    }
    fclose(f2); 
    fclose(f3);
    f3=fopen("merge.txt","r");
    printf("Content of file 3\n");
    while(sync=fgetc(f3)!=EOF)
    {
      printf("%c",sync);
    }
    fclose(f3);
    return 0;

}

4.	WAP to copy content of one file to another.

# include <stdio.h>
int main()
{
    FILE *f1,*f2;
    char c,ch;
    f1=fopen("file1.txt","r");
    f2=fopen("file2.txt","w");
    if(f1==NULL || f2==NULL)
    {
        printf("Error opening file.");
        return 1;
    }
    while(c=fgetc(f1)!=EOF)
    {
        fputc(c,f2);
    }
    fclose(f1);
    fclose(f2);
    f2=fopen("file2.txt","r");
    printf("Copied content of file2 is :\n");
    while(ch=fgetc(f2)!=EOF)
    {
        printf("%c",ch);
    }
    fclose(f2);
    return 0;


}
5.	WAP to count characters, words and lines in a text file.

#include <stdio.h>
int main()
{
    FILE *f;
    char ch;
    int c=0,words=0,line=1;
    f=fopen("file.txt","r");
    if(f==NULL)
    {
        printf("Error opening file.");
        return 1;
    }
    printf("Text in file is :\n");
    while((ch=fgetc(f))!=EOF)
    {
        if(ch != ' ' && ch !='\n') 
        {
            c++;
        }
        if(ch == '\n') 
        {
            line++;
        }
        if(ch == ' ') 
        {
            words++;
        }
        putchar(ch);
    }
    fclose(f);
    printf("\nGiven file has %d character, %d words , %d lines.\n",c-1,words+line,line);
    // c-1 to eliminate(not count) null character of string.
    // word + lines to count 1st word of each line.
    return 0;

}

6.	WAP to write Name, roll no. and age of student to a disk file named “STUDENT.DAT”.

#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[20];
    int roll;
    int age;
};
int main()
{
 struct student data;
 FILE *info;
 info=fopen("STUDENT.DAT","w");
 if(info==NULL)
 {
     printf("file cannot be opened.");
     exit(1);
 }
 printf("\nINPUT STUDENT'S DATA\n");
 for(int i=0;i<5;i++)
 {
     printf("Enter Student %d data:\n",i+1);
     printf("----------------------\n");
     printf("Enter student's name: ");
     scanf("%s",data.name);
     printf("Enter Student Roll No.: ");
     scanf("%d",&data.roll);
     printf("Enter Student Age: ");
     scanf("%d",&data.age);
     fprintf(info,"%s %d %d",data.name,data.roll,data.age);
 }
 fclose(info);
 printf("\n");
 printf("Student's data:\n");
 printf("----------------\n");
 printf("Name\tRoll\tAge\n");
 info=fopen("STUDENT.DAT","r");
 while(fscanf(info,"%s %d %d",data.name,&data.roll,&data.age)!=EOF)
 {
     printf("%s\t%d\t%d\n",data.name,data.roll,data.age);
 }
 fclose(info);
 return 0;
}

7.	WAP to store Employees (id, name, address , salary) in a text file. Read data from the text file and sort them in ascending order of salary and store sorted recorded in binary file .display details of all employees.

#include <stdio.h>
struct employee
{
    int id;
    char name[20];
    char address[30];
    int salary;
}e[10],temp;
int main()
{
    int n,i;
    struct employee ;
    FILE *emp;
    emp=fopen("employee.txt","w");
    if(emp==NULL)
    {
        printf("Error opening file.");
        return 1;
    }
    printf("Enter no. of employees: ");
    scanf("%d",&n);
    printf("INPUT EMPLOYEE DETAILS\n");
    for(int i=0;i<n ;i++)
    {
        printf("Enter Employee %d details:\n",i+1);
        printf("Enter Employee ID: ");
        scanf("%d",&e[i].id);
        printf("Enter Employee name: ");
        scanf("%s",e[i].name);
        printf("Enter address: ");
        scanf("%s",e[i].address);
        printf("Enter Salary: ");
        scanf("%d",&e[i].salary);
        fprintf(emp,"%d %s %s %d\n",e[i].id,e[i].name,e[i].address,e[i].salary);
        printf("\n");
    }
    fclose(emp);
    emp=fopen("employee.txt","r");
    printf("Employee Details\n");
    printf("-----------------\n");
    printf("ID\tNAME\tADDRESS\tSALARY\n");
    i=0;
     while(fscanf(emp,"%d %s %s %d",&e[i].id,e[i].name,e[i].address,&e[i].salary)!=EOF && i<2)
        {
          printf("%d\t%s\t%s\t%d\n",e[i].id,e[i].name,e[i].address,e[i].salary);
          i++;
        }
    printf("\n\n");
    FILE *bin;
    bin=fopen("emp.txt","wb");
    if(bin==NULL)
    {
      printf("Error in opening file.");;
      return 1;
    }
    for(i=0;i<n;i++)
    {
      fscanf(emp," %d %s %s %d ",&e[i].id,e[i].name,e[i].address,&e[i].salary);
      fwrite(&e[i],sizeof(e[i]),1,bin);
    }
    fclose(emp);
    fclose(bin);
    bin=fopen("emp.txt","rb");
    for(int i=0;i<n;i++)
    {
      fread(&e[i],sizeof(e[i]),1,bin);
    }
    for(int i=0;i<n-1;i++)
    {
      for(int j=i+1;j<n;j++)
      {
        if(e[i].salary>e[j].salary)
        {
          temp = e[i];
          e[i] = e[j];
          e[j] = temp;
        }
      }
    }
    printf("Sorted list\n");
    printf("ID\tNAME\tADDRESS\tSALARY\n");
    for(int i=0;i<n;i++)
    {
      printf("%d\t%s\t%s\t%d\n",e[i].id,e[i].name,e[i].address,e[i].salary);
    }
    fclose(bin);
    return 0;

}

8.	WAP to read a record of 10 Students (roll no., name, marks) and store in a file “ioe.txt”. print all the records of student who scored more than or equal to 40 marks.

# include <stdio.h>
struct student
{
    char name[20];
    int roll;
    int marks;
}s;
int main()
{
 struct student;
 FILE *score;
 score=fopen("ioe.txt","w");
 if(score==NULL)
 {
     printf("Error opening file.");
     return 1;
 }
 printf("Input Details\n");
 printf("--------------\n");
 for(int i=0;i<2;i++)
 {
     printf("Enter data of student %d:\n",i+1);
     printf("Enter name: ");
     scanf("%s",s.name);
     printf("Enter roll no.: ");
     scanf("%d",&s.roll);
     printf("Enter marks: ");
     scanf("%d",&s.marks);
     fprintf(score,"%s %d %d",s.name,s.roll,s.marks);
 }
 fclose(score);
 score=fopen("ioe.txt","r");
 printf("STUDENTS INFORMATION\n");
 printf("Name\tRoll\tMarks\n");
 for(int i=0;i<2;i++)
 {
     while(fscanf(score,"%s%d%d",s.name,&s.roll,&s.marks))
     {
       if(s.marks>=40)
        {
          printf("%s\t%d\t%d\n",s.name,s.roll,s.marks);
        }
     }
 }
 fclose(score);
 return 0;
}

