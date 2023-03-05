#include<stdio.h>

int main(){
    int a,b,count=0;
    a=1;
    b=20;
    for (a;a<=b;a++){
        if(b%a==0){
     count++;
        }
    }
     if (count==2){
        printf("%d is prime\n",a);
     }
        
    return 0;
    }