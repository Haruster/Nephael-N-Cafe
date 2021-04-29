#include <stdio.h>
 
int main(){
    char name[20];
    int age;
    char n[20];
    float key;
 
    scanf("%s",name);
    scanf("%d",&age);
    scanf("%s",n);
    scanf("%g",&key);
 
    printf("%s\n%d\n%s\n%g\n",name,age,n,key);
}
