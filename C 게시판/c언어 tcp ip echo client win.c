#include <winsock2.h>
#include <stdio.h>

#define PORT         3500
#define IP           "127.0.0.1"

int main( )
{
    WSADATA      WSAData;
    SOCKADDR_IN addr;
    SOCKET s;
    char buffer[1024];
    int readbytes;
    int i, len;

    if (WSAStartup(MAKEWORD(2,0), &WSAData) != 0)
    {
     return 1;
    }

    s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

    if (s == INVALID_SOCKET)
    {
     return 1;
    }

    addr.sin_family = AF_INET;
    addr.sin_port = htons(PORT);
    addr.sin_addr.S_un.S_addr = inet_addr(IP);

    if (connect(s,(struct sockaddr *)&addr, sizeof(addr)) == SOCKET_ERROR)
    {
     printf("fail to connect\n");
     closesocket(s);
     return 1;
    }

    printf("enter messages\n");

    for(i=0; 1; i++)
    {
     buffer[i] = getchar( );
     if (buffer[i] == '\n')
     {
         buffer[i++] = '\0';
         break;
     }
    }

    len = i;

    printf("send messages (%d bytes)\n", len);
    send(s, buffer, len, 0);

    for(readbytes=0; readbytes<len;)
     readbytes += recv(s, buffer+readbytes, len-readbytes, 0);

    printf("recv messages = %s\n", buffer);

    closesocket(s);
    WSACleanup( );
    return 0;
}
