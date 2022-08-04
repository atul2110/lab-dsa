#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of Array\n");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the Array Elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    printf("After Insertion sort :\n");
    for (int i = 0; i < n; i++)
        printf("%d\t", arr[i]);
    return 0;
}
