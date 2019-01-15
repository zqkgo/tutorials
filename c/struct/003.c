#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node *next;
}Node;

int main()
{
	struct Node *first, *second, *third;
	first = malloc(sizeof(struct Node));
	second = malloc(sizeof(struct Node));
	third = malloc(sizeof(struct Node));

	first->data = 1;
	first->next = second;
	
	second->data = 2;
	second->next = third;
	
	third->data = 3;
	third->next = NULL;

	struct Node *node;
	node = first;
	while (node != NULL) {
		printf("%d\n", node->data);
		node = node->next;
	}

	return 0;
}