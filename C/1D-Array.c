
1.	WAP to read 10 elements in an array and calculate the sum and average of all elements.

#include <stdio.h>
int main()
{
    int i,sum=0;
    int avg;
    int num[10];

    for(i=0;i<10;i++)
    {
        printf("Enter number %d:",i+1);
        scanf("%d",&num[i]);
        sum+=num[i];
    }
    printf("numbers: ");
    for(i=0;i<10;i++)
    {
      printf("%d ",num[i]);
    }
    avg=sum/i;
    printf("\nSum of numbers is %d\n",sum);
    printf("Average is %d",avg);
    return 0;

}

2.	WAP to read 10 numbers in an array and count the occurrence of odd and even numbers.

#include <stdio.h>

int main()
{
    int i,count1=0,count2=0;
    int num[10];

    for(i=0;i<10;i++)
    {
        printf("%d. Enter number:",i+1);
        scanf("%d",&num[i]);
        if(num[i]%2==0)
        {
            count1+=1;
        }
        else
        {
            count2+=1;
        }
    }
    printf("there are %d even numbers.\n",count1);
    printf("there are %d odd numbers.",count2);
    return 0;
}

3.	WAP to read 10 elements in an array and copy all the elements to another array.


#include <stdio.h>
int main()
{
    int i,j,num1[10],num2[10];
    for (i=0,j=0;i<10,j<10;i++,j++)
    {
        printf("%d Enter number:",i+1);
        scanf("%d",&num1[i]);
        num2[j]=num1[i];
    }
    printf(" original array: ");
    for (i=0;i<10;i++)
    {
        printf("%d ",num1[i]);
    }
    printf("\n duplicate array:");
    for(j=0;j<10;j++)
    {
        printf("%d ",num2[j]);
    }
    return 0;
}

4.	WAP to read 10 elements in an array and copy all the elements in reverse order to an another array.

#include <stdio.h>
int main()
{
    int i,j,num1[10],num2[10];
    for (i=0,j=9;i<10,j>=0;i++,j--)
    {
        printf("%d. Enter number:",i+1);
        scanf("%d",&num1[i]);
        num2[j]=num1[i];
    }
    printf(" original array: ");
    for (i=0;i<10;i++)
    {
        printf("%d ",num1[i]);
    }
    printf("\n reversed array: ");
     for(j=0;j<10;j++)
    {
        printf("%d ",num2[j]);
    }
    return 0;
}

5.	WAP to separate odd and even integers in separate array.
#include <stdio.h>

int main()
{
    int n;
    int num[n];
    int even[n],odd[n];

    printf("Enter no. of elements: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("%d. Enter a number: ",i+1);
        scanf("%d",&num[i]);
    }
    printf("Even number:");
     for(int i=0;i<n;i++)
    {
        even[i]=num[i];
        if (even[i]%2==0)
        {
            printf("%d ",even[i]);
        }

    }
     printf("\nOdd number:");
     for(int i=0;i<n;i++)
    {
        odd[i]=num[i];
        if (odd[i]%2==1)
        {
            printf("%d ",odd[i]);
        }

    }
    return 0;
}
6.	WAP to read 10 elements in an array and search for particular number among the array list.

#include <stdio.h>
int main()
{
    int num[10],n,i=0,j;
    for(int i=0;i<10;i++)
    {
        printf("%d. Enter a number: ",i+1);
        scanf("%d",&num[i]);  
    }
    printf("numbers:");
    for(int i=0;i<10;i++)
    {
        printf("%d ",num[i]);
    }
    printf("\nEnter a number to search:");
    scanf("%d",&j);
    printf("\nSearched number is at ");
    for(int i=0;i<10;i++)
    {
        if (j==num[i])
        {
            printf("num[%d] ",i);
        }
    }
    return 0;
}

7.	WAP to read 10 elements in an array and find the maximum.

# include <stdio.h>
int main()
{
    int i=0, num[10];
    int max[10];
    for(i=0;i<10;i++)
    {
        printf("%d. Enter a number:",i+1);
        scanf("%d",&num[i]);
    }
    max[10]=num[0];
    for(i=0;i<10;i++)
    {
        if(num[i]>max[10])
        {
            max[10]=num[i];
        }
    }
    printf("Maximum is %d ",max[10]);

return 0;

}

8.	WAP to read 10 numbers in an array and find the minimum.

# include <stdio.h>
int main()
{
    int i,num[10];
    int min[10];

    for(i=0;i<10;i++)
    {
        printf("%d. Enter a number:",i+1);
        scanf("%d",&num[i]);
    }
    min[10]=num[0];
    for(i=0;i<10;i++)
    {
        if(min[10]>num[i])
        {
            min[10]=num[i];
        }
    }
    printf("Minimum among inputs is %d",min[10]);
}

9.	WAP to calculate the frequency of each element of an array.

# include <stdio.h>
int main()
{
  int num[10],count,count1,i,n,j,k;
  printf("Enter no. of elements: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      printf("%d. Enter a number:",i+1);
      scanf("%d",&num[i]);
  }
  for (i=0;i<n;i++)
  {
      count=0;
      for(j=0;j<n;j++)
      {
          if(num[i]==num[j])
          {
              count++;
          }
          
      }
      count1=0;
      for(int j=0;j<i+1;j++)
      {
            if(num[i]==num[j])
             {
                  count1++;
            }
      } 
     if(count1<2) 
       printf("\n %d is repeated %d times.",num[i],count);    
  }
  return 0;
  
}

10.	WAP to read 10 elements in an array and sort them in ascending order.

# include <stdio.h>
int main()
{
    int i,j,temp;
    int num[10];
    for(i=0;i<10;i++)
    {
        printf("\n%d.Enter number:",i+1);
        scanf("%d",&num[i]);
    }
   printf("\nnumbers: ");
    for(i=0;i<10;i++)
    {
        printf("%d ",num[i]);
    }
    for (i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(num[j]>num[i])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    printf("\nAscending order: ");
    for(i=0;i<10;i++)
    {
        printf("%d ",num[i]);
    }
  return 0;
}

11.	WAP to read 10 numbers in an array and sort them in descending order.

# include <stdio.h>
int main()
{
    int i,j,temp;
    int num[10];
    for (i=0;i<10;i++)
    {
        printf("%d.Enter a number:",i+1);
        scanf("%d",&num[i]);
    }
    printf("\nnumbers: ");
    for(i=0;i<10;i++)
    {
        printf("%d ",num[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
         if(num[j]<num[i])
         {
             temp=num[i];
             num[i]=num[j];
             num[j]=temp;
         }
        }
    }
    printf("\nDescending Order: ");
    for(i=0;i<10;i++)
    {
        printf("%d ",num[i]);
    }
    return 0;
}
12.	WAP to insert new value in the array (sorted list).

# include <stdio.h>
int main()
{
    int a[50],i,j,n,pos,num;
    printf("Enter size of array: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("%d.Enter a number: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter index where you want to add a number: ");
    scanf("%d",&pos);
    printf("Enter a number to add: ");
    scanf("%d",&num);

    for(i=n-1;i>pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=num;
    n++;
    printf("--> %d added to array(sorted list) is : ",num);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}




