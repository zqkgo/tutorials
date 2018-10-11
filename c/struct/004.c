#include <stdio.h>
#include <stdlib.h>

#define CAP 20

// sequence list
typedef struct SList
{
    int *arr;
    int len;
    int cap;
}SList;

int DeleteFrom(SList *list, int start, int amount);
void PrintOut(SList *list);


int main() 
{
    int arr[CAP] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

    SList *list;
    list = (SList *)malloc(sizeof(struct SList));
    list->arr = arr;
    list->len = 15;
    list->cap = CAP;

    PrintOut(list); // 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 
    DeleteFrom(list, 3, 5);
    PrintOut(list); // 1 2 3 9 10 11 12 13 14 15
}

// delete amount elements from start
int DeleteFrom(SList *list, int start, int amount)
{
    if (start > list->len || start + amount > list->len) {
        return 0;
    }
    // raining
    for (int i = 0; i < amount; i++) {
        for (int k = start; k < list->len; k++) {
            list->arr[k] = list->arr[k+1];
        }
        list->len--;
    }
    return 1;
}

void PrintOut(SList *list)
{
    for (int i = 0; i < list->len; i++) {
        printf("%d ", list->arr[i]);
    }
    printf("\n");
}


