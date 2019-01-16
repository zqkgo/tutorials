#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
     int val;
     struct Node *left;
     struct Node *right;
} Node;

Node *createNode(int val);
void PreOrder(Node *root);

int main() {
     struct Node *n1,*n2,*n3,*n4,*n5,*n6,*n7;
     struct Node *root;
     n1 = createNode(8);
     n2 = createNode(6);
     n3 = createNode(10);
     n4 = createNode(4);
     n5 = createNode(7);
     n6 = createNode(9);
     n7 = createNode(11);
     
     n1->left = n2;
     n1->right = n3;

     n2->left = n4;
     n2->right = n5;

     n3->left = n6;
     n3->right = n7;

     root = n1;
     PreOrder(root);
     
     return 0;
}

Node *createNode(int val)
{
     struct Node *node;
     node = malloc(sizeof(Node));
     node->val = val;
     node->left = NULL;
     node->right = NULL;
     return node;
}

void PreOrder(Node *root)
{
     printf("%d\n", root->val);
     if (root->left != NULL) {
          PreOrder(root->left);
     }
     if (root->right != NULL) {
          PreOrder(root->right);
     }
}