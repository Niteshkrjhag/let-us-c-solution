#include<stdin.h>
#include"interest.h"
#define SI(a,b,c) ((a*b*c)/100)
#define AMOUNT(x,y) (x+y)
int main(){
    int p,r,i;
    float si,amount;
    printf("enter the value of principle,interest and rate percentage respectively\n");
    scanf("%d%d%d",&p,&r,&i);
    si=SI(p,r,i);
    printf("The value of simple interest is %f",si);
    amount=si+p;
    printf("The value of amount is %f",amount);
    return 0;
}

