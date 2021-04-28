#include <stdio.h>

int main()
{
char *bash[2];
bash[0] = "\bin\sh";
bash[1] = 0;
execve(bash[0], bash, &bash[1]);
}
