#include<stdio.h>
int fac(int);
int main(){
    int num,z;
    printf("enter a number");
    scanf("%d",&num);
    z=fac(num);
    printf("The factorial of %d is %d",num,z);
    return 0;
}
fac(int x){
    int f=1,m=1;
    while(f<=x){
        m*=f;
        f++;
    }
    return m;
}