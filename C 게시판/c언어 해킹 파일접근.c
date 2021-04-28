#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// open() 함수에 사용될 접근 플래그 정의된 헤더파일
#include <fcntl.h> 
// open() 함수에 사용될 권한 플래그 정의된 헤더파일
#include <sys/stat.h>

void usage(char *prog_name, char *filename) {
printf("Usage: %s <data to add to %s>\n", prog_name, filename);
exit(0);
}

void fatal(char *); // 치명적 오류를 위한 함수
void *ec_malloc(unsigned int); // 오류확인 malloc()

int main(int argc, char *argv[]) {
int fd; // 파일 서술자
char *buffer, *datafile;

buffer = (char *) ec_malloc(100);
datafile = (char *) ec_malloc(20);
strcpy(datafile, "/tmp/notes");

if(argc < 2) // 커맨드라인 인자가 없으면
usage(argv[0], datafile); // 사용법 메시지(usage()함수)를 출력하고 종료

strcpy(buffer, argv[1]); // 인자를 buffer에 복사

printf("[DEBUG] buffer @ %p: \'%s\'\n", buffer, buffer);
printf("[DEBUG] datafile @ %p: \'%s\'\n", datafile, datafile);

strncat(buffer, "\n", 1); // 맨 끝에 새로운 줄 추가

// 파일 열기
fd = open(datafile, O_WRONLY|O_CREAT|O_APPEND, S_IRUSR|S_IWUSR);
if(fd == -1)
fatal("in main() while opening file");
printf("[DEBUG] file descriptor is %d\n", fd);
// 데이터 쓰기
if(write(fd, buffer, strlen(buffer)) == -1)
fatal("in main() while writing buffer to file");
// 파일 닫기
if(close(fd) == -1)
fatal("in main() while closing file");

printf("Note has been saved.\n");
free(buffer);
free(datafile);
}

// 오류 메시지를 출력하고 종료하는 함수
void fatal(char *message) {
char error_message[100];

strcpy(error_message, "[!!] Fatal Error ");
strncat(error_message, message, 83);
perror(error_message);
exit(-1);
}

// 오류확인 malloc()
void *ec_malloc(unsigned int size) {
void *ptr;
ptr = malloc(size);
if(ptr == NULL)
fatal("in ec_malloc() on memory allocation");
return ptr;
}
