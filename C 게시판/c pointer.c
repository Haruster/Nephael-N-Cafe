//c pointer
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
int main(void)
{
 int nvalue = 10;
 printf("nvalue [%X] -> [%d]\n", &nvalue, nvalue);
 int * pval_0 = &nvalue;
 const int * pval_1 = &nvalue;
 int * const pval_2 = &nvalue;
 const int * const pval_3 = &nvalue;
 printf("-------------------\n");
 printf("pval_0 : [%X] -> [%d]\n", pval_0, *pval_0);
 printf("pval_1 :[%x] -> [%d]\n", pval_1, *pval_1);
 printf("pval_2 : [%X] -> [%d]\n", pval_2, *pval_2);
 printf("pval_3 : [%x] -> [%d]\n", pval_3, *pval_3);
 *pval_0 = 100;
 pval_0 = NULL;
 printf("pval_1 :[%x] -> [%d]\n", pval_1, *pval_1);
 printf("pval_2 : [%X] -> [%d]\n", pval_2, *pval_2);
 printf("pval_3 : [%x] -> [%d]\n", pval_3, *pval_3);
 pval_1 = NULL;
 *pval_2 = 200;
 return 0;
}
