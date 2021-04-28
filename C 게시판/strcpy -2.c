#include<stdio.h>
#include<string.h>
void main()
{
 char arr1[20] = { "program start" };
 char arr2[20];
 char arr3[20];
 char arr4[20];
 strcpy_s(arr2, arr1);
 printf("strcpy( ) arr2 = %s\n\n", arr2);
 strncpy_s(arr3, arr1, strlen(arr1) + 1);
 printf("strncpy( ) arr3 = %s\n\n", arr3);
 strncpy_s(arr4, arr1, strlen(arr1));
 printf("strncpy( ) arr4 = %s\n\n", arr4);
}                         
