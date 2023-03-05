/*
// program to demonstrate printing of a string
#include<stdio.h>
int main(){
  char name[]="klinsman";
  int i=0;
while(name[i]!='\0'){
    printf("%c",name[i]);
    i++;
    }
    return 0;
}
*/
/*
// another version of the same program using pointer is:
#include<stdio.h>
int main(){
 char name[]="Niteshkrjha";
 char *ptr;
 ptr=name;
 while(*ptr!='\0'){
    printf("%c",*ptr);
    ptr++;
 }    
    return 0;
}
*/

/* // another version of the same program using %s.
#include<stdio.h>
int main(){
    char name[]="NITESHkrjha";
    printf("%s",name);
    return 0;
}*/

 /*
 // wap to ask user its name and display it.
#include<stdio.h>
int main(){
  char name[25];
  printf("enter your name:\n");
  scanf("%s",name);
  printf("your name is: %s",name);  
    return 0;
}
*/
 /*
 // program made using gets,puts:
 #include<stdio.h>
 int main(){
  char name[24];
  printf("enter your name so we can identify you:\n");
  gets(name);
  puts("hello");
  puts(name);
  puts("we have successfully verified you and you are eligible candidate\n"); 
    return 0;
 }
 */
/*// program to accept multiword strings in scanf function:
 #include<stdio.h>

 int main(){
    char name[20];
    printf("enter your name:\n");
    scanf("%[^\n]s",name);
    printf("your name is %s",name);
    return 0;
 }*/

/* // wap to count the number of characters present in a string.
#include<stdio.h>
#include<string.h>
int main(){
char name[20];
printf("enter your name\n");
scanf("%[^\n]s",name);
printf("your name is %s\n",name);
printf("your name has %d characters.\n",strlen(name));
puts("bonus knowledge\n");
printf("dubai has %d characters\n",strlen("dubai"));   
    return 0;
} */  

/*
// writting a program to find length of word using functions method:
#include<stdio.h>
int xstrlen (char *);
int main(){
char name[25];
printf("enter a word\n");
scanf("%[^\n]s",name);
int z;
z=xstrlen(name);
printf("number of characte in word %s is %d\n",name,z);
    return 0;
}
int xstrlen (char *hello){
    int count=0;
    while(*hello !='\0'){
    count++;
    hello++;
    }
    return (count);
} 
*/
/*
// wap a program to copy the content of one string into another:
#include<stdio.h>
#include<string.h>
int main(){
    char source[25],target[25];
    printf("enter the word in souce:\n");
    scanf("%[^\n]s",source);
    printf("after copying the content of one string into another we get:\n");
    strcpy(target,source);
    printf("source is %s\n",source);
    printf("target is %s\n",target);
    return 0;
}
*/
/*
// write above program using function method:
#include<stdio.h>
void copy(char*,char*);
int main(){
   char source[25],target[25];
   printf("enter the word\n");
   scanf("%[^\n]s",source);
   int z;
   copy(source,target);
   printf("source is %s\n target is %s\n",source,target);
    return 0;
}
void copy(char*source,char*target){
while(*source!='\0'){
    *target=*source;
    source++;
    target++;
}
*target='\0';
}
*/
/*// wap to copy the source string at the end of the target string.
#include<stdio.h>
#include<string.h>
int main(){
char source[]="nitesh",target[30]="hello ";  
strcat(target,source);
printf("source=%s\n target=%s\n",source,target); 
    return 0;
}*/
/*// wap to compare the two string
#include<stdio.h>
#include<string.h>
int main(){
char string1[]="hello",string2[]="jerry";
int i,j,k;
i=strcmp(string1,"hello");  
j=strcmp(string2,"jerry");
k=strcmp(string1,string2);
printf("%d\n%d\n%d\n",i,j,k);
    return 0;
}*/
/* // wap that extracts part of the given string from the specified position.
#include<stdio.h>
#include<string.h>
int main(){
char sr[30];
int l,c,p;
    printf("enter the sentence you want to observe\n");
    scanf("%[^\n]s",sr);
    l=strlen(sr);
    int i=0;
    static int len=0;
    while(sr[i]!='\0'){
    printf("%c",sr[i]);
    i++;
    }
    printf("\n");
printf("enter the position and no of character you want to extract from that positon respectively\n");
scanf("%d%d",&p,&c);    
if(p>l || c>l )
printf("your input is incorrect pls follow the rule\n");
i=p;
while(sr[i]!='\0'){
    len++;
    i++;
}
 if(len<c) 
 printf("you have entered incorrect no of characters\n");
if(p<l && c<l && len>c){
    int r=0;
    i=p-1;
    printf("your required word is:\n");
while(sr[i]!='\0' && r<c){
     printf("%c",sr[i]);
     r++;
     i++;
    }
} 
return 0;
} */
/*// wap to that converts a string like "124" to an integer 124.
#include<stdio.h>

int main(){
    char str[30];
    printf("enter the string\n");
    scanf("%[^\n]s",str);
    int num=0;
    for(int i=0;str[i]!='\0';i++){
    if(str[i]<58 && str[i]>47){
        num=num*10+(str[i]-48);
    }
    }
    printf("your integer for the string is %d",num);
    return 0;
}*/
/* // wap that generates and prints the Fibonacci words of order 0 through 5;
#include<stdio.h>
#include<string.h>
int main(){
    char f[15];
    char lb[15]="a";
    char lt[15]="b";
    for(int i=0;i<5;i++){
    strcpy(f,lt);
    strcat(f,lb);
    printf("%s\n",f);
    strcpy(lb,lt);
    strcpy(lt,f);
    }
    return 0;
} */
/*
// wap that receives a credit card number and checks whether the card number is valid.
#include<stdio.h>
int main(){
    char card[17];
    printf("enter 16 digit credit card number\n");
    gets(card);
    puts("your credit card number is:\t");
    puts(card);
    int cn[16],o[16],s=0,n;
    int i=0;
    while(card[i]!='\0'){
        cn[i]=card[i]-48;
        i++;
    }   
    for(int i=0;i<16;i++){
        if(i%2==1){
          o[i]=cn[i]*2;
          if(o[i]>=10){
            o[i]=o[i]-9;
          }
        }
        else
        o[i]=cn[i];
    }
    for(int i=0;i<16;i++){
         s=s+o[i];
        }
        n=s%10;
        if(n<10 && n>=0){
            printf("the credit card number is valid");
        }
        else
        printf("you have entered wrong credit card number");
    return 0;
}
*/
/*// wap that receives a 10 digit integer computes the checksum,and reports whether the ISBN Number is correct or not.
#include<stdio.h>

int main(){
    char isbn[11];
    printf("enter a 10-digit integer\n");
    gets(isbn);
    int isb[10],sum=0;
    for(int i=0;i<10;i++){
        isb[i]=isbn[i]-'0';
        sum=sum+isb[i]*(i+1);
    }
    if(sum%11==0){
        printf("The ISBN number is correct");
    }
    else 
    printf("The ISBN number is incorrect");

    return 0;
}*/

