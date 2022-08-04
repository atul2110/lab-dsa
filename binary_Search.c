#include <stdio.h>

int binarySearch(int arr[], int key, int n)
{
    int s = 0;
    int e = n;
    int counter = 0;
    int mid;
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            counter++;
            printf("Element is found\n");
            printf("index at which Element is present :%d\n", mid);
            return counter;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
            counter++;
        }
        else
        {
            s = mid + 1;
            counter++;
        }
    }
    printf("Element not found\n");
    if (arr[mid] != key)
    {
        return counter;
    }
}

int main()
{
    int n, key;

    printf("Enter the size of Array\n");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the Array Elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the Key\n");
    scanf("%d", &key);

    int comp = binarySearch(arr, key, n);
    printf("The number of comparison done is :%d\n", comp);
    return 0;
}