#include<stdio.h>

int main(){
    int a , b;
    printf("enter any two number\n");
    scanf("%d%d",&a,&b);
    char op;
    printf("enter the operation you want to perform\n");
    fflush(stdin);
    scanf("%c",&op);
    switch (op){
        case '+':
        printf("addition of %d and %d is %d\n",a,b,a+b);
        break;
        case '-':
        printf("subtraction of %d and %d is %d\n",a,b,a-b);
        break;
        case '*':
        printf("multiplication of %d and %d is %d\n",a,b,a*b);
        break;
        case '/':
        printf("division of %d and %d is %d\n",a,b,a/b);
        break;
        case '%':
        printf("remainder when %d is divided by %d is %d\n",a,b,a%b);
        break;
        default:
        printf("you did not followed the instructions carefully\n");
    }
    

    return 0;
}