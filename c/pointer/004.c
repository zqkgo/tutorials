#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "hello PHP", str2[10];
	
	// 必须将str4指向一个已知大小的字符数组
	char str3[10], *str4 = str3;
	//char *str4;
	//str4 = str3;
	
	// str1拷贝到str2，返回值拷贝到str4
	strcpy(str4, strcpy(str2, str1));

	// print str2
	printf("str2 is '%s'\n", str2);
	
	// print str4
	printf("str4 is '");
	for (; *str4 != '\0'; str4++)
		printf("%c", *str4);
	printf("'\n");

	return 0;
}