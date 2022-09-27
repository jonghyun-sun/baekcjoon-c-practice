#include<stdio.h>

int main(void){
    int h,m;
    scanf("%d %d",&h,&m);
    if( m-45 >= 0 ){
        printf("%d %d\n",h,m-45);
    }else{
        if(h == 0){
            printf("23 %d\n",60 + (m-45));
        }else{
            printf("%d %d\n",h-1,60+(m-45));
        }
    }
   
    
    return 0;
}