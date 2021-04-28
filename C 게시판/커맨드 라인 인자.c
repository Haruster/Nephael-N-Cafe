#include <stdio.h>

void usage(char *program_name) {
printf("Usage: %s <message> <# of times to repeat>\n", program_name);
exit(1);
}

int main(int argc, char *argv[]) {
int i, count;

if(argc < 3) // 인자가 3개 미만 사용됐으면
usage(argv[0]); // 사용법을 메시지로 알려주고 종료한다.

count = atoi(argv[2]); // 두 번째 인자를 정수로 변환한다.
printf("Repeating %d times..\n", count);

for(i=0; i < count; i++)
printf("%3d - %s\n", i, argv[1]); // 첫 번째 인자를 출력한다.
}
