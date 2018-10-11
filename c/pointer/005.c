#include <stdio.h>

int main()
{
  // 指针s指向一个字符串
  char *s;
  s = "Hello";
  printf("%c\n", *s);
  // 指针str指向一个"指向字符串的指针"
  char **str;
  str = &(s);
  printf("%s\n", *str);   // Hello
  printf("%s\n", str[0]); // Hello
}