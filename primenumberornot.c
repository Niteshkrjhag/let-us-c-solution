#include<stdio.h>  
int main(){    
int a,i,count=0;
printf("enter a number that u want to check");
scanf("%d",&a);
for(i=1;i<=a;i++){
if (a%i==0){
    count++;
}
}
if ( count==2){
    printf("%d is prime number",a);
}
else {
    printf("%d is not a prime number",a);
}
return 0;
}