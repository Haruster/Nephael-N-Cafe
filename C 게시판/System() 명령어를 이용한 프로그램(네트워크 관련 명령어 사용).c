//System() 명령어를 이용한 프로그램(네트워크 관련 명령어 사용)
//system( )함수
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
 puts(" \n system 함수 \n");
 puts(" * ipconfig (ip체크) 함수 * ");
 system("ipconfig");
 puts(" * ping(ping 확인) * ");
 system("ping");
}
