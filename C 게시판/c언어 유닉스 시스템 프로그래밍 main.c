#include <stdio.h>
extern int addnum(int a, int b);

int main(void) {
    int sum;

    sum = addnum(1, 5);
    printf("Sum 1~5 = %d\n", sum);

    return 0;
}
