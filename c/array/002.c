#include <stdio.h>

void swap(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");
}

int main()
{
	int arr[] = {2,3,4,5,6};
	int n = sizeof(arr)/sizeof(arr[0]);

	printArray(arr, n);

	swap(&arr[0], &arr[4]);

	printArray(arr, n);
}
