#include <stdio.h>
void addOne (int *n);
int main()
{
	int a = 10;
	addOne(&a);
	printf("a now is %d\n", a);
}

void addOne(int *n) {
	(*n)++;
}
