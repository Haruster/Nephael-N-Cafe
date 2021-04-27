//다중 if문
#include<stdio.h>
void main(void)
{
    int switch;
    int x=10;
    scanf_s("%d",&switch);
    if(switch==1)
    x=x+1;
    else if(switch==2)
    x=x+2;
    else 
    x=100;
    printf("data [%d]\n",x);
}
