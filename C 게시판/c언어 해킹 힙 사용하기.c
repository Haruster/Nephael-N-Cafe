//c언어 해킹 힙 사용하기 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *char_ptr;  // 문자 포인터
    int *int_ptr;    // 정수 포인터
    int mem_size;

    if (argc < 2)     // 커맨드라인 인자가 없으면
        mem_size = 50; // 기본값 50 설정
    else
        mem_size = atoi(argv[1]);

    printf("\t[+] allocating %d bytes of memory on the heap for char_ptr\n", mem_size);
    char_ptr = (char *)malloc(mem_size); // 힙 메모리 할당

    if (char_ptr == NULL) {  // malloc() 실패했는지 확인
        fprintf(stderr, "Error: could not allocate heap memory.\n");
        exit(-1);
    }

    strcpy(char_ptr, "This is memory is located on the heap.");
    printf("char_ptr (%p) --> '%s'\n", char_ptr, char_ptr);

    printf("\t[+] allocating 12 bytes of memory on the heap for int_ptr\n");
    int_ptr = (int *)malloc(12); // 다시 힙 메모리 할당

    if (int_ptr == NULL) {  // malloc() 실패했는지 확인
        fprintf(stderr, "Error: could not allocate heap memory.\n");
        exit(-1);
    }

    *int_ptr = 31337; // int_ptr이 가리키는 곳에 31337 값 설정
    printf("int_ptr (%p) --> %d\n", int_ptr, *int_ptr);


    printf("\t[-] freeing char_ptr's heap memory...\n");
    free(char_ptr); // 힙 메모리 해제

    printf("\t[+] allocating another 15 bytes for char_ptr\n");
    char_ptr = (char *)malloc(15); // 추가 힙 메모리 할당

    if (char_ptr == NULL) {  // malloc() 실패했는지 확인
        fprintf(stderr, "Error: could not allocate heap memory.\n");
        exit(-1);
    }

    strcpy(char_ptr, "new memory");
    printf("char_ptr (%p) --> '%s'\n", char_ptr, char_ptr);

    printf("\t[-] freeing int_ptr's heap memory...\n");
    free(int_ptr); // 힙 메모리 해제
    printf("\t[-] freeing char_ptr's heap memory...\n");
    free(char_ptr); // 힙 메모리 해제
}
