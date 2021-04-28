#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>
#include"dumpcode.h"
int main()
{
char *a = (char *)malloc(100);
char *b = (char *)malloc(100);
printf("|HEAP BUFFER OVERFLOW TEST_1|\n");
printf("\nINPUT: ");

scanf("%s", a);
printf("\n|RESULT|\n");
dumpcode(a,100);
dumpcode(b,100);
if(!strcmp(b,"hacker"))
{
printf("\nSUCCESS!\n");
}
else
{
printf("\nFAIL!\n");
}

free(a);
free(b);

return 0;
}
