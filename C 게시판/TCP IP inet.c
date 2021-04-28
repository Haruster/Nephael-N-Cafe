#include <winsock2.h>
#include <stdio.h>
#include <windows.h>

#define MAXLINE 256
int main(int argc, char **argv)
{
  WSADATA wsaData;
  int iResult;

  unsigned int ipaddr = 0;

  if(argc != 2)
  {
   printf("Usage : %s [internet address]\n", argv[0]);
   return 1;
  }

  iResult = WSAStartup(MAKEWORD(2,2), &wsaData);
  if(iResult != 0)
  {
   printf("WSAStartup failed: %d\n", iResult);
   return 1;
  }

  ipaddr = inet_addr(argv[1]);
  printf("inet_addr( ) : %s -> %d\n", argv[1],ipaddr);
  printf("inet_ntoa( ) : %d -> %s\n", ipaddr, inet_ntoa(*(struct in_addr*)&ipaddr));

  WSACleanup( );

  return 0;
}
