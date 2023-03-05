#include<stdio.h>

int main(){
    int i=10;
    int repeat = 8;
    while(repeat<=1000000000){
    repeat = repeat*i+8;
    printf("repeating number 8 is %d\n",repeat);
    }
    return 0;
} 