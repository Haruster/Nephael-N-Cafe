#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
int value = 5;
char buffer_one[8], buffer_two[8];

strcpy(buffer_one, "one"); /* 버퍼1에 one 넣기 */
strcpy(buffer_two, "two"); /* 버퍼2에 two 넣기 */

printf("[BEFORE] buffer_two is at %p and contains \'%s\'\n", buffer_two, buffer_two);
printf("[BEFORE] buffer_one is at %p and contains \'%s\'\n", buffer_one, buffer_one);
printf("[BEFORE] value is at %p and is %d (0x%08x)\n", &value, value, value);

printf("\n[STRCPY] copying %d bytes into buffer_two\n\n", strlen(argv[1]));
strcpy(buffer_two, argv[1]); /* 첫 인자를 버퍼2에 복사 */

printf("[AFTER] buffer_two is at %p and contains \'%s\'\n", buffer_two, buffer_two);
printf("[AFTER] buffer_one is at %p and contains \'%s\'\n", buffer_one, buffer_one);
printf("[AFTER] value is at %p and is %d (0x%08x)\n", &value, value, value);
}
