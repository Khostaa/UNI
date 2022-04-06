One D-Array using pointer:

1.	WAP to read 10 elements in an array and calculate the sum and average of all numbers using pointer.

# include <stdio.h> 
int main ()
{
    int n[10],sum=0,avg;
    for (int i=0;i<10;i++)
    {
        printf("%d.Enter a number:",i+1);
        scanf("%d",n+i);
        sum+=*(n+i);
    }
    printf("Sum of given numbers is %d.\n",sum);
    printf("Average of given numbers is %d.",sum/10);
    return 0;
}

2.	WAP to read 10 elements in an array and count the occurrence of odd and even numbers using pointer.

# include <stdio.h>
int main()
{
    int a[10],count1=0,count2=0;
    printf("Enter 10 numbers: ");
    for (int i=0;i<10;i++)
    {
        scanf("%d",a+i);
        if (*(a+i)%2==1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    printf("no. of odd numbers=%d\n",count1);
    printf("no. of even numbers=%d",count2);
    return 0;
}

3.	WAP to read 10 elements in an array and copy all the elements to another array using pointer.

# include <stdio.h>
int main()
{
    int a[10],n[10];
    printf("Enter 10 elements: ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",a+i);
        *(n+i)=*(a+i);
    }
    printf("Original array: ");
    for(int i=0;i<10;i++)
    {
        printf("%d  ",*(a+i));
    }
    printf("\n");
    printf("Duplicate array: ");
    for(int i=0;i<10;i++)
    {
        printf("%d  ",*(n+i));
    }
}

4.	WAP to read 10 elements in an array and copy all the elements in reverse order to another array using pointer.

# include <stdio.h>
int main()
{

    int i,j;
    int o[10],r[10];
    printf("Enter 10 elements: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",o+i);
    }
    for(i=0,j=9;i<10,j>=0;i++,j--)
    {
        *(r+i) = *(o+j);
    }
    printf("Original Array: ");
    for(i=0;i<10;i++)
    {
        printf("%d  ",*(o+i));
    }
    printf("\nReversed Array: ");
    for(i=0;i<10;i++)
    {
        printf("%d  ",*(r+i));
    }
}

5.	WAP to separate odd and even numbers in different arrays using pointer.

# include <stdio.h>
int main()
{
    int n;
    int a[n],odd[n],even[n];
    printf("Enter no. of elements in the array: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    printf("Even numbers: ");
    for(int i=0;i<n;i++)
    {
      *(even+i)=*(a+i);
      if(*(even+i)%2==0)
      {
          printf("%d ",*(even+i));
      }
    }
    printf("\nOdd numbers: ");
    for(int i=0;i<n;i++)
    {
        *(odd+i)=*(a+i);
        if(*(odd+i)%2==1)
        {
            printf("%d ",*(odd+i));
        }
    }
    return 0;

}

6.	WAP to read 10 elements in an array and search for particular number among the array list.

# include <stdio.h>
int main()
{
    int n,a[10];
    printf("Enter 10 elements: ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",a+i);
    }
    printf("Enter a number to search:");
    scanf("%d",&n);
    printf("Searched number is at index ");
    for(int i=0;i<10;i++)
    {
        if (n==*(a+i))
        {
            printf("%d.",i);
        }
    }
    return 0;
}

7.	WAP to read 10 elements in an array and find the maximum number using pointer.

#include <stdio.h>
int main()
{
    int n[10],max;
    printf("Enter 10 elements: ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",n+i);
        max= *(n);
        if(*(n+i)>max)
        {
          max=*(n+i);
        }
  
    }
    printf("Maximum number: %d",max);
    return 0;
}

8.	WAP to read 10 elements in an array and find the minimum number using pointer.

# include <stdio.h>
int main()
{
    int a[10],min;
    printf("Enter 10 elements: ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",a+i);
        min=*(a);
        if(*(a+i)<min)
        {
            min=*(a+i);
        }
    }
    printf("Minimum number: %d",min);
    return 0;
}

9.	WAP to count the frequency of each elements in array using pointer.

#include <stdio.h>
int main()
{
    int n,count,count1,i,j;
    int a[100];
    printf("Enter Size of array: ");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    for(i=0;i<n;i++)
    {
      count=0;
        for(j=0;j<n;j++)
        {
            if(*(a+i)==*(a+j))
            {
                count++;
            }
        }
      count1=0;
      for(j=0;j<i+1;j++)
      {
        if(*(a+i)==*(a+j))
        {
          count1++;
/*checks how many time a number is repeated in range i+1*/
        }
      }
    if(count1<2)  /*checks whether number is repeated or not.*/
      printf("%d is repeated %d times.\n",*(a+i),count); 
    }
    return 0;
}

10.	WAP to read 10 elements in an array and sort them in ascending order using pointer.
# include <stdio.h>
int main()
{
    int a[10],temp,i,j;
    printf("Enter 10 elements: ");
    for(i=0;i<10;i++)
    {
      scanf("%d",a+i);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
          if(*(a+i)<*(a+j))
          {
              temp=*(a+i);
              *(a+i)=*(a+j);
              *(a+j)=temp;
          }
        }
    }
    printf("\nAscending order: ");
    for(i=0;i<10;i++)
    {
      printf("%d ",*(a+i));
    }
    return 0;
}

11.	WAP to read 10 elements in an array and sort them in descending order pointer.
# include <stdio.h>
int main()
{
    int a[10],temp,i,j;
    printf("Enter 10 elements: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",a+i);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(*(a+i)>*(a+j))
            {
                temp=*(a+i);  /*temp=larger value*/ 
                *(a+i)=*(a+j);  /*a[i]=small valude*/   /*a[i]=thulo no. ko place*/
                *(a+j)=temp;  /*a[j]=large value*/    /*a[j]=sano no. ko place*/
            }
        }
    }
    printf("Descending order: ");
    for(i=0;i<10;i++)
    {
        printf("%d ",*(a+i));
    }
    return 0;
}

12.	WAP to insert new value in the array (sorted list) using pointer.

# include <stdio.h>
int main()
{
    int n,pos,a[100],m;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    printf("Enter index where you want to add a element: ");
    scanf("%d",&pos);
    printf("Enter element you want to add: ");
    scanf("%d",&m);
    for(int i=n-1;i>pos-1;i--)
    {
        *(a+i+1)=*(a+i);
    }
    *(a+pos)=m;
    n++;
    printf("Array after adding element(sorted list): ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(a+i));
    }
    printf("\n");
    return 0;
}

