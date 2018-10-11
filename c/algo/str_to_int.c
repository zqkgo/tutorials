#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>

long int StrToInt(char *str);
long int test();

int main() {
  printf("最大正数: %u 最大负数: %d\n", UINT_MAX, INT_MIN);
  char *str_1 = "4294967293";
  printf("4294967293\t-> %ld\n", StrToInt(str_1));

  char *str_3 = "4294967296";
  printf("4294967296\t-> %ld\n", StrToInt(str_3));

  char *str_4 = "-1234";
  printf("-1234\t\t-> %ld\n", StrToInt(str_4));

  char *str_5 = "-2147483647";
  printf("-2147483647\t-> %ld\n", StrToInt(str_5));

  char *str_6 = "-2147483649";
  printf("-2147483649\t-> %ld\n", StrToInt(str_6));
}


long int StrToInt(char *str)
{
  unsigned int max = UINT_MAX;  // 正数最大值
  int min = INT_MIN; // 负数最小值
  long int n = 0; // 存放最后和中间结果

  // 判空
  if (str == 0) {
    return 0;
  }

  // 处理空格
  while(*str == ' ') {
    str++;
  }
  
  int sign = 1;
  if (*str == '+' || *str == '-') {
    if (*str == '-') {
      sign = -1;
    }
    str++;
  }

  while (isdigit(*str)) {
    int c = *str - '0';
    // 处理溢出
    if (sign > 0 && ((n > max / 10) || (n == max / 10 && c > max % 10))) {
      n = max;
      break;
    }
    if (sign < 0 && ((n > (unsigned)min/10) || (n == (unsigned)min/10 && c > (unsigned)min % 10))) {
      n = (unsigned)min;
      break;
    }
    n = n * 10 + c;
    str++;
  }

  n = sign > 0 ? n : -n;

  return n;
}

long int test()
{
  return -1234;
}