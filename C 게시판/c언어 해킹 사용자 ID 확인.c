//c언어 해킹 사용자 ID 확인 
#include<stdio.h>
int main()
{
    printf("real uid : %d\n", getuid());
    printf("effective uid : %d\n",getuid());
  
}
