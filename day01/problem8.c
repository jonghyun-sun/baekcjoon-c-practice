#include<stdio.h>

int main(void){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%.9f / %.9f = %.9f\n", (double)a, (double)b, (double)a / b);
    return 0;
}