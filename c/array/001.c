#include <stdio.h>

int main()
{
	char my_char = 'u';
	printf("sizeof value of my_char is: %lu\n", sizeof(my_char));

	int my_int = 68;
	printf("sizeof value of my_int is: %lu\n", sizeof(my_int));

	int my_arr[] ={100,3000,5};
	printf("sizeof value of my_arr is: %lu\n", sizeof(my_arr)); // 3 * 4

	int arr_count;
	printf("sizeof value of my_arr is: %lu\n", sizeof(my_arr)/sizeof(my_arr[0])); // 3 * 4 / 4
}
