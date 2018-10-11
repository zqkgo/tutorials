#include <stdio.h>
int main() {
	int i = 10;
	printf("变量'i'占的字节数：%lu\n", sizeof(i));
	printf("变量'i'在内存中第一个字节的地址: %p\n", &i);	
    printf("------------------------------------\n"); 

    char c = 'A';
    printf("变量'c'占的字节数：%lu\n", sizeof(c));
    printf("变量'c'在内存中的地址：%p\n", &c);
    printf("------------------------------------\n");

	char *str = "hello";
	printf("第一个字符'h'在内存中的地址: %p\n", str);
	printf("第二个字符'e'在内存中的地址：%p\n", str+1);
	printf("第三个字符'l'在内存中的地址：%p\n", str+2);
	printf("第四个字符'l'在内存中的地址：%p\n", str+3);
	printf("第五个字符'o'在内存中的地址：%p\n", str+4);

	printf("第一个字符是：'%c'\n", *str);
	printf("第二个字符是：'%c'\n", *(str+1));
	printf("第三个字符是：'%c'\n", *(str+2));
	printf("第四个字符是：'%c'\n", *(str+3));
	printf("第五个字符是：'%c'\n", *(str+4));

	int a[10] = {1,2,4,5};
	printf("第一个元素为：%d\n", *a);
	printf("第一个元素的地址：%p\n", a);
	printf("第二个元素为：%d or %d\n", *(a+1), a[1]);
	printf("第二个元素的地址为：%p\n", a+1);
}