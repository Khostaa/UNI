// Ordinary Differential Equation using Fourth Order Runge Kutta(RK) Method Algorithm
#include <stdio.h>

#define f(x,y) (y*y-x*x)/(y*y+x*x)

int main()
{
    float x0,y0,h,xn; // initial conditions x0 and y0
    // h - step size
    // xn - calculation point
    // n = no. of steps
    int n;
    printf("Enter the initial values( X0 and Y0): ");
    scanf("%f%f", &x0,&y0);
    printf("Enter the no. of steps: ");
    scanf("%d",&n);
    printf("Enter the value of calculation point: ");
    scanf("%f",&xn);

    h = (xn-x0)/n;
    float k1,k2,k3,k4,k,yn;

    for(int i=0;i<n;i++)
    {
        k1 = h * f(x0,y0);
        k2 = h*f(x0+h/2,y0+k1/2);
        k3 = h*f(x0+h/2,y0+k2/2);
        k4 = h*f(x0+h,y0+k3);

        k = (k1+2*k2+2*k3+k4)/6;

        yn = y0 + k;
        x0 = x0 + h;
        y0 = yn;
    } 
    
    printf("Result is %.3f", yn);
    return 0;
}
