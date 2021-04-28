#include <stdio.h>

int x = 1; //data

int main()
{
int i; //stack
int y; //stack
static int k; //bss
static int j=1; //data
char *c; //stack
c = malloc(10); //heap
y = 2; //code
return 0; //stack
}
