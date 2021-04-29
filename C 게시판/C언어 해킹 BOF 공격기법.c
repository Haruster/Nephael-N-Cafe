//C언어 해킹 BOF 공격기법
#include <stdio.h>
int main(int argc, char* argv[])
{
        char buffer[512];
        strcpy(buffer,argv[1]);
        printf("%s\n",buffer);
        return 0;
}
