#include <stdio.h>
#include <stdlib.h>
// 带typedef的struct
// 使用的时候省去struct关键字
typedef struct {
    char *name;
    char *color;
} Fruit;

// 成员可以包含指向当前结构体的指针
typedef struct Node {
    int data;
    struct Node *next;
} Node;

// 不带typedef的struct
// 使用的时候需要struct关键字
typedef struct Person {
    char *name;
} Person;

int main()
{
    Fruit *apple;
    apple = malloc(sizeof(Fruit));
    apple->name = "APPLE";
    printf("%s \n", apple->name);

    struct Person *xiaoming;
    xiaoming = malloc(sizeof(struct Person));
    xiaoming->name = "XIAOMING";
    printf("%s \n", xiaoming->name);

    struct Node *n1, *n2;
    n1 = malloc(sizeof(struct Node));
    n2 = malloc(sizeof(struct Node));
    n1->data = 1;
    n1->next = n2;
    n2->data = 2;
    printf("%d \n", n1->next->data);
}