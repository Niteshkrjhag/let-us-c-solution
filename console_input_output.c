// practice of solved examples

/*#include<stdio.h>
int main(){
int weight =63;
printf("weight is %d kg\n",weight);
printf("weight is %2d kg\n",weight);
printf("weight is %4d kg\n",weight);
printf("weight is %6d kg\n",weight);
printf("weight is %-6d kg\n",weight);
printf("weight is %1d kg\n",weight);
return 0;
} */

/* #include<stdio.h>
int main(){
printf("%10.1f%10.1f%10.1f\n",5.0,13.5,133.9);
printf("%10.1f%10.1f%10.1f\n",305.0,1200.9,3005.3);
return 0;
}*/

/*#include<stdio.h>
int main(){
    char name[2][20]={"karan","maheswari"};
    printf("your name is \n %s \n %s",name[0],name[1]);        
return 0;
} */

// #include<stdio.h>
// #include<string.h>
// int main(){
// char name[20]="karan",copy[20];
// int len;
// len=strlen(name);
// strcpy(copy,name);
// strrev(name);
// printf("name=%s\n",name);
// printf("copy=%s\n",copy);
// printf("length=%d\n",len);
// strcat(copy,name);
// printf("copy=%s\n",copy);
// if(strcmp(copy,strrev(name))!=0){
//     printf("successfully executed strcmp string\n");
// if(strcmpi(copy,name)==0){
//     printf("i am in strcmpi\n");
// }
// }
// len=strncmp(name,copy,1);
// printf("length=%d\n",len);
// strset(name,'a');
// printf("strset name= %s\n",name);
// strnset(copy,'a',3);
// printf("strnset name= %s\n",name);
// printf("copy=%s\n",strupr(copy));
// printf("name=%s\n",strlwr(name));
// return 0;
// }

// wap to print only 10 characters of a string.

/* #include<stdio.h>
int main(){
char n[20];
int i;
printf("Enter a sentence you mostly like\n");
gets(n);
printf("The %d characters from your sentence is\n",i);
printf("%10.10s",n);
return 0;
} */

// all escape sequence in single program.
//  #include<stdio.h>
//  int main(){
//     int day,month,year;
// printf("name=\t \'nitesh kr jha\'");
// printf("roll no= \"2022BCSE030\"\n");
// printf("batch\r");
// printf("overwritten on batch\n");
// printf("\t\b i am in backspace\n");
// printf("\t \\i am in next line\\\n");
// printf("date of birth in day/month/year");
// scanf("%d%*c%d%*c%d",&day,&month,&year);
// printf("%d%d%d",day,month,year);
// printf("\a");
//  return 0;
//  }

/* // example for some sensible and some wiered.
#include<stdio.h>
int main(){
char ch='z';
int i=125;
float a=12.55;
char s[]="hello there";
printf("%c%d%f\n",ch,ch,ch);
printf("%s%d%f\n",s,s,s);
printf("%f%d\n",a,a);
return 0;
} */

/* // wap to show printf shows output on the screen and sprintf writes the output to an array of characters.
#include<stdio.h>
int main(){
int i=10;
char ch='A';
float a=3.14;
char str[20];
printf("%d%c%f\n",i,ch,a);
sprintf(str,"%d%c%f",i,ch,a);
printf("%s\n",str);
return 0;
} */

/* // wap regarding sscanf
#include<stdio.h>
int main(){
char str[]="john 12 3.14";
char name[10];
int a,b;
sscanf(str,"%s\n%d\n%d\n",name,&a,&b);
printf("name=%s\n years=%d\n old=%d",name,a,b);
return 0;
} */

// wap consisting of gets ,puts fgets;
#include<stdio.h>
int main(){
char footballer[20];
printf("enter the footballer name");
fgets(footballer,10,stdin);
puts("hello your fav footballer is");
puts(footballer);
return 0;
}


