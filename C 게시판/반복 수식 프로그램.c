#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stack>
#include<cctype>
#include<cmath>


using namespace std;
void run(char *, int);
int calculate(char*);
double score(int, int, int);
int main(void) {
 char input[10001];
 scanf_s("%s", input);
 run(input, strlen(input));
 return 0;
}
void run(char * formula, int length) {
 char string[10001] = { 0, };
 char backup[10001] = { 0, };
 int temp = 0;
 strcpy_s(string, formula);
 strcpy_s(backup, formula);
 int maxC = 0;
 double scores = 0;
 for (int b = 0; b < length; b++) {
  if (string[b] == '0' || string[b] == '9')maxC += 1;
  else if (string[b] == '5' || string[b] == '3' || string[b] == '2')maxC += 2;
  else if (string[b] == '4')maxC += 4;
  else if (string[b] == '1')maxC += 5;
 }
 for (int N = 1; N < maxC; N++) {
  for (int index = 0; index < length; index++) {
   if (string[index] == '0') {
    strcpy_s(string, backup);
    temp = string[index];
    string[index] = '6';
    if (score(calculate(formula), N, calculate(string)) > scores) { strcpy_s(backup, string); scores = score(calculate(formula), N, calculate(string)); }
    string[index] = '9';
    if (score(calculate(formula), N, calculate(string)) > scores) { strcpy_s(backup, string); scores = score(calculate(formula), N, calculate(string)); }
    else string[index] = temp;
    continue;
   }
   else if (string[index] == '2') {
    strcpy_s(string, backup);
    temp = string[index];
    string[index] = '3';
    if (score(calculate(formula), N, calculate(string)) >scores) { strcpy_s(backup, string); scores = score(calculate(formula), N, calculate(string)); }
    else string[index] = temp;
    continue;
   }
   else if (string[index] == '3') {
    strcpy_s(string, backup);
    temp = string[index];
    string[index] = '2';
    if (score(calculate(formula), N, calculate(string)) >scores) { strcpy_s(backup, string); scores = score(calculate(formula), N, calculate(string)); }
    else string[index] = temp;
    continue;
   }
   else if (string[index] == '7') {
    for (int i = 0; i < length; i++) {
     if (i == index)continue;
     string[index] = '1';
     if (string[i] == '-') {
      temp = string[i];
      string[i] = '+';
      if (score(calculate(formula), N, calculate(string)) > scores) { strcpy_s(backup, string); scores = score(calculate(formula), N, calculate(string)); break; }
      else string[i] = temp;
     }
     else if (string[i] == '1') {
      temp = string[i];
      string[i] = '7';
      if (score(calculate(formula), N, calculate(string)) > scores) { strcpy_s(backup, string); scores = score(calculate(formula), N, calculate(string)); break; }
      else string[i] = temp;
     }
     else if (string[i] == '9') {
      temp = string[i];
      string[i] = '8';
      if (score(calculate(formula), N, calculate(string)) > scores) { strcpy_s(backup, string); scores = score(calculate(formula), N, calculate(string)); break; }
      else string[i] = temp;
     }
     else if (string[i] == '5') {
      temp = string[i];
      string[i] = '9';
      if (score(calculate(formula), N, calculate(string)) > scores) { strcpy_s(backup, string); scores = score(calculate(formula), N, calculate(string)); break; }
      else string[i] = temp;
     }
     else if (string[i] == '0') {
      temp = string[i];
      string[i] = '8';
      if (score(calculate(formula), N, calculate(string)) > scores) { strcpy_s(backup, string); scores = score(calculate(formula), N, calculate(string)); break; }
      else string[i] = temp;
     }
     else if (string[i] == '6') {
      temp = string[i];
      string[i] = '8';
      if (score(calculate(formula), N, calculate(string)) > scores) { strcpy_s(backup, string); scores = score(calculate(formula), N, calculate(string)); break; }
      else string[i] = temp;
     }
     string[index] = '7';
    }
    continue;
   }
   else if (string[index] == '9') {
    strcpy_s(string, backup);
    temp = string[index];
    string[index] = '6';
    if (score(calculate(formula), N, calculate(string)) > scores) { strcpy_s(backup, string); scores = score(calculate(formula), N, calculate(string)); break; }
    else string[index] = temp;
    continue;
   }
   else if (string[index] == '+') {
    for (int i = 0; i < length; i++) {
     if (i == index)continue;
     strcpy_s(string, backup);
     string[index] = '-';
     if (string[i] == '-') {
      temp = string[i];
      string[i] = '+';
      if (score(calculate(formula), N, calculate(string)) > scores) { strcpy_s(backup, string); scores = score(calculate(formula), N, calculate(string)); break; }
      else string[i] = temp;
     }
     else if (string[i] == '1') {
      temp = string[i];
      string[i] = '7';
      if (score(calculate(formula), N, calculate(string)) > scores) { strcpy_s(backup, string); scores = score(calculate(formula), N, calculate(string)); break; }
      else string[i] = temp;
     }
     else if (string[i] == '9') {
      temp = string[i];
      string[i] = '8';
      if (score(calculate(formula), N, calculate(string)) > scores) { strcpy_s(backup, string); scores = score(calculate(formula), N, calculate(string)); break; }
      else string[i] = temp;
     }
     else if (string[i] == '5') {
      temp = string[i];
      string[i] = '9';
      if (score(calculate(formula), N, calculate(string)) > scores) { strcpy_s(backup, string); scores = score(calculate(formula), N, calculate(string)); break; }
      else string[i] = temp;
     }
     else if (string[i] == '0') {
      temp = string[i];
      string[i] = '8';
      if (score(calculate(formula), N, calculate(string)) > scores) { strcpy_s(backup, string); scores = score(calculate(formula), N, calculate(string)); break; }
      else string[i] = temp;
     }
     else if (string[i] == '6') {
      temp = string[i];
      string[i] = '8';
      if (score(calculate(formula), N, calculate(string)) > scores) { strcpy_s(backup, string); scores = score(calculate(formula), N, calculate(string)); break; }
      else string[i] = temp;
     }
     string[index] = '+';
    }
    continue;
   }
  }
 }
 printf("%s\n", string);
 return;
}
double score(int I, int N, int R) {
 if (I < abs(R))return 0;
 double result = (I - abs(R)) / (sqrt(N + 100));
 return  floor(result);
}
char *substr(char const *input, size_t start, size_t len) {
 char *ret = (char*)malloc(len + 1);
 memcpy(ret, input + start, len);
 ret[len] = '\0';
 return ret;
}
int calculate(char * formula) {
 stack<char> pStack;
 stack<int> mainStack;
 int sum = 0;
 for (int i = strlen(formula) - 1; i > -1; i--) {
  if (isdigit(formula[i])) {
   int j = i;
   while (formula[j] != '-'&&formula[j] != '+'&&j != -1)j--;
   mainStack.push(atoi(substr(formula, j + 1, i + 1)));
   i = j;
   if (j != -1)
    pStack.push(formula[j]);
  }
 }
 sum += mainStack.top();
 mainStack.pop();
 while (!pStack.empty()) {
  if (pStack.top() == '+') { sum += mainStack.top(); mainStack.pop(); pStack.pop(); }
  else if (pStack.top() == '-') { sum -= mainStack.top(); mainStack.pop(); pStack.pop(); }
 }
 return sum;
}
