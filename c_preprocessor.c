// wap using macro definitions to find arithmetic mean of two numbers and to obtain the biggest of three numbers.
/*#include<stdio.h>
#define MEAN(x,y) ((x+y)/2)
#define BIG(x,y,z) ((x>y && x>z)?1:(y>z?2:0))
int main(){
int a,b;
printf("enter two numbers\n");
scanf("%d%d",&a,&b);
printf("mean of %d and %d is %d\n",a,b,MEAN(a,b)); 
int x,y,z;
printf("enter three numbers\n");
scanf("%d%d%d",&x,&y,&z);
if (BIG(x,y,z)==1){
printf("The bigger number among %d,%d and %d is %d\n",x,y,z,x);
}
else if(BIG(x,y,z)==2)
printf("The bigger number among %d,%d and %d is %d\n",x,y,z,y);    
else
printf("the bigger number among %d,%d and %d is %d",x,y,z,z);
return 0;
}
*/

// wap using macro definitions to find absolute value of a number and to convert an upper case alphabet to lower case alphaber;

/*#include<stdio.h>
#define ABSOLUTE(X) (X>0?X:-X)
#define CONVERT(ch) (ch>=65 && ch<=90?1:0)
int main(){
 int a;
 printf("enter a number\n");
 scanf("%d",&a);
 printf("the absolute value of entered number %d is %d\n",a,ABSOLUTE(a));
 char c;
 fflush(stdin);
 printf("Enter a upper case alphabetical letter\n");
 scanf("%c",&c);
 if (CONVERT(c)==1){
    char t;
    t=c+32;
printf("The lower case of the letter %c is %c\n",c,t);     
 }
 if(CONVERT(c)==0)
 printf("you entered a wrong letter"); 
    return 0;
}
*/
/*#include<stdio.h>
#include"interest.h"
#define SI(a,b,c) ((a*b*c)/100)
#define AMOUNT(x,y) (x+y)
int main(){
    int p,r,i;
    float si,amount;
    printf("enter the value of principle,interest and rate percentage respectively\n");
    scanf("%d%d%d",&p,&r,&i);
    si=SI(p,r,i);
    printf("The value of simple interest is %f",si);
    amount=si+p;
    printf("The value of amount is %f",amount);
    return 0;
}*/
