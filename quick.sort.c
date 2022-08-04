#include <stdio.h>

void swap(int arr[], int i, int j)
{

	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int partition(int arr[], int l, int r)
{

	int pivot = arr[r];
	int i = l - 1;
	for (int j = l; j < r; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(arr, i, j);
		}
	}
	swap(arr, i + 1, r);
	return i + 1;
}

void quicksort(int arr[], int l, int r)
{
	if (l < r)
	{
		int pi = partition(arr, l, r);
		quicksort(arr, l, pi - 1);
		quicksort(arr, pi + 1, r);
	}
}
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
	quicksort(arr, 0, n - 1);
	printf("After quicksort :\n");
	for (int i = 0; i < n; i++)
		printf("%d\t", arr[i]);
	return 0;
}
