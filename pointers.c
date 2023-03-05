// program to print the area and perimeter of the circle
/*#include<stdio.h>
void areaper(int,float*,float*);
int main(){
int radius;
float area,perimeter;
printf("Enter the value of the radius\n");
scanf("%d",&radius);
areaper(radius,&area,&perimeter);
printf("area=%f\n",area);
printf("perimeter=%f\n",perimeter);
    return 0;
}
void areaper(int r,float*a,float*p){
    *a=3.14*r*r;
    *p=2*3.14*r;
}*/
// sum and average of numbers.
/*
#include<stdio.h>
void sas(int,int,int,int,int,int*,float*);
int main(){
int a,b,c,d,e,sum;
float avg;
printf("enter any five numbers\n");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
sas(a,b,c,d,e,&sum,&avg);
printf("sum=%d\n",sum);  
printf("average of five numbers is %f\n",avg);
    return 0;
}
void sas(int x,int y,int z,int u,int v,int*s,float*ar){
    *s=x+y+z+u+v;
    *ar=*s/5;    
}
*/
// sum,average and standard deviation.....
/*#include<stdio.h>
#include<math.h>
void stats(int*,int*,double*);
int main(){
int sum,avg;
double stdev;
stats(&sum,&avg,&stdev);
printf("Sum = %d\n Average=%d\n standard deviation= %f\n",sum,avg,stdev); 
    return 0;
}
 void stats(int*sum,int*avg,double*stdev){
int n1,n2,n3,n4,n5;
printf("enter 5 numbers:\n");
scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
*sum=n1+n2+n3+n4+n5;
*avg=*sum/5;
*stdev=sqrt(((pow((n1-*avg),2.0))+pow((n2-*avg),2.0)+pow((n3-*avg),2.0)+pow((n4-*avg),2.0)+pow((n5-*avg),2.0))/5);
}
*/
// write a function that recevies marks obtained by a student in 3 subjects and returns the average and percentage of these marks.
/*
#include<stdio.h>
void avgper(float*,float*);
int main(){
 float avg;
 float percentage;
 avgper(&avg,&percentage);
 printf("average=%f\n percentage obtained=%f\n",avg,percentage);   
    return 0;
}
void avgper(float*avg,float*perc){
    int a,b,c;
    printf("enter marks obtained in three subjects");
    scanf("%d%d%d",&a,&b,&c);
    *avg=(a+b+c)/3.0;
    *perc=*avg;
}
*/
// pointers chapter problem C exercise.
// a)
/* #include<stdio.h>
int circular(int*,int*,int*);
int main(){
int a,b,c;
printf("enter three numbers\n");
scanf("%d%d%d",&a,&b,&c);
circular(&a,&b,&c);
printf("%d\n%d\n%d\n",a,b,c);   
return 0;
}
int circular (int*x,int*y,int*z){
    int t;
    t=*x;
    *x=*y;
    *y=*z;
    *z=t;    
}
*/
// b)
/*#include<stdio.h>
#include<math.h>
void area(int,int,int,double*);
int main(){
    int a,b,c;
    double ar;
    printf("enter the three side of a triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    area(a,b,c,&ar);
    printf("area of a triangle is %f",ar);
    return 0;
}
void area(int x,int y,int z,double*are){
    float s;
    s=(x+y+z)/2.0;
    *are=sqrt(s*(s-x)*(s-y)*(s-z));
}
*/
// c)
/*#include<stdio.h>
#include<math.h>
void disarea(double*,double*,double*,double*);
int main(){
double d1,d2,d3;
double area;
disarea(&d1,&d2,&d3,&area);
printf("area of the triangle according to filled coordinate is %f",area);
    return 0;
}
void disarea(double*x,double*y,double*z,double*ar){
        int x1,y1,x2,y2;
        printf("enter coordinate between which you want to find distance(x,y)");
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        *x=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
        int x11,y11,x22,y22;
        printf("enter coordinate between which you want to find distance(x,y)");
        scanf("%d%d%d%d",&x11,&y11,&x22,&y22);
        *y=sqrt(pow((x11-x22),2)+pow((y11-y22),2));
        int x111,y111,x222,y222;
        printf("enter coordinate between which you want to find distance(x,y)");
        scanf("%d%d%d%d",&x111,&y111,&x222,&y222);
        *z=sqrt(pow((x111-x222),2)+pow((y111-y222),2));
        float s=(*x+*y+*z)/2.0;
        *ar=sqrt(s*(s-*z)*(s-*x)*(s-*y));
    }
*/
//d)
#include<stdio.h>
int gcd(int a,int b);
void main(){
    int a,b;
    printf("enter the value of a and b(a>b)");
    scanf("%d%d",&a,&b);
    printf("greatest common divisior of (%d,%d):%d",a,b,gcd(a,b));
}
int gcd(int a,int b){
    int t;
    while (b!=0){
        t=b;
        b=a%b;
        a=t;
    }
    return a;
}