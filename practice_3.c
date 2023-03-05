#include<stdio.h>

int main(){
    int a,b,c=5;
    for(a=1;a<=5;a++){
        for(b=1;b<=c;b++){
            printf(" %d",b);
        }
        c--;
        printf("\n");
    }
    return 0;
}