
1.	WAP to read elements in an array (3x3) and calculate the sum and average of all elements.

# include <stdio.h>

int main()
{
    int i,j,num[3][3],sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\nEnter element[%d][%d]:",i,j);
            scanf("%d",&num[i][j]);
            sum+=num[i][j];
        }
    }
    printf("\nThe sum and average of given array is %d and %d",sum,sum/9);
   
    return 0;
}

2.	WAP to read elements in an array (2x3) and calculate the sum of rows.

# include <stdio.h>
int main()
{
    int i,j,sum1=0,sum2=0;
    int num[2][3];
    for(i=0;i<2;i++)
     {
         for (j=0;j<3;j++)
         {
             printf("Enter num[%d][%d]: ",i,j);
             scanf("%d",&num[i][j]);
             if(i==0)
                  sum1+=num[i][j];
             if(i==1)
                  sum2+=num[i][j];
         }
     }
     printf("Sum of element in 1st row is %d",sum1);
     printf("\nSum of elements in 2nd row is %d",sum2);
return 0;
    
}

3.	WAP to read elements in an array (3x5) and calculate sum of columns.

# include <stdio.h>
int main()
{
    int i,j,sum[]={0,0,0,0,0};
    int num[3][5];
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("Enter num[%d][%d]: ",i,j);
            scanf("%d",&num[i][j]);
            sum[j]=sum[j]+num[i][j];
        }
        
    }
    for(j=0;j<5;j++)
    {
        printf("\nSum of elements of column %d is %d.",j+1,sum[j]);
    }
    
    return 0;
}

4.	WAP to find the maximum number in an array and replace all elements with maximum number.

# include <stdio.h>
int main()
{
    int i,j,m,max;
    int n[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter n[%d][%d]:",i,j);
            scanf("%d",&n[i][j]);
            if (i==0 && j==0)
            {
                max=n[i][j];
            }
            if(n[i][j]>max)
            {
                max=n[i][j];
            }
        }
    }
    
     printf("\nMaximum value among elements of array is %d",max);
     printf("\noutput after replacing all elements with maximum value is:");
     for(i=0;i<3;i++)
     {
        printf("\n");
        for(j=0;j<3;j++)
        {
            n[i][j]=max;
            printf("%d ",n[i][j]);
        }
     }
    return 0;
}

5.	WAP to read elements in array (3x3) and calculate the sum of diagonal matrix.

# include <stdio.h>
int main()
{
    int i,j,sum=0;
    int a[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
            if (i==j)
            {
                sum+=a[i][j];
            }
        }
    }
    printf("\nThe sum of diagonal matrix is %d",sum);
    return 0;
}

6.	WAP to read elements in an array (3x3) and calculate the transpose of matrix.

# include <stdio.h>
int main()
{
    int i,j,a,b;
    int n[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter n[%d][%d]: ",i,j);
            scanf("%d",&n[i][j]);
        }
    }
    printf("\ngiven arrays is: ");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d ",n[i][j]);
        }
    }
    printf("\nThe traspose of given matrix is: ");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d ",n[j][i]);
        }
    }

return 0;


}
7.	WAP to add two given matrices (3x3) and print the resultant matrix.

 # include <stdio.h>
int main()
{
    int i,j,m,p;
    int a[3][3],n[3][3],q[m][p];
    printf("Enter elements for 1st matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements for 2nd matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter n[%d][%d]: ",i,j);
            scanf("%d",&n[i][j]);
        }
    }
    printf("The resulatant matrix is : ");
    for(i=0,m=0;i<3,m<3;m++,i++)
    {
        printf("\n");
        for(j=0,p=0;p<3,j<3;p++,j++)
        { 
           q[m][p]=a[i][j]+n[i][j];
            printf("%d ",q[m][p]);
        }
    }
    
    
    
    return 0;
}

8.	WAP to multiply two given matrices and print the resultant matrix.

# include <stdio.h>
int main()
{
    int i,j,k;
    int a[3][3],b[3][3],c[3][3];
    printf("Enter elements of 1st matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter b[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            for (k=0;k<3;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }   
            
        }
    }
     printf("The product of two given  matrices is : ");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
                printf("%d ",c[i][j]);
        }
    }
    
}



