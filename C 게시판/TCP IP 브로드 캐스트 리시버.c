#pragmacomment(lib, "ws2_32")
#include<winsock2.h>
#include<stdlib.h>
#include<stdio.h>

#defineLOCALPORT9000
#defineBUFSIZE512

void err_quit(char *msg){ LPVOID lpMsgBuf; FormatMessage( FORMAT_MESSAGE_ALLOCATE_BUFFER|FORMAT_MESSAGE_FROM_SYSTEM, NULL, WSAGetLastError(), MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), (LPTSTR)&lpMsgBuf, 0, NULL); MessageBox(NULL, (LPCTSTR)lpMsgBuf, msg, MB_ICONERROR); LocalFree(lpMsgBuf); exit(1);}

void err_display(char *msg){ LPVOID lpMsgBuf; FormatMessage( FORMAT_MESSAGE_ALLOCATE_BUFFER|FORMAT_MESSAGE_FROM_SYSTEM, NULL, WSAGetLastError(), MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), (LPTSTR)&lpMsgBuf, 0, NULL); printf("[%s] %s", msg, (char *)lpMsgBuf); LocalFree(lpMsgBuf);}
int main(int argc, char *argv[]){ int retval;

WSADATA wsa; if(WSAStartup(MAKEWORD(2,2), &wsa) != 0) return 1;
// socket()
SOCKET sock = socket(AF_INET, SOCK_DGRAM, 0); if(sock == INVALID_SOCKET) err_quit("socket()");
// bind()
SOCKADDR_IN localaddr; ZeroMemory(&localaddr, sizeof(localaddr)); localaddr.sin_family = AF_INET; localaddr.sin_addr.s_addr = htonl(INADDR_ANY); localaddr.sin_port = htons(LOCALPORT); retval = bind(sock, (SOCKADDR *)&localaddr, sizeof(localaddr)); if(retval == SOCKET_ERROR) err_quit("bind()");

SOCKADDR_IN peeraddr; int addrlen; char buf[BUFSIZE+1];

while(1){ 
addrlen = sizeof(peeraddr); retval = recvfrom(sock, buf, BUFSIZE, 0, (SOCKADDR *)&peeraddr, &addrlen); if(retval == SOCKET_ERROR){ err_display("recvfrom()"); continue; }

buf[retval] = '\0'; printf("[UDP/%s:%d] %s\n", inet_ntoa(peeraddr.sin_addr), ntohs(peeraddr.sin_port), buf); }
// closesocket()
closesocket(sock);

WSACleanup(); return 0;}
