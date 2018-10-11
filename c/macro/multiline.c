#include <stdio.h>

// 错误的定义方式，参数不能有类型
// #define SAY(char *name)          \
//   {                              \
//     printf("Hello %s\n", *name); \
//   }

// 正确的定义方式
// https://www.geeksforgeeks.org/multiline-macros-in-c/
#define SAY(name)                 \
  {                               \
    printf("Welcome %s\n", name); \
  }

#define PRINT_HELLO    \
  {                    \
    printf("Hello\n"); \
  }

#define MACRO(num, str)        \
  {                            \
    printf("%d", num);         \
    printf(" is");             \
    printf(" %s number", str); \
    printf("\n");              \
  }

int main()
{
  SAY("Kongoole")
  PRINT_HELLO
}