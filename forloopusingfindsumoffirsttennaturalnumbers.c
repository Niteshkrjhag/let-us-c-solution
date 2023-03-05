#include<stdio.h>

int main(){
    int i,sum,n;
    sum = 0;
    n = 10;
    for (i=1;i<=n;i++) {
        sum+=i;
    }
    printf("sum of first ten natural numbers is %d",sum);

    return 0;
}