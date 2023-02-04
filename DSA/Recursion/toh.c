#include <stdio.h>
void move(int n,char src,char dst,char temp)
{
    if(n==1)
    {
        printf("Move disc %d from %c to %c.\n",n,src,dst);
    
    }
    else
    {
        move(n-1,src,temp,dst);
        printf("Move Disc %d from %c to %c.\n",n,src,dst);
        move(n-1,temp,dst,src);
    }
}
int main()
{
    char a,b,t;
    a = 'A';
    b = 'C';
    t = 'B';
    int n;
    printf("\nEnter the no. of Discs: ");
    scanf("%d",&n);
    printf("A - Source\nB - Temporary\nC- Destination\n");
    move(n,a,b,t);
    printf("Success!.\n");
    return 0;
}