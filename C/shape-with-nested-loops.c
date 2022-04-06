

WAP  to generate the following outputs.
a.	 *
     * *
     * * *
     * * * *
     * * * * *
#include <stdio.h>

int main()
{
    int n=5;
   for(int i=1; i<=n; i++)
   {
     for(int j=1;j<=i;j++)
     {
         printf(" * ");
     }
     printf("\n");

   }
   return 0;
}

b.	 * * * * *
     * * * *
     * * * 
     * *
     *
      #include <stdio.h>

      int main()
      {
       int n=5;
       for(int i=1; i<=n; i++)
       {
        for(int j=i;j<=n;j++)
        {
         printf(" * ");
         }
          printf("\n");

         }
        return 0;
    }

c.	          *
            * *
          * * *
        * * * *
      * * * * *
         #include <stdio.h>

         int main()
        {
         int n=5;
         for(int i=1; i<=n; i++)
        {
         for(int j=i;j<=n;j++)
        {
          printf(" ");
         }
        for(int j=1;j<=i;j++)
        {
         printf("*");
        }
         printf("\n");
        }
        return 0;
        }

d.	* * * * *
      * * * *
        * * * 
          * *
            *
#include <stdlib.h>

int main()
{
    int n;
    n=5;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("  ");
        }
        for (int j=i;j<=n;j++)
        {
            printf("* ");
        }
    printf("\n");
    }
    return 0;
}

e.	         * 
           * * * 
         * * * * *
       * * * * * * *
     * * * * * * * * *
#include <stdio.h>
int main()
{
    int n;
    n=5;
    for (int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            printf("  ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        for(int j=1;j<i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
                                                                           
A B C D E F G F E D C B A
A B C D E F   F E D C B A
A B C D E       E D C B A
A B C D           D C B A
A B C               C B A
A B                   B A
A                       A

#include<stdio.h>

	int main()
	{
	  for (int i=0; i<7; i++){
	    for (int j=0; j<7; j++){
	      if(j<7-i) printf("%c ",(char)j+65);
	      else printf("  ");
	    }
	    for (int j=0; j<6; j++){
	      if(j>i-2) printf("%c ",70-(char)j);
	      else printf("  ");
	    }
	    printf("\n");
	    }
	    return 0;
	}


g.	1
1 1
1 1 1
1 1 1 1
     1 1 1 1 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n=5;
  for(int i=1;i<=5;i++)
  {
      for (int j=1;j<=i;j++)
      {
          printf("1");
      }
      printf("\n");
  }
  return 0;
}  
h.	      1
          1 2 
          1 2 3
          1 2 3 4
          1 2 3 4 5   

            #include <stdio.h>
              int main()
              {
              int n=5,p;
               for(int i=1;i<=n;i++)
             {
              for(int j=0;j<i;j++)
             {
               p=j+1;
               printf("%d", p);
              }
              printf("\n");
              }
              return 0;
              } 

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

#include <stdio.h>


int main()
{

        int n=5;
        for(int i=1;i<=n;i++)
        {
            for (int j=0;j<i;j++)
            {
                printf("%d ",i);
            }
           printf("\n");

        }

    return 0;
}

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

#include <stdio.h>

int main()
{
   int n=5,m=0;
   for(int i=1;i<=n;i++)
   {
       for (int j=0;j<i;j++)
       {
           m++;
           printf("%d ",m);
       }
       printf("\n");
   }
   return 0;
     }
                                                     

                  
k.	      1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1
  1 2 3 4 5 4 3 2 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=5,m;
   for(int i=1;i<=n;i++)
           {
        for(int j=i;j<=n;j++)
       {
          printf("  ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        for(int j=i-1;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("\n");


    }

    return 0;
}         

l.	 
1
2 6
3 7 10
4 8 11 13
5 9 12 14 15

#include <stdio.h>
int main()
{
    int n=5,x,y;
    for(int i=1;i<=n;i++)
    {
        printf("%d ",i);
                   x=4; y=i;
                  for(int j=1;j<i;j++)
    {
                 y=x+y;
      printf("%d ",y);
      x--;
    }
                printf("\n");
    }
    return 0;
}

1 3 5 7 9
3 5 7 9
5 7 9
7 9 
9
  
#include <stdio.h>

int main()
            {
   for (int i=1;i<11;i+=2)
    {
         for(int j=i;j<11;j+=2)
         {
                      printf("%d ",j);
         }
     printf("\n");
    }
    return 0;
}





n.
12345
2345
345
45
5
#include<stdio.h>
           int main()
{
    for (int i=1;i<=5;i++)
    {
    
        for (int j=i;j<=5;j++)
        {
            printf("%d",j);
    
        }
        printf("\n");
    }
    return 0;
}

 

o. 1 1 1 1 1
   0 0 0 0 0
   1 1 1 1 1
   0 0 0 0 0
   1 1 1 1 1
       #include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for (int j=1;j<=5;j++)
        {
            if(i%2==1)
            {
                printf("1 ");
            }
            else
            {
              printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}
                                                  
p.
           1 0 1 0 1
           0 1 0 1 0
           1 0 1 0 1
           0 1 0 1 0
           1 0 1 0 1
        #include <stdio.h>
        int main()
       {
       int n=1;
       for(int i=1;i<=5;i++)
     {
        for(int j=1;j<=5;j++)
        {
         if(i%2==1)
         {
             if(j%2==1)
             {
                 printf("1 ");
             }
             else
             {
                 printf("0 ");
             }
         }
         else
         {
             if(j%2==1)
             {
                 printf("0 ");
             }
             else
             {
                 printf("1 ");
             }
         }
        }
        printf("\n");
    }
    return 0;

}


                                                


