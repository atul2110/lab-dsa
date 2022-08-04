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

    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
    printf("After Bubble sorting :\n");
    for (int i = 0; i < n; i++)
        printf("%d\t", arr[i]);
    return 0;
}