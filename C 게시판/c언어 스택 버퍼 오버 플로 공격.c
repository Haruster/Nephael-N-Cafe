//c언어 스택 버퍼 오버 플로 공격
#include<stdio.h>

#include<string.h>

#include<Windows.h>

int success(){

   while(1) {

   printf("Success!!!\n");

   Sleep(1000);

   }

   return 0;

}

int fail() {

   printf("Failed !!!");

   return 0;

}

int main() {

   char pass[4];

   printf("Input Password(3 char): ");

   scanf("%s",pass);

   if(strcmp(pass,"123") == 0)    success();

   else    fail();

   return 0;
}
