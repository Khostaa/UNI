// Simpson's 1/3 Rule

#include <stdio.h>
#include <math.h>

#define f(x) 1/(1+x*x)

int main()
{
    float ll,ul;// lower limit, upper limit
    int si,i;// sub interval, counter
    float ss; //step size
    float ig; //integration
    float k;
    printf("\nEnter value of lower limit and upper limit of intergration: ");
    scanf("%f %f",&ll,&ul);
    printf("\nEnter value of sub interval: ");
    scanf("%d",&si);
    
    //finding step size
    ss = (ul - ll)/si;
    //finding integration value
    ig = f(ll) + f(ul);
    for (i=1;i<=si-1;i++)
    {
       k = ll + i * ss;
       if(i%2 == 0)
        {
            ig = ig + 2 * f(k);
        } 
        else
        {
            ig = ig + 4 * f(k);
        }
   } 

    ig = ig * ss /3;
    printf("Result is %0.3f\n",ig);
    

    return 0;
}