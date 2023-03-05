#include<stdio.h>
int sum(int);
int main(){
int num,s;
printf("enter a number");
scanf("%d",&num);
s=sum(num);
printf("the sum of digit of number %d is %d",num,s);    
    return 0;
}
int sum(int num){
    int z;
    if(num>=1){
    z=num%10+sum(num/10);
    }
    else 
    return 0; 
    return z;
}    