#include<stdio.h>

int main(){
    int i=1,sum;
    while(i<=50){
        sum=sum+i;
        ++i;
    }
    printf("sum of numbers from 1 to 50 is %d",sum);
    return 0;
}