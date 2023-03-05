/* // wap to illustrate call by value and call by reference by adding 10 and 20 num display the value of this variable using pointer.
#include<stdio.h>
void callbyvalue(int,int);
int main(){
int a=10,b=20;
callbyvalue(a,b);
printf(" the value of a and b is %d and %d respectively \n",a,b);
printf("sum=%d\n",a+b);
return 0;
}
void callbyvalue(int x,int y){
    x=10+20;
    y=20+20;
    printf("in function the value of a and b is %d and %d respectively\n",x,y);
    } */

/* #include<stdio.h>
void callbyreferenc(int*,int*);
int main(){
int a=40;
int b=60;
callbyreferenc(&a,&b);
printf("the value of a and b is %d and %d respectively \n",a,b);  
printf("sum=%d\n",a+b);
    return 0;
}
void callbyreferenc(int *x,int *y){
int p=20,*t,**sum;
t=&p;
sum=&t;
*x=**sum+*x;
*y=**sum+*y;
printf("in function the value of a and b is %d and %d respectively\n",*x,*y);
}  */


#include<stdio.h>
void valueswap(int ,int );
void referenceswap(int *,int *);
int main(){
int a,b;
printf("enter the two value\n");
scanf("%d%d",&a,&b);
printf("address of a is %u\n",&a);
valueswap(a,b);
referenceswap(&a,&b);
printf("In 2 value after swapping is %d and %d\n",a,b);   
    return 0;
}
void valueswap(int x,int y){
    int t;
    t=x;
    x=y;
    y=t;
    printf("In 1 value after swapping is %d and %d\n",x,y);
}
void referenceswap(int *x,int *y){
    printf("address of x is %u\n",x);
    int *t;
    t=x;
    x=y;
    y=t;
    printf("swap is %d %d\n",*x,*y);
}

/* #include<stdio.h>

int main(){
    int x=20,*y,**z;
    y=&x;
    z=&y;
    printf("The value of x is %d\n",x);
     printf("The value of x is %d\n",*y);
      printf("The value of x is %d\n",**z);
    printf("The value of y is %d\n",*y);
    printf("The value of z is %d\n",**z);
    printf("The address of x is %u\n",&x);
    printf("The address of x is %u\n",y);
    printf("The address of x is %u\n",*z);
    printf("The address of y is %u\n",&y);
    printf("The address of y is %u\n",z);
    printf("The address of z is %u\n",&z);
    return 0;
}
* */
