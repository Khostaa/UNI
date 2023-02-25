//implementation of Lagrange Interpolation
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    float x[100],y[100],xp,yp;
    printf("\nEnter the value of n: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        printf("\nEnter x[%d]: ",i);
        scanf("%f",&x[i]);
        printf("\nEnter y[%d]: ",i);
        scanf("%f",&y[i]);
    }
    printf("Enter xp: ");
    scanf("%f",&xp);
    
    yp = 0;

    for (int i = 1; i<=n;i++)
    {
        float p = 1.0;
        for(int j=1;j<=n;j++)
        {
            if(i!=j)
            {
                p = p* (xp - x[j])/(x[i]-x[j]);
            }
        }
        yp = yp + p * y[i];
    }

    printf("\nThe required value of yp is %.3f",yp);

    return 0;
}