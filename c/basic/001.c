// scope
#include <stdio.h>
int scope1();
int scope2();

int main()
{
	printf("%d\n", scope1());
	printf("%d\n", scope2());
}

int scope1()
{
	int i;
	for (i=0; i<100; i++)
		;
	return i;
}

int scope2()
{
	for (int i; i<100; i++)
		;

	return i; // wrong, the scope of i is limited to the for block(block scope)
}