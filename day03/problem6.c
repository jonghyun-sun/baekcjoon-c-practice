#include<stdio.h>

int main(void){
    int n, b;
    scanf("%d",&n);
    b = n;
    for( int i = 0; n > i; i++ ){
        b = b - 1;
        for( int j = 0; b > j; j++ ){
            printf(" ");
        }
        for( int k = 0; i >= k; k ++ ){
            printf("*");
        }
        printf("\n");
    }
    
    
    return 0;
}