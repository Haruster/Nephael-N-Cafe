//c언어 해킹 환경변수 주소 얻기
#include <stdlib.h>

int main(int argc, char* argv[])
{
        char * addr;
        addr = getenv(argv[1]); //getenv 환경변수 주소 구하는 함수
        printf("located is %p\n",addr);
        return 0;
}
