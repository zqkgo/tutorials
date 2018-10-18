#include <stdio.h>
#include <string.h>
// 定义宏，左移一位整体乘以2
#define IS_TYPE_CONSTANT         (1<<0) // 1
#define IS_TYPE_REFCOUNTED       (1<<2) // 4
#define IS_TYPE_COPYABLE         (1<<4) // 16
 
int main() {
   printf("%d %d %d\n", IS_TYPE_CONSTANT, IS_TYPE_REFCOUNTED, IS_TYPE_COPYABLE);
   return 0;
}