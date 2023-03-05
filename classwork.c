// wap to generate the pattern.
/*#include<stdio.h>
int main(){
    int i,j;
    for(i=5;i>0;i--){
        for(j=i;j>=1;j--){
            printf("%d\t",j);
        }
        printf("\n");
        for(int k=5;k>=i;k--){
        printf("\t");
        }
    }
    return 0;
}*/
/* // factorial using recursion.
#include<stdio.h>
int fac(int);
int main(){
    int num,z;
    printf("enter a number\n");
    scanf("%d",&num);
z=fac(num);
printf("factorial of %d is %d\n",num,z);
    return 0;
}
int fac(num){
    int f;
    if(num==1){
        return 1;
    }
    else
    f=num*fac(num-1);
    return f;
}
*/
/*  */
#include <stdio.h>

int main() {
    int rows, coef = 1, space, i, j;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    for (i = 0; i < rows; i++) {
        for (space = 1; space < rows - i; space++) {
            printf("  ");
        }
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0) {
                coef = 1;
            } else {
                coef = coef * (i - j + 1) / j;
            }
            printf("%4d", coef);
        }
        printf("\n");
    }
    
    return 0;
}
