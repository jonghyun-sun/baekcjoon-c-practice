#include<stdio.h>

int main(void){
    int n, a = 0;
    scanf("%d",&n);
    for( int i = 1; n >= i; i++ ){
        a = a + i;
    }
    printf("%d\n",a);
    return 0;
}