#include "stdafx.h"
#include <iostream>

//아래 두 헤더파일이 필요할 수도 있다.
//#include <stdlib.h>
//#include <string.h>

using namespace std;

char * MakeStrAdr(int len)
{
char * str = (char*)malloc(sizeof(char)*len);
return str;
}

int main()
{
char * str = MakeStrAdr(20);
strcpy_s(str,20,"I'm so happy");
cout << str << endl;
free(str);
return 0;
}
