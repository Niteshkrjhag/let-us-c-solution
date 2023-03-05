#include<stdio.h>

int main(){
    float income;
    printf("enter your annual salary");
    scanf("%f",&income);
    float a=0.05;
    float b=0.2;
    float c=0.3;
    if(income>=250000 && income<500000){
        printf("you have to pay tax of rupees %f",(income-250000)*a);
    }
    else if(income>=500000 && income<1000000){
        printf("you have to pay tax of rupees %f",(income-250000)*b);
    }
    else if (income>=1000000){
        printf("you have to pay tax of rupees %f",(income-250000)*c);
    }
    else{
        printf("you dont need to pay tax");
    }
    return 0;
}