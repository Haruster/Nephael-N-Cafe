//파일 속성 변경하기
#include<stdio.h>
#include<io.h>
#include<sys/stat.h>
void main(void)
{
  char * filename="c:\\file_1.txt";
  if(_chmod(filename,_S_IREAD)!=0)
  {
    perror("파일 속성 설정에러");
  }
  else
  {
    puts("파일의 속성을 성공적으로 설정하였습니다.");
  }
}
