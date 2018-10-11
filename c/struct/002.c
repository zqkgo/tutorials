#include <stdio.h>
#include <stdlib.h>

#define maxSize 100
// 顺序表
typedef struct 
{
	int data[maxSize];
	int length;
}Sqlist;

int A[maxSize];
int n;

// 单链表
typedef struct LNode
{
	int data;
	struct LNode *next;
}LNode;

// 双链表
typedef struct DLNode
{
	int data;
	struct DLNode * prior;
	struct DLNode *next;
}DLNode;

int main()
{
	LNode *A = (LNode*)malloc(sizeof(LNode));
	A->data = 10;

	LNode B;
	B.data = 100;

	printf("%d\n", A->data);
	printf("%d\n", B.data);
}