#include <stdio.h>
#include <math.h>

int BinarySearch(int arr[], int l, int r, int key)
{
    int m;
    if (l>r)
    {
        return -1;
    }
    else
    {
        m = floor((l+r)/2);

        if (arr[m]==key)
        {
            return m;
        }
        else if (key < arr[m])
        {
            return BinarySearch(arr,l,m-1,key);
        }
        else
        {
            return BinarySearch(arr, m+1, r, key);
        }
    }
}
int main()
{
    int arr[] = {1, 2 , 3, 4, 5, 6, 7, 8, 9};
    int key, n = sizeof(arr)/sizeof(arr[0]);
    printf("Enter element to search: ");
    scanf("%d",&key);
    int ret = BinarySearch(arr, 0, n-1, key);
    if (ret != -1)
        printf("Element is found at index: %d", ret);
    else
        printf("Element not found.\n");
    return 0;
}