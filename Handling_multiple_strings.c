// wap to check your name against a master list to see if you are worthy of entry to the palace.
/*#include<stdio.h>
#include<string.h>
int main(){
    char name[5][10]={"amit","sumit","preeti","rima","badri"};
    char yourname[10];
    printf("enter your first name\n");
    scanf("%s",yourname);
    int i;
    for(i=0;i<5;i++){
    if(strcmp(&name[i][0],yourname)==0){
        printf("you are worthy of entry to the palace\n");
        return 0;
    }
    }
   printf("you are not worthy of entry to the palace\n"); 
    return 0;
}
*/
// wap to enter the six user name and display all of them:
/*#include<stdio.h>
int main(){
    char name[6][15];
    printf("enter the name of six user\n");
    for(int i=0;i<6;i++){
        scanf("%s",&name[i][0]);
    }
    printf("your six user name is:\n");
    for(int i=0;i<6;i++){
        puts(&name[i][0]);
    }
    return 0;
}*/
// exchange names using 2-D array of characters.
// method 1;
/* #include<stdio.h>
int main(){
   char name[5][10]={"amit","sumit","preeti","papa","mummy"};
   printf("original order is %s\t%s\n",&name[1][0],&name[2][0]);
   char change[10];
   for(int i=0;i<10;i++){
    change[i]=name[1][i];
    name[1][i]=name[2][i];
    name[2][i]=change[i];
   }
   printf("New order is %s\t %s\n",&name[1][0],&name[2][0]);
    return 0;
}*/
// method 2;
/* #include<stdio.h>
int main(){
char *name[]={"elon","nitesh","ratan","bill"};
printf("original order of %s\t %s",name[2],name[3]);
char *t; 
t=name[2];
name[2]=name[3];
name[3]=t;
printf("new order of %s\t %s",name[2],name[3]);
    return 0;
} */
// wap to stores a few strings using an array of pointers to strings.
/* #include<stdio.h>
#include<string.h>
int main(){
  char *p[]={"we will teach you how to....",
             "Move a mountain",
             "erase the past",
             "make a million",
             "leave a building",
             "....all through c!"};
char sent[50];
printf("enter string to be searched\n");
gets(sent);
for(int i=0;i<6;i++){
if(strcmp(p[i],sent)==0){
    printf("%s is present in the array",sent); 
    return 0;
}
}  
printf("%s is not present in the array");
return 0;
}*/
// wap to reverse the strings stored in an array of pointer to strings:
/*#include<stdio.h>
#include<string.h>
void xstrrev(char*ss);
int main(){
    char str[][35]={
                    "To ere is human",
                    "But to really mess things up...",
                    "One needs to know C !!"
    };
    int i;
    for(i=0;i<=2;i++){
        xstrrev(str[i]);
        printf("%s\n",str[i]);
    }
    return 0;
}
void xstrrev(char*s){
    int i,l;
    char *t,temp;
    l=strlen(s);
    t=s+l-1;
     for(i=1;i<=l/2;i++){
     temp=*s;
     *s=*t;
     *t=temp;
     s++,t--;
    }
}*/

//exercises
// [E]; Write a program that receives an integer (less than or equal to nine digits in length) and prints out the number in words. For example, if the
//        number input is 12342, then the output should be Twelve Thousand Three Hundred Forty Two.
#include<stdio.h>
void convert(int);
int main(){
int num;
printf("enter a number\n");
scanf("%d",&num);
convert(num);
    return 0;
}
void convert(int num){
    if(num>=10000000){
        convert(num/10000000);
        printf(" Crore");
        num%=10000000;
    }
    if(num>=100000){
        convert(num/100000);
        printf(" Lakh");
        num%=100000;
    }
    if(num>=1000){
        convert(num/1000);
        printf(" Thousand");
        num%=1000;
    }
    if(num>=100){
        convert(num/100);
        printf(" Hundred");
        num%=100;
    }
    if(num>0){
        if(num<=19){
        char arr[20][20]={""," one"," two"," three"," four", " five", " six"," seven", " eight", " nine" ," ten", " eleven" ," twelve"," thirteen" ," fourteen" ," fifteen"," sixteen"," seventeen"," eighteen"," nineteen"};
        printf("%s",arr[num]);
    }
    else{
     char s[10][20]={"",""," twenty"," thirty"," fourty"," fifty"," sixty"," seventy"," eighty"," ninety"};
    printf("%s",s[num/10]);
    if(num%10){
       convert(num%10);
    }
    }
    }
if(num<=0){
    printf("please donot enter negative numbers\n");
}
}