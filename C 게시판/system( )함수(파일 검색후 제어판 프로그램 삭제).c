//system( )함수(파일 검색후 제어판 프로그램 삭제)
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
 puts(" \n system 함수 \n");
 puts(" *  tree(파일확인) 함수 * ");
 system("tree");
 puts(" * appwiz.cpl(제어판) * ");
 system("appwiz.cpl");
}
