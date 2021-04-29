//c언어 해킹 format string 정상적인 사용
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
    char buf[20];
    strcpy(buf, argv[1]);
    printf("%s\n",buf);
    return 0;
}
