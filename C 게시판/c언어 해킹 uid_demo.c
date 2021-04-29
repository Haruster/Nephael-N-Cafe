//c언어 해킹 uid_demo.c
#include <stdio.h>

int main()
{
   printf("real uid: %d\n", getuid());
   printf("effective uid: %d\n", geteuid());
}
