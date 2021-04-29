//c언어 FSB/RTL공격
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char * argv[])
{
    char buf[20];
    strcpy(buf,argv[1]);
    printf(buf);
    setuid(0);
    system("bin/sh");
}
