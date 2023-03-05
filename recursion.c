// write a function to find factorial of entered numbers.
/*#include<stdio.h>
int rec(int);
int main(){
    int a,fac;
    printf("enter a number");
    scanf("%d",&a);
    fac=rec(a);
    printf("factorial of %d is %d",a,fac);
    return 0;
}
rec (int x){
    int f;
    if(x==1){
        return (1);
    }
    else 
    f=x*rec(x-1);
    return f;
    */ 
/*
#include<stdio.h>
int rec(int);
int main(){
int a,sum;
printf("enter a five digit positive number");
scanf("%d",&a);
sum=rec(a); 
printf("sum of the digit of %d is %d",a,sum);  
    return 0;
}
int rec(int x){
int  s,p;
if(x!=0){
p= x%10; 
s=p+rec(x/10);   
}
else
return 0;
return s;
*/
// wap to find the prime factor of the number.

/*
#include<stdio.h>
int primef(int,int);
int main(){
 int a,pf,i=2;
 printf("enter a number\n");
 scanf("%d",&a);
 pf=primef(a,i);   
    return 0;
}
int primef(int x,int i){
if(i<=x){
if (x%i==0){
    printf("%d\n",i);
    x=x/i;   
}
else
i++;
primef(x,i);  
}
}
*/
/*
#include<stdio.h>
void fibonacci(int,int,int);
int main(){
int a=1,b=1;
printf("%d\t%d\t",a,b);
fibonacci(a,b,23);
    return 0;
}
void fibonacci(int old,int current,int term){
    int newterm;
if(term>=1){
newterm=old+current;
printf("%d\t",newterm);
}
term--;
fibonacci(current,newterm,term);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
}
*/
/*#include<stdio.h>
int main(){
printf("C to it that C survives\n");
main();  
    return 0;
}*/
/*#include<stdio.h>
#include<stdlib.h>
int main(){
    int i=0;
    i++;
    if(i<=5){
        printf("C adds wings to your thoughts\n");
        exit (0);
        main();
    }
    return 0;
}
*/
// exercise of recursion chapter;
/*#include<stdio.h>
void dectobin(int);
int main(){
    int num;
    printf("enter a number");
    scanf("%d",&num);
    dectobin(num);
}
void dectobin(int x){
    int i=1,bin[32];
    while(x>0){
        bin[i]=x%2;
        x=x/2;
        i++;
    }
    int j;
    for(j=i-1;j>=1;j--) 
{
    printf("%d",bin[j]);
}
}
*/

// wap to convert positive integer into binary number using recursion method;

/*
#include<stdio.h>
void inttobin(int,int);
int main(){
    int a;
    printf("enter a positive integer number\n");
    scanf("%d",&a);  
    inttobin(a,0);
    return 0;
}
void inttobin(int a,int i){
    int b[32];
    if(a>0){
        b[i]=a%2;
        a=a/2;
        i++; 
        inttobin(a,i); 
        }
       
   int j;
   for (j=i-1;j>=0;j--){
    printf("%d",b[j]);
   }
}
*/
// 