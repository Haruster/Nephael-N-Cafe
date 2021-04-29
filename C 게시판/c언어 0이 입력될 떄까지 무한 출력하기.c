#include<stdio.h>
int main(void)
{
    int a=-1;
    {
        while(a!=0)
        {
            scanf("%d", &a);
            if(a!=0)
            printf("%d\n",a);
        }
    }
}
