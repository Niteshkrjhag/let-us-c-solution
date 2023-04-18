// #include<stdio.h>
// int main(){
// char a;
// printf("Enter a character\n");
// a=getchar();
// printf("you entered following characters: ");
// putchar(a);
// return 0;
// }

// int main(){
// char a;
// printf("Enter a character\n");
// while((a=getchar())!='q'){
// putchar(a);
// if(a=='b'){
//     printf("\nThanks for quitting");
//     break;
// }
// }
// return 0;
// }

// wap to obtain maximum number between two numbers using ternary operators
// #include<stdio.h>
// int main(){
// int a,b;
// printf("enter a number");
// scanf("%d%d",&a,&b);
// (a>b)?printf("The maximum no among %d and %d is %d",a,b,a):((a==b)?printf("%d and %d are equal no",a,b):printf("The maximum no among %d and %d is %d",a,b,b));
// return 0;
// }

// #include<stdio.h>
// int main(){
// int a,b,t;
// printf("enter two number\n");
// scanf("%d%d",&a,&b);
// t=a;a=b;b=t;
// printf("on swapping a and b we get %d and %d.\n",a,b);
// return 0;
// }

// #include<stdio.h>
// int main(){
// int year;
// printf("Enter a year\t");
// scanf("%d",&year);
// if(year%400==0 || (year%4==0 && year%100!=0)){
//     printf("%d is leap year\n",year);
// }
// else
// printf("%d is not a leap year",year);
// return 0;
// }

// #include<stdio.h>
// int main(){
// int num,sum=0,t;
// printf("enter a number\t");
// scanf("%d",&num);
// while(num>0){
//     t=num%10;
//     sum++;
//     num=num/10;
// }
// printf("The no of digit in the number is %d\n",sum);
// return 0;
// }

// #include<stdio.h>
// int main(){
// int num,t,fac=1;
// printf("enter a number\t");
// scanf("%d",&num);
// t=num;
// while(num>0){
//     fac=fac*num;
//     num--;
// }
// printf("The factorial of number %d is %d",t,fac);
// return 0;
// }

// #include<stdio.h>
// int main(){
// int a=1,b=1,c,d;
// printf("Following is the Fibbonic seris:\n");
// printf("Enter a number of numbers of fibbonic elements you want to obtain\t");
// scanf("%d",&c);
// printf("%d\t%d\t",a,b);
// for(int i=3;i<=c;i++){
//     d=a+b;
//     printf("%d\t",d);
//     a=b;
//     b=d;
// }
// return 0;
// }

/* #include<stdio.h>
#include<math.h>
int main(){
int num,t=0,n,l=0;
int a,b;
printf("Enter a number\n");
scanf("%d",&num);
n=num;
    while(num>0){
      num=num/10;
      t++;
    }
for(int i=1;i<=t;i++){
a=n%(int)pow(10,i); 
a=a/pow(10,i-1);
b=n/pow(10,t-i);
b=b%10;
if(a==b){
l++;
}
}
if(l==t){
    printf("%d is pallindrome number",n);
}
else
printf("%d is not pallindrome number",n);

return 0;
}*/

// #include<stdio.h>
// #include<math.h>
// int main(){
// int num,t=0,n,temp=0;
// printf("enter a number\n");
// scanf("%d",&num);
// n=num;
// while(num>0){
//     num=num/10;
//     t++;
// }
// for(int i=1;i<=t;i++){
// temp=temp*10+(n%(int)pow(10,i))/(pow(10,i-1));
// }
// printf("reverse of entered number is %d\n",temp);
// return 0;
// }

// #include<stdio.h>
// int main(){
// int num,count=0;
// printf("enter a number\n");
// scanf("%d",&num);
// for(int i=1;i<=num;i++){
//     if(num==1){
//         printf("1 is not a prime number");
//     }
//    else if(num%i==0){
//         count++;
//     }
// }
// if(count==2){
// printf("%d is prime number\n",num);
// }
// else
// printf("%d is not prime number",num);
// return 0;
// }

// #include<stdio.h>
// int main(){
// int a,b;
// char c;
// printf("enter two numbers\n");
// scanf("%d%d",&a,&b);
// fflush(stdin);
// printf("enter a operation you want to perform\n");
// scanf("%c",&c);

// switch (c){
// case '+':
// printf("%d+%d=%d",a,b,a+b);
// break;
// case '-':
// printf("%d-%d=%d",a,b,a-b);
// break;
// default:
// printf("wrong operation")  ;
// }
// return 0;
// }

// #include<stdio.h>
// void swap(int x,int y){
// int t;
// t=x;
// x=y;
// y=t;
// printf("after swaping using call by value %d,%d",x,y);
// }
// void ref(int* l,int* m){
//     int p;
//     p=*l;
//     *l=*m;
//     *m=p;
//     printf("after swaping using call by reference %d,%d",*l,*m);
// }
// int main(){
// int a,b;
// printf("enter two numbers\n");
// scanf("%d%d",&a,&b);
// swap(a,b);
// ref(&a,&b);
// return 0;
// }

// #include<stdio.h>
// int fac(int);
// int main(){
//     int num,z;
//     printf("enter a number\n");
//     scanf("%d",&num);
// z=fac(num);
// printf("The factorial of number %d is %d",num,z);
// return 0;
// }
// int fac(int x){
//     int m;
//     if(x==1){
//         return 1;
//     }
//     else
//     m=x*fac(x-1);
//     return m;
// }

// #include<stdio.h>
// void fibbo(int,int,int);
// int main(){
// int a=1,b=1,c;
// printf("enter the number of elements you want to obtain fibbonic \t");
// scanf("%d",&c);
// printf("%d\t%d\t",a,b);
// fibbo(a,b,c);
// return 0;
// }
// void fibbo(int x,int y,int z){
// int d;
// if(z>2){
// d=x+y;
// printf("%d\t",d); 
// }  
// fibbo(d,x,--z);      
// }

// #include<stdio.h>
// int hcf(int,int);
// int main(){
// int a,b,z;
// printf("enter two number\n");
// scanf("%d%d",&a,&b);
// z=hcf(a,b);
// printf("The hcf of two numbers %d %d is %d\n",a,b,z);
// return 0;
// }
// int hcf(int x,int y){
//     if(y==0){
//         return x;
//     }
//     else
//     return (y,x%y);
// }

// #include<stdio.h>
// int main(){
// int p=9,q=15,r=16,s=12,t,x;
// x=(p<q)?p-q:q-p;
// t=((p<q)||(q<r));
// printf("%d\t%d\t",t,x);
// return 0;
// }

// #include<stdio.h>

// int main() {
//     /* Assume base address of arr is 1000*/
//     int arr[4] = {10, 20, 30, 40};
//     int y = 100, *ptr = arr;
//     printf("%p %d %d\n", ptr, *ptr, y);
//     y = *ptr++;
//     printf("%p %d %d\n", ptr, *ptr, y);
//     y = *++ptr;
//     printf("%p %d %d\n", ptr, *ptr, y);
//     y = ++*ptr;
//     printf("%p %d %d\n", ptr, *ptr, y);
//     y = (*ptr)++;
//     printf("%p %d %d\n", ptr, *ptr, y);
//     return 0;
// }

#include<stdio.h>
int main(){
int arr[] = {1, 2, 3, 4, 5, 6};
for(int i=5;i>=0;i--){
    printf("%d",arr[i]);
}
return 0;
}
