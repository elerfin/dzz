#include<stdio.h>    
int main()    
{    
    int n0 = 0;
    int n1 = 1;
    int n0n1;
    int i;
    int f;
    printf("Enter ");
    scanf("%d", &f);
    // printf("%d %d ", n0, n1);
    for(i=0; i < f; ++i) {
        n0n1 = n0 + n1;

        printf("%d ", n0n1);
        n0 = n1;
        n1 = n0n1;
    } 
    
 } 