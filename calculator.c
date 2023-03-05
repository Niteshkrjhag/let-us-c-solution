#include<stdio.h>

int main(){
    int a,b;
    char c;
    printf("enter two value that you want to calculate\n");
    scanf("%d%d",&a,&b);
     fflush(stdin);
    printf("enter the operation that you want to execute\n");
    scanf("%c",&c);
    switch (c){
        case '+':
        printf("%d+%d is %d\n",a,b,a+b);
        break;
        case '-':
        printf("%d-%d is %d\n",a,b,a-b);
        break;
        case '*':
        printf("%d * %d is %d\n",a,b,a*b);
        break;
        case '/':
        printf("%d / %d is %d\n",a,b,a/b);
        break;
        case '%':
        printf("%d % %d is %d\n",a,b,a%b);
        break;
        default:
        printf("wrong operations or va\n");

    } return 0;
}