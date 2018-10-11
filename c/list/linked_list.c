#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

typedef struct LinkedList
{
    struct Node *first;
    int len;
}LinkedList;

LinkedList *NewList();
Node *NewNode(int data);
void PrintList(LinkedList *list, int hasHead);
void AddToList(LinkedList *list, Node *node, int hasHead);

int main()
{
    LinkedList *l1, *l2;
    // 带头结点
    Node *head = NewNode(0);
    l1 = NewList(head);
    AddToList(l1, NewNode(1), 1);
    AddToList(l1, NewNode(3), 1);
    AddToList(l1, NewNode(4), 1);
    AddToList(l1, NewNode(1), 1);
    PrintList(l1, 1);
    // 不带头结点
    Node *firstEle = NewNode(1);
    l2 = NewList(firstEle);
    AddToList(l2, NewNode(23), 0);
    AddToList(l2, NewNode(32), 0);
    AddToList(l2, NewNode(55), 0);
    AddToList(l2, NewNode(78), 0);
    PrintList(l2, 0);
}

LinkedList *NewList(Node *node)
{
    LinkedList *list;
    // 分配LinkedList大小的内存并将list指向它
    list = malloc(sizeof(LinkedList));
    list->first = node;
    return list;
}

Node *NewNode(int data)
{
    Node *node;
    node = malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}

void AddToList(LinkedList *list, Node *node, int hasHead)
{
    Node *current = list->first;
    if (hasHead)
    {
        // 带头结点，首元结点为头指针（指向头结点）的下一个
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = node;
    }
    else
    {
        // 不带头结点，首元结点为头指针指向的结点
        Node *prev;
        while (current != NULL)
        {
            prev = current;
            current = current->next;
        }
        prev->next = node;
    }

    list->len++;
}

void PrintList(LinkedList *list, int hasHead)
{
    Node *current = list->first;
    if (hasHead)
    {
        while (current->next != NULL)
        {
            current = current->next;
            printf("%d ", current->data);
        }
    }
    else
    {
        while (current != NULL)
        {
            printf("%d ", current->data);
            current = current->next;
        }
    }
    printf("\n");
}