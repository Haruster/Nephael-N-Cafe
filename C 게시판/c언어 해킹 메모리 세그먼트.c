//c언어 해킹 메모리 세그먼트
#include <stdio.h>
#include <stdlib.h>

int global_var;
int global_initialized_var = 5;

void function() {  // 데모 함수
   int stack_var; // main()에도 같은 이름의 변수가 있음

   printf("the function's stack_var is at address 0x%08x\n", &stack_var);
}


int main() {
   int stack_var; // function()에도 같은 이름의 변수가 있음.
   static int static_initialized_var = 5;
   static int static_var;
   int *heap_var_ptr;

   heap_var_ptr = (int *) malloc(4);

   // 데이터 세그먼트
   printf("global_initialized_var is at address 0x%08x\n", &global_initialized_var);
   printf("static_initialized_var is at address 0x%08x\n\n", &static_initialized_var);

   // bss 세그먼트
   printf("static_var is at address 0x%08x\n", &static_var);
   printf("global_var is at address 0x%08x\n\n", &global_var);

   // 힙 세그먼트
   printf("heap_var is at address 0x%08x\n\n", heap_var_ptr);

   // 스택 세그먼트
   printf("stack_var is at address 0x%08x\n", &stack_var);
   function();
}  
