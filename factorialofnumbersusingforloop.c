#include<stdio.h>
int main(){
    int i,n=5,fac=1;
    for(i=1;i<=n;++i){
    fac*=i;
    }
    printf("factorial of %d is %d",n,fac);

    return 0;
}