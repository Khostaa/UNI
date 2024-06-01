#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define size 20
float a[size][size];
void input (int n)
{
    printf("Enter the matrix:\n");
    for(int i=1;i<=n;i++)
    {
        for (int j=1;j<=n+1;j++)
        {
            printf("\nEnter A[%d][%d]:",i,j);
            scanf("%f",&a[i][j]);
        }
    }
}
void display(int n)
{
    printf("Displaying Matrix: \n");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n+1;j++)
        {
            printf("%0.3f  ",a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int n;
    float x[size];
    printf("Enter the no. of unknowns: ");
    scanf("%d",&n);
    input(n);
    printf("The initial matrix is: \n");
    display(n);
    //for forward Elimination
    for(int i=1; i<=n-1;i++)
    {
        if (a[i][i] == 0.0)    
        {   
            printf("Mathematical Error!\n");
            exit(0);
        }
        for(int j=i+1;j<=n;j++)
        {
            float ratio = a[j][i]/a[i][i];
            for (int k=1;k<=n+1;k++)
            {
                a[j][k] = a[j][k]- ratio *a[i][k];
            }
        }
    }
    printf("Matrix after Forward Elimination is: \n");
    display(n);
    //for Backward Substitution
    x[n] = a[n][n+1]/a[n][n];
    for (int i= n-1; i>=1;i--)
    {
        x[i] = a[i][n+1];
        for (int j=i+1;j<=n;j++)
        {
            x[i] = x[i] - a[i][j]*x[j];
        }
        x[i] = x[i]/a[i][i];
    }
    //for displaying solution
    printf("Solutions are:\n");
    for(int i=1; i<=n; i++)
    {
        printf("x[%d]=%0.3f\n",i,x[i]);
    }


    return 0;
}