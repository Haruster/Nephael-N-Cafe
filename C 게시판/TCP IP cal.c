#include <winsock2.h>
#include <stdio.h>

#define PORT 3600
#define IP "127.0.0.1"

struct cal_data
{
    int left_num;
    int right_num;
    char op;
    int result;
    short int error;
};

int main(int argc, char **argv)
{
    WSADATA WSAData;
    SOCKADDR_IN addr;
    SOCKET s;
    int len;
    int sbyte, rbyte;
    struct cal_data sdata;
    if (argc != 4)
    {
     printf("Usage : %s [num1] [num2] [op]\n", argv[0]);
     return 1;
    }

    ZeroMemory((void *)&sdata, sizeof(sdata));
    sdata.left_num = atoi(argv[1]);
    sdata.right_num = atoi(argv[2]);
    sdata.op = argv[3][0];

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

    if ( connect(s, (struct sockaddr *)&addr, sizeof(addr)) == SOCKET_ERROR)
    {
     printf("fail to connect\n");
     closesocket(s);
     return 1;
    }

    len = sizeof(sdata);
    sdata.left_num = htonl(sdata.left_num);
    sdata.right_num = htonl(sdata.right_num);
    sbyte = send(s, (char *)&sdata, len, 0);
    if(sbyte != len)
    {
     return 1;
    }

    rbyte = recv(s, (char *)&sdata, len, 0);
    if(rbyte != len)
    {
     return 1;
    }
    if (ntohs(sdata.error != 0))
    {
     printf("CALC Error %d\n", ntohs(sdata.error));
    }
    printf("%d %c %d = %d\n", ntohl(sdata.left_num), sdata.op, ntohl(sdata.right_num), ntohl(sdata.result)); 

    closesocket(s);
    WSACleanup( );
    return 0;
}
