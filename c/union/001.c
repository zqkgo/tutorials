#include <stdio.h>
#include <string.h>
 
union Data {
   int i;
   float f;
   char str[20];
};


/* zval.u1.v.type_flags */
#define IS_TYPE_CONSTANT         (1<<0)
#define IS_TYPE_REFCOUNTED       (1<<2)
#define IS_TYPE_COPYABLE         (1<<4)
 
int main( ) {

   union Data data;        

   data.i = 10;
   data.f = 220.5;
   strcpy( data.str, "C Programming");

   printf( "data.i : %d\n", data.i);
   printf( "data.f : %f\n", data.f);
   printf( "data.str : %s\n", data.str);
   strcpy( data.str, "hello world");
   printf( "data.i : %d\n", data.i);
   printf( "data.f : %f\n", data.f);
   printf( "data.str : %s\n", data.str);


   printf("%d %d %d\n", IS_TYPE_CONSTANT, IS_TYPE_REFCOUNTED, IS_TYPE_COPYABLE);


   return 0;
}