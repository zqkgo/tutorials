#include <stdio.h>
#include <stdlib.h>

#define maxSize 100
// 顺序表
typedef struct Sqlist{
	int data[maxSize];
	int length;
} Sqlist;

int A[maxSize];
int n;

// 单链表
typedef struct LNode {
	int data;
	struct LNode *next;
} LNode;

// 双链表
typedef struct DLNode {
	int data;
	struct DLNode * prior;
	struct DLNode *next;
} DLNode;

int main()
{
	LNode *A;
	LNode B;

	A = malloc(sizeof(LNode));
	A->data = 10;

	B.data = 100;

	printf("%d\n", A->data);
	printf("%d\n", B.data);
}