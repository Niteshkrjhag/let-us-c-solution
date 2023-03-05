// wap to convert any given year into its Roman equivalent. Here I=1,V=5,L=50,C=100,D=500,M=1000.
/*
#include<stdio.h>
void convert(int);
int main(){
  int year;
  printf("enter a year\n");
  scanf("%d",&year);
  convert(year);   
return 0;
}
void convert(int x){
if(x>=1000){
    printf("%c",'M');
    convert(x-1000);
}
  else if(x>=500)
  { 
  printf("%c",'D');
  convert(x-500);
  }
    else if(x>=100){
        printf("%c",'C');
        convert(x-100);
    }
    else if(x>=50){
        printf("%c",'L');
        convert(x-50);
    }
    else if(x>=10){
        printf("%c",'X');
        convert(x-10);
    }
    else if(x>=5){
        printf("%c",'V');
        convert(x-5);
    } 
}
*/
/*
// wap to print area and perimeter of the circle using call by reference.
#include<stdio.h>
 int areaperi(int,float*,float*);
int main(){
  int r;
  float area,peri;
  printf("enter the radius of the circle\n");
  scanf("%d",&r);
areaperi(r,&area,&peri);
printf("The area and perimeter of the circle with radius of the circle %d is %f and %f respectively\n",r,area,peri);
    return 0;
}
 int areaperi(int r,float*i,float*j){
  *i=3.14*r*r;
  *j=2*3.14*r;
  return *i;
  return *j;
} */

/*// waf that recevies 5 integer and return the sum,average and standard deviation of these numbers.call this fn from main() and print the results in main().
#include<stdio.h>
#include<math.h>
int func(int,int,int,int,int,int*,float*,float*);
int main(){
    int a,b,c,d,e,sum;
    float avg,sd;
    printf("enter five numbers\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    func(a,b,c,d,e,&sum,&avg,&sd);
    printf("The value of sum,avg,and standard deviation of given data is %d,%f and %f respectively\n",sum,avg,sd); 
    return 0;
}
int func(int a,int b,int c,int d,int e,int *i,float *j,float *k){
    float in;
    *i=a+b+c+d+e;
    *j=(*i/5.0);
    in=(pow(a-*j,2)+pow(b-*j,2)+pow(c-*j,2)+pow(d-*j,2)+pow(e-*j,2))/5.0;
    *k=pow(in,0.5);
    return *i;
    return *j;
    return *k;
}
*/

//   a program to understand storage class .
/*#include<stdio.h>
void fun();
int main(){
   fun();
   fun();
   fun(); 
    return 0;
}
void fun(){
    int i=1;
    static int j=1;
    i=i+1;
    j=j+1;
    printf("%d \t %d",i,j);
    printf("\n");
}*/
/*#include<stdio.h>
int x=21;
int main(){
extern int y;
printf("%d%d\n",x,y);   
    return 0;
}
int y=31;
 */
/* // wap to find area of circle,triangle and square.
#include<stdio.h>
#include"areaoftsc.h"
int main(){
    int a,h,r,l,ars;
    float arc,art;
    printf("enter the radius of the circle\n");
    scanf("%d",&r);
    arc=areac(r);
    printf("the area of circle is %f\n",arc);
    printf("enter the height and length of sides of the triangle\n");
    scanf("%d%d",&h,&l);
    printf("enter the side of the square\n");
    scanf("%d",&a);
    ars=areas(a);
    art=areat(h,l);
    printf("the area of the triangle and square is %d and %f\n",ars,art);
    return 0;
}
*/
/* #include<stdio.h>

int main(){
    static int a[]={0,1,2,3,4};
    int *p[]={a,a+1,a+2,a+3,a+4};
    printf("%u\n%u\n%d\n",p,*p,*(*p));
    return 0;
} */
#include<stdio.h>

int main(){
    int a=4;
    printf("%d",a);
    return 0;
}