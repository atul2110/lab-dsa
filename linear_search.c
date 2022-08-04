#include <stdio.h>
int linearSearch(int arr[], int key, int n)
{
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            counter++;
            printf("Element Found\n");
            return counter;
        }
        else
        {
            counter++;
        }
    }
    printf("Element not Found\n");
    return counter;
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

    int comp = linearSearch(arr, key, n);
    printf("The number of comparison done is :%d\n", comp);
    return 0;
}