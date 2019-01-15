#include <stdio.h>
#include <stdlib.h>

typedef struct Person {
	int a;
	char *b; // char b[]; is wrong
	float c;
} Will;

int main()
{
	Will *will;
	will = malloc(sizeof(struct Person));
	will->b = "hello";
	printf("%s\n", will->b);
}