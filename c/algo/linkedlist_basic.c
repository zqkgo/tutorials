#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
     int value;
     struct Node *next;
} Node;

typedef Node *LinkedList;

Node *newNode(int val);
void printList(LinkedList list);

int main() 
{
     struct Node *n1, *n2, *n3, *n4;
     LinkedList list;
     n1 = newNode(5);
     n2 = newNode(6);
     n3 = newNode(1);
     n4 = newNode(4);
     n1->next = n2;
     n2->next = n3;
     n3->next = n4;

     list = n1;

     printList(list);
}

Node *newNode(int val) 
{
     struct Node *node;
     node = malloc(sizeof(Node));
     node->value = val;
     node->next = NULL;
}

void printList(LinkedList list) 
{
     if (list == NULL) {
          return;
     }
     while (list != NULL) {
          printf("%d\n", list->value);
          list = list->next;
     }
}
