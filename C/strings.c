
1.	WAP to find the length of the given string without using library function.

# include <stdio.h>
int main()
{
    int i,count=0;
    char s[50];
    printf("Enter a string: ");
    gets(s);
    for(int i=0;s[i]!='\0';i++)
    {
        count++;
    }
    printf("The length of given sting is %d",count);
    return 0;
}

2.	WAP to copy the content of a given string to another string without using library function.

#include <stdio.h>

int main()
{
    int i;
    char s[50],t[50];
    printf("Enter a string: ");
    gets(s);
    for( i=0;s[i]!='\0';i++)
    {
      t[i]=s[i];
    }
    t[i]='\0';
    printf("copied string is : %s",t);
    return 0;
}
             
3.	WAP to reverse the given string without using library function.

# include <stdio.h>
int main()
{
    int i,count=0,j;
    char a[100],b[100];
    printf("Enter a string to reverse: ");
    gets(a);
    for( i=0;i<100,a[i]!='\0';i++)
    {
        j=count++;
    }
    for (i=0,j;i<100,j>=0;i++,j--)
    {
        b[i]=a[j];
    }
    printf("reversed string is: %s",b);
    return 0;
}
4.	WAP to concatenate two given strings without using library function.

# include <stdio.h>
int main()
{
    int i,j=0;
    char a[100],b[50];
    printf("Enter a string: ");
    gets(a);
    printf("Enter another string: ");
    gets(b);
    for(i=0;a[i]!='\0';i++);
    for(j=0;b[j]!='\0';j++,i++)
    {
        a[i]=b[j]; 
    }
     a[i]='\0';   /*indicates end of string.*/
    printf("string after concatenation is %s",a);
    return 0;
}

5.	WAP to compare two given strings without using library function.

#include <stdio.h>
int main()
{
    int i,j=0;
    char a[30],b[30];
    printf("Enter a string:");
    gets(a);
    printf("Enter another string:");
    gets(b);
    for(i=0;a[i]!='\0';i++)
    {
        j++;
    }
    for(i=0;i<j;i++)
    {
        if(a[i]!=b[i])
        {
            printf("\nStrings are not equal.");
            break;
        }
        else if(i==j-1)
        {
            printf("\nStrings are equal.");
        }
    }
    return 0;
}

6.	WAP to convert all the characters in given string to uppercase.

# include <stdio.h>
int main()
{
    int i;
    char str[20];
    printf("Enter a String: ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if (str[i]>=97 && str[i]<=122)
        {
            str[i]=str[i]-32;
        }
        else
        {
            str[i];
        }
    }
    printf("uppercase string: %s",str);
  
}

7.	WAP to find the number of vowels, consonants, digits and whitespaces in given string.

# include <stdio.h>
int main()
{
    int i,count1,count2,count3,count4;
    char str[30];
    printf("Enter a string:");
    gets(str);
    count1=count2=count3=count4=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' 
           || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
           count1++;
        else if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
           count2++;
        else if(str[i]>=48 && str[i]<=57)
            count3++;
        else if(str[i]==' ')
             count4++;
    }
    printf("The given string has %d vowels, %d consonants, %d digits & %d whitespaces.",count1,count2,count3,count4);
    return 0;
}

8.	WAP to count the number of words in given line of text.

# include <stdio.h>
int main()
{
    int i,count=0;
    char str[30];
    printf("Enter a line of text:");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if (str[i]==' '&& str[i+1] !=' ')
        {
          count++;
        }
              
    }
    printf("The number of words in given line of text is %d.\n", count + 1 );
    return 0;
}
9.	WAP to print whether the given word is palindrome or not.

# include <stdio.h>
int main()
{
    int i,j,k,count=0;
    char s[25];
    printf("Enter a string:");
    gets(s);
    for(k=0;s[k]!='\0';k++)
    {
        count++;
    }
    j=count;
    for(i=0,j;i<j;i++,j--)
    {
        if(s[i]!=s[j-1])
        {
            printf("%s is not a palindrome.\n",s);
            break;
        }
        else if(s[i]==s[j-1]) 
        {

            if(i==j || i==j-1)
            {
             printf("%s is a palindrome.",s);
             break;
            }
            else
            {
             printf("%s is a palindrome.",s);
             break;
            }
            
        }

    }
    return 0;
}

10.	WAP to sort n number of strings in lexicographical order (dictionary order).

# include <stdio.h>
#include <string.h>
int main()
{ 
    int i,j,n;
    printf("Enter no. of strings you want: ");
    scanf("%d",&n);
    char str[n][30],temp[30];
    for (i=0;i<n;i++) /*taking strings from users*/
    {
        printf("\n%d.Enter string: ",i+1);
        scanf("%s",str[i]);
    }
    /*sorting begins*/
    for(i=1;i<n;i++) /*outer loop begins*/
    {
        for(j=1;j<=n-i;j++)/*inner loop begins*/
        {
            if(strcmp(str[j-1],str[j])>0)/*compares two strings*/
            {/*if true enters loopp*/
                strcpy (temp,str[j-1]);  /*copies aagadi ko element to temporary element*/
                strcpy (str[j-1],str[j]);/*copies pachadi ko element to aagadi*/
                strcpy (str[j],temp);/*copies temp element to pachadi ko element*/
            }/*condition stops*/
        }/*inner loop ends*/
    }/*outer loop ends*/
    /*sorting ends*/
    printf("\nDictionary order:");
    for(i=0;i<n;i++)
    {
        printf("\n%s",str[i]);
    }
    return 0;


}
 

