#include<stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    for( int i = 0; n > i; i++ ){
        for( int j = 0; i + 1 > j; j++ ){
            printf("*");
        }
        printf("\n");
    }
    
    
    return 0;
}