#include <stdio.h>

void main()
{
    int a[10];
    int low, high, mid, flag, i, n, key;

    printf("Enter number of elements");
    scanf("%d", &n);

    for(i = 0; i<=n-1;i++)
    {
        printf("Enter value for index %d",i);
        scanf("%d",&a[i]);
    }

    low = 0;
    high = n-1;

    while (low <= high)
    {
        mid = (low + high)/2;

        if (key == a[mid])
        {
            flag = 1;
            break;
        }

        if (key < a[mid])
        {
            high = mid -1;
        }
        
        if (key > a[mid])
        {
            low = mid + 1;
        }
    }

    if (flag == 1)
    {
        printf("Key Found!...");
    }
    else
    {
        printf("Key Not Found...");
    }
}