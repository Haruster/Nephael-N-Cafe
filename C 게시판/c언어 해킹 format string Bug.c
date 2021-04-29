//c언어 해킹 format string Bug  
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
    char buf[20];
    strcpy(buf, argv[1]);
    printf(buf);
    return 0;
}
