#include<stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    for( int i = 0; n > i; i ++ ){
        printf("%d\n",i+1);
    }
    
    return 0;
}