#include<stdio.h>

int main(){
    int a,b;
    
    int n=1;
    for(a=5;a>=1;a--){
        for(b=5;b>=n;b--){
            printf(" %d",b);
        }
        n++;
        printf("\n");
        

    }
    return 0;
}