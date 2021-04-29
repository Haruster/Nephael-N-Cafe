//c언어 해킹 FSB공격 준비
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
        char buf[256];
        strcpy(buf,argv[1]);
        printf(buf);
        return 0;
}
