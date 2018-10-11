#include <stdio.h>
#define NUM_ROWS 5
#define NUM_COLS 5

int main()
{
	int a[NUM_ROWS][NUM_COLS] = {{1,2,3,4,4},{3,4,5,21,8},{4,3,55,111,2312}};
	
	// p指向第三行的每个元素
	int *p;
	for (p = a[2]; p < a[2]+NUM_COLS; p++) 
		printf("%d ", *p);

	printf("\n");

	return 0;
}