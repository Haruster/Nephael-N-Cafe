#include <stdio.h>
#include <string.h>

int main()
{
char string[20] = "apapple";
char* search = "app";
char* result = NULL;

result = strstr(string,search);

printf("string Addr : %p \n", string);
printf("result Addr : %p \n", result);
printf("result : %s \n", result);

return 0;
}
