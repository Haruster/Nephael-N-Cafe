#include <stdio.h>
#include <time.h>

void dump_time_struct_bytes(struct tm *time_ptr, int size) {
int i;
unsigned char *raw_ptr;

printf("bytes of struct located at 0x%08x\n", time_ptr);
raw_ptr = (unsigned char *) time_ptr;
for(i=0; i < size; i++)
{
printf("%02x ", raw_ptr[i]);
if(i%16 == 15) // 매 16바이트마다 새 줄로
printf("\n");
}
printf("\n");
}

int main() {
long int seconds_since_epoch;
struct tm current_time, *time_ptr;
int hour, minute, second, i, *int_ptr;

seconds_since_epoch = time(0); // time 함수에 널 포인터 인자 넘김
printf("time() - seconds since epoch: %ld\n", seconds_since_epoch);

time_ptr = &current_time; // time_ptr을 current_time의 주소로 설정

localtime_r(&seconds_since_epoch, time_ptr);

// 구조체의 요소를 접근하는 3가지 방법
hour = current_time.tm_hour; // 직접 접근
minute = time_ptr->tm_min; // 포인터로 접근
second = *((int *) time_ptr); // 포인터 조작으로 접근

printf("Current time is: %02d:%02d:%02d\n", hour, minute, second);

dump_time_struct_bytes(time_ptr, sizeof(struct tm));

minute = hour = 0; // 분과 시 초기화
int_ptr = (int *) time_ptr;

for(i=0; i < 3; i++) {
printf("int_ptr @ 0x%08x : %d\n", int_ptr, *int_ptr);
int_ptr++; // 정수가 4바이트 이므로 int_ptr에 1을 더하면 주소가 4 증가함
} 
}
