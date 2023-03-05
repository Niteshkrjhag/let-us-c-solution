#include<stdio.h>

int main(){
    int mark[2];
    int i;
    for(i=0; i<=2; i++)
    {
        scanf("%d",&mark[i]);
    }
    for(i=0; i<=2; i++)
    {
        printf("%d",mark[i]);
    }
    return 0;
}