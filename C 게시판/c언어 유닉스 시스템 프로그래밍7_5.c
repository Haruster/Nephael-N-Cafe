#include <signal.h>
#include <stdio.h>
int main(void) {
    sigset_t st;
    sigemptyset(&st);
    sigaddset(&st, SIGINT);
    sigaddset(&st, SIGQUIT);
    if (sigismember(&st, SIGINT))
        printf("SIGINT is setting.\n");
    printf("** Bit Pattern: %x\n",st.__sigbits[0]);
    return 0;
}
