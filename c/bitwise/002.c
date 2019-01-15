#include <stdio.h>
#include <string.h>
// 定义宏，左移一位整体乘以2
#define IS_TYPE_CONSTANT         (1<<0) // 1  1 -> 1
#define IS_TYPE_REFCOUNTED       (1<<2) // 4  1 -> 100
#define IS_TYPE_COPYABLE         (1<<4) // 16 1 -> 10000
 
int main() {
   printf("%d %d %d\n", IS_TYPE_CONSTANT, IS_TYPE_REFCOUNTED, IS_TYPE_COPYABLE);
   printf("%d %d\n", 4 << 1, 4 << 2); // 8, 16
   return 0;
}