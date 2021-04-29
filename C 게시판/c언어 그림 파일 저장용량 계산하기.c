#include <stdio.h>
int main(){
    int w, h, b;
    double result;
    scanf("%d %d %d", &w, &h, &b);
    result = w * h * b / 8;
    result = result / 1024;
    result = result / 1024;
    printf("%.2f MB", result);
 
    return 0;
}
