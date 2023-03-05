#include<stdio.h>

int main(){
    int i,n,multiplication,sum;
    n = 10;
    for (i=1;i<=n;i++){
        multiplication = 8*i;
        sum+=multiplication;
    }
    printf("sum of the numbers occuring in eight multiplication is %d",sum);
    return 0;
}