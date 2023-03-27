// //wap to print grade of the student using if else function.
// #include<stdio.h>
// int main(){
// int a,b,c,d,e,grade;
// printf("Enter the marks of five subjects (out of 100)\n");
// scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
// grade=((a+b+c+d+e)/5);
// if(grade>90 ){
//     printf("congratulation!,you have obtained A+");
// }
// else if(grade<=90 && grade>80){
//     printf("congratulation!,you have obtained A");
// }
// else if(grade<=80 && grade>70){
//     printf("congratulation!,you have obtained B+");
// }
// else if(grade<=70 && grade>60){
//     printf("you have obtained B");
// }
// else if(grade<=60 && grade>50){
//     printf("you have obtained C+");
// }
// else if(grade<=50 && grade>40){
//     printf("you have obtained C");
// }
// else
// printf("you need to improve yourself");
// return 0;
// }

// // wap to check whether a number is prime or not using function

//  #include<stdio.h>
//  int check (int);
//  int main(){
//  int num,z;
//  printf("Enter a number\n");
//  scanf("%d",&num);
//  z=check(num);
//  if(z==1){
//     printf("The number %d is even\n",num);
//  }
//  else if(z==2){
//     printf("The number %d is odd\n",num);
//  }
//  return 0;
//  }
//  int check (int x){
//     if(x%2==0){
//         return 1;
//     }
//     else 
//     return 2;
//  }


// // wap showing string handling function

// #include<stdio.h>
// #include<string.h>
// int main(){
// char name[20]="Nitesh",copy[20];
// int len;
// len=strlen(name);
// printf("The length of string in name variable is %d\n",len);
// strcpy(copy,name);
// printf("copy is storing %s\n",copy);
// strrev(name);
// printf("the reverse of name is %s\n",name);
// strrev(copy);
// if(strcmp(copy,name)==0){
//     printf("successful execution of string comparision\n");
// }
// strrev(name);
// strupr(name);
// printf("uppercase of name is %s\n",name);
// strlwr(name);
// printf("The lower case of name is %s \n",name);
// strnset(name,'a',3);
// printf("when three character of name is set to a then name is %s\n",name);
// strset(copy,'b');
// printf("When all characters of copy is set to b then copy is %s\n",copy);
// char first[20]="Nitesh";
// char sur[20]="jha";
// printf("when two string are added then name formed is \t %s\n",strcat(first,sur));
// len=strncmp(first,sur,1);
// printf("The difference in first character of first and sur is %d",len);
// return 0;
// }

// wap to print the greatest among 3 numbers using ternary operator.

#include<stdio.h>
int main(){
int a,b,c;
printf("enter three numbers\n");
scanf("%d%d%d",&a,&b,&c);
(a>b && a>c)?printf("%d is the geatest value among all",a):((b>c)?printf("%d is the greatest value among all",b):printf("%d is the greatest",c));
return 0;
}