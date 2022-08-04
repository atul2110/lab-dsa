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
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    printf("After Selection sort :\n");
    for (int i = 0; i < n; i++)
        printf("%d\t", arr[i]);
    return 0;
}