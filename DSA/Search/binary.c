#include <stdio.h>
#include <math.h>

void BinarySearch(int arr[],int n, int key)
{
    int m,flag = 0, l = 0 , r = n-1;
    //repeat until pointers left and right meet each other
    while(l<=r)
    {
        m = floor((l+r)/2);
        
        if (arr[m] == key)
        {
            flag = 1;
            break;
        }
        else if(key < arr[m])
        {
            r = m - 1;
        }
        else 
        {
            l = m + 1;
        }
    }
    if (flag == 0)
    {
        printf("Element not found.\n");
    }
    else
    {
        printf("Element is found at index: %d",m);
    }
}

int main()
{
    int arr[] = {1, 2 , 3, 4, 5, 6, 7, 8, 9};
    int key, n = sizeof(arr)/sizeof(arr[0]);
    printf("Enter element to search: ");
    scanf("%d",&key);
    BinarySearch(arr, n, key);
    return 0;
}