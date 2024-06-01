// Simpson's 3/8 Rule

#include <stdio.h>
#include <math.h>
#define f(x) 1/(1+x*x)

int main()
{
    float ll, ul, ss, ig,k; //lower limit, upper limit,step size,integration
    int si,i; // sub interval

    printf("\nEnter lower limit of integration: ");
    scanf("%f",&ll);
    printf("\nEnter upper limit of integration: ");
    scanf("%f",&ul);
    printf("\nEnter value of sub interval: ");
    scanf("%d",&si);

    /* calculation */
    ss = (ul - ll)/si;
    ig = f(ll) + f(ul);

    for (int i = 1; i<=si-1;i++)
    {
        k = ll + i * ss;
        if (i % 3 == 0)
            ig = ig + 2*f(k);
        else    
            ig = ig + 3*f(k);       
    }
    ig = ig * ss *3/8;
    printf("\nResult of integration is: %.3f",ig);
    return 0;
}