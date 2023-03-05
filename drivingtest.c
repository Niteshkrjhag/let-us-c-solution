#include<stdio.h>

int main(){
    int vippass = 0;
    vippass = 1;
    int age;
    printf("enter your age\n");
    scanf("%d",&age);
    if ((age<=70 && age>=18) || vippass==1){
        printf("you can drive\n");
    }
    else {
        printf("you cannot drive\n");
    }
    return 0;
}