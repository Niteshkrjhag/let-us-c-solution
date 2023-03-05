#include<stdio.h>

int main(){
    int num,i,fac=1;
    printf("enter a number");
    scanf("%d",&num);
    i= num;
    while (i>0){
        fac*=i;
        i--;
    }
    printf("factorial of %d is %d",num,fac);
    return 0;
}