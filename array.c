// practice of code through book;
/*#include<stdio.h>
void display1 (int);
void display2 (int*);
int main(){
    int i;
    int marks[]={1,2,3,4,5,6,7};
    for(i=0;i<=6;i++){
        display1 (marks[i]);
        }
        for(i=0;i<=6;i++){
            display2 (&marks[i]);
        }
    return 0;
}
void display1 (int x){
    printf("%d",x);
}
void display2 (int* y){
    printf("%d",*y);
}
*/
// vvi concept i++ means increasing the value of integer by one but in case of address i++ means inc in byte per inc in number;
/*
int main(){
 int i=3,*x;
 float j=1.5,*y;
 char k='c',*z;
 printf("value at i=%d\n",i);
 printf("value at j=%f\n",j);
 printf("value at k=%c\n",k);
 x=&i;y=&j;z=&k;
 printf("original address in x=%u\n",x);
 printf("original address in y=%u\n",y);
 printf("original address in z=%u\n",z);
 x++;y++;z++;
 printf("new address in x=%u\n",x);
 printf("new address in y=%u\n",y);
 printf("new address in z=%u\n",z); 
    return 0;
    */
/*
// wap to store avg of 10 number using arrays;
#include<stdio.h>
int main(){
  int sum=0,i;
  int num[10];  
  printf("enter 10 number\n");
  for (i=0;i<=9;i++){
  scanf("%d",&num[i]);
  } 
  for(i=0;i<=9;i++){
    sum = sum + num[i];
  }
  printf("average of ten numbers you entered is %d",sum/10);
    return 0;
}
*/
/*
// call by reference or call by value 
#include<stdio.h>
 void display1 (int);
 void display2 (int*); 
int main(){
    int i;
  int num[]={1,2,3,4,5};
  for(i=0;i<=4;i++){
    display1 (num[i]);
  }
  for(i=0;i<=4;i++){
    display2 (&num[i]);
  }
    return 0;
}
void display1 (x){
    printf("%d\t",x);
}
void display2 (int *y){
    printf("%d",*y);
}
*/
// wap to perform following operations on pointer
/* 1)addition of a number to a pointer.
2)subtraction of a number from a pointer.
3)subtraction of one pointer from another.
4)comparison of two pointer variables.

#include<stdio.h>
int main(){
 int *x,y,*m,n;
 printf("enter a number\n");
 scanf("%d",&y);
 x=&y;
printf("enter a next number\n");
scanf("%d",&n);
m=&n;
 printf("x-%d is:%d \n",y,*x-y);
 printf("x+%d is:%d\n",y,*x+y);
 printf("x-m is: %d\n",*x-*m);
 if(x==m){
    printf("the pointer points to the same location\n");
 }
 else 
 printf("the pointer points to the different location\n");
    return 0;
}

// same question with different method.
#include<stdio.h>
int main(){
    int arr[]={10,20,30,45,67,56,74};
    int i=4,*j,*k,*x,*y;
    j=&i;
    j=j+9;  // pointer plus number
    k=&i;
    k=k-4;  // pointer minus number
    x=&arr[1];
    y=&arr[4];
    printf("%d,%d,%d:\n",*j,*k,x-y);
    
    return 0;
}
*/
/*
// passing an array to a function.
#include<stdio.h>
void array1 (int,int*);
void array2 (int [],int);
int main(){
int i[]={1,2,3,4,5};
array1 (5,&i[0]);
array2 (i,6);
    return 0;
}
void array1 (int m,int *j){
    for(int i=0;i<=m-1;i++){
        printf("element=%d\n",*j);
        j++;
    }
}
void array2 (int j[],int n){
for(int i=0;i<=n-2;i++){
    printf("element=%d\n",j[i]);
}
}
*/
/*// flexible array size
#include<stdio.h>
#include<stdlib.h>
int main(){
    int max,i,*p;
    printf("enter array size:");
    scanf("%d",&max);
    p=(int*)malloc(max * sizeof(int));
    for(i=0;i<=5;i++){
        p[i]=i*i;
        printf("%d",p[i]);
    }
    return 0;
}*/
/*// once check this solution and consult with teacher and friends... wrong programming.............$$$$$$$$$
#include<stdio.h>
void even (int);
void odd (int);
int main(){
int i[10];
int j;
printf("enter 10 numbers\n");
for(j=0;j<=9;j++){
    scanf("%d",&i[j]);
}
for(j=0;j<=9;j++){
   if (j%2==0){
     j++;
    even (i[j]);
    }
    else
    {
        j--;
    odd (i[j]);     
    }
}
    return 0;
}
void even (int x){
printf("%d\n",x);
}

void odd (int y){
    printf("%d\n",y);
}
*/

/*// wap that interchanges element at odd position with elements at even position in a array of 10 elements.
#include<stdio.h>
void even (int);
void odd (int);
int main(){
int i[10];
int j;
printf("enter 10 numbers\n");
for(j=0;j<=9;j++){
    scanf("%d",&i[j]);
}
for(j=0;j<=9;j++){
    if (j%2==0){
    even (i[j+1]);    
    }
    else
    {
    odd (i[j-1]);     
    }
}
    return 0;
}
void even (int x){
printf("%d\n",x);
}

void odd (int y){
    printf("%d\n",y);
}
*/
/*
// interchange adjacent elements of an array.......vvvviiiiiccccc
#include<stdio.h>
int main(){
int num[]={12,4,5,1,9,13,11,19,54,34};
int i,t;
for (i=0;i<=9;i=i+2){
    t=num[i];
    num[i]=num[i+1];
    num[i+1]=t;
}  
for (i=0;i<=9;i++){
    printf("%d\t",num[i]);
}  
 return 0;
}
*/
// wap to to copy the contents of a 5 element integer array into another array in reverse order.
/* #include<stdio.h>
int main(){
 int i[5],j[5];
 printf("enter 5 number\n");
 for(int k=0;k<=4;k++){
 scanf("%d",&i[k]);
 }
 printf("your numbers in reverse order is as follows:\n");
for (int k=4;k>=0;k--){
    printf("%d\n",i[k]);
}
    return 0;
} */
/*
//An array contains 10 integers. Receive the numbers to be searched in the array as input. Write a program to search this number in the array and display the number of times it occurs in the array.
#include<stdio.h>
int main(){
int array[]={7,3,5,4,6,7,2,4,6,7};
int num,count=0;
printf("enter a number to be searched in an array\n");
scanf("%d",&num);
for(int j=0;j<=9;j++){
    if(array[j]==num){
       
        count=count+1;
    }
}
 printf("your number %d is found %d times in an array\n",num,count);   
    return 0;
}
*/
// [B]-Attempt the following questions.
// a)
/*
#include<stdio.h>
int main(){
int j[25];
int count=0,pos=0,even=0,odd=0;
printf("enter 25 numbers:\n");
for(int i=0;i<=24;i++){
scanf("%d",&j[i]);
}
for(int i=0;i<=24;i++){
    if(j[i]<0){
        count++;
    }
    if(j[i]>0){
        pos++;
    }
    if(j[i]%2==0){
        even++;
    }
    if(j[i]%2==1||j[i]%2==-1){
        odd++;
    }
}
printf("total number of positive number is:%d\n",pos);
printf("total number of negative number is:%d\n",count);
printf("total number of even number is:%d\n",even);
printf("total number of odd number is: %d\n",odd);
    return 0;
}
*/
//b)
/*
#include<stdio.h>
int main(){
    int num,*p,i=0,help=0;
  printf("enter array size\n");  
  scanf("%d",&num);
  int j=num-1;
  p=(int*)malloc(num*sizeof(int));
  printf("enter %d number\n",num);
 for(i;i<=num-1;i++){
   scanf("%d",&p[i]);
  }
  for(i,j;i<=j;i++,j--){
    if(p[i]==p[j]){
      help++;  
    }
  }
  printf("%d numbers fulfill the conditons\n",j);
    return 0;
}
*/
/* // C].
#include<stdio.h>
int main(){
int num[25];
int t;
printf("enter 25 numbers\n");
for(int i=0;i<=4;i++)
scanf("%d",&num[i]); 
t=num[0]; 
for(int i=0;i<=24;i++){
    if(t>=num[i]){
        t=num[i];
    }
}
printf("the smallest number among 25 entered number is:%d\n",t);
    return 0;
} */
/*//E]
#include<stdio.h>
void modify (int [],int);
int main(){
int arr[10];
printf("enter 10 numbers\n");
for(int i=0;i<=9;i++)
scanf("%d",&arr[i]);
printf("your number when multiplie by three result as :\n");
modify (&arr[0],9);
for(int i=0;i<=9;i++){
printf("%d\n",arr[i]);    
}

    return 0;
}
void modify (int j[],int k){
    int i=0;
    for(i=0;i<=k;i++){
        j[i]=j[i]*3;

    }
}*/
/*// F]
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter the size of an array\n");
    scanf("%d",&n);
    int array[n];
    printf("enter the element of an array or simply data\n");
    for(int i=0;i<n;i++)
    scanf("%d",&array[i]);
    int length= sizeof(array)/sizeof(array[0]);
    int sum=0,mean,stdd,inter=0;
    for (int i=0;i<length;i++){
        sum=sum+array[i];
    }
    mean=sum/n;
    for(int i=0;i<length;i++){
    inter=inter+pow(array[i]-mean,2);
    }
    stdd=sqrt(inter/n);
    printf("the standard deviation of the above data is %d and mean is %d\n",stdd,mean);
    return 0;
}*/
/*
// G]
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter the number of data \n");
    scanf("%d",&n);
float a[n],b[n],angle[n],angleindeg[n],area[n];
printf("enter the 2 sides of the triangle and the angle between them respectively of all the data\n");
for(int i=0;i<n;i++){
    scanf("%f%f%f",&a[i],&b[i],&angle[i]);
    angleindeg[i]=angle[i]*(180.0/3.14);
    area[i]=(0.5)*a[i]*b[i]*sin(angleindeg[i]);
 } 
 for(int i=0;i<n;i++)
printf("area of your %d data is %f.\n",i+1,area[i]);
float t=area[0];
for(int i=1;i<n;i++){
if(t<area[i]){
    t=area[i];   
}
}
printf("The largest area of the triangle is %f",t);
     return 0;
}
*/
//H]
 /*
 #include<stdio.h>
#include<math.h>
int main(){
    int n;
printf("enter the number of data:\n");
scanf("%d",&n);
float x[n],y[n];
printf("enter set of %d data points (x,y)\n",n);
for(int i=0;i<n;i++){
scanf("%f%f",&x[i],&y[i]);
}
float sx=0,sy=0,sxy=0,ssx=0,ssy=0;
for(int i=0;i<n;i++){
  sx=sx+x[i];
  sy=sy+y[i];
  sxy=sxy+x[i]*y[i];
  ssx=ssx+pow(x[i],2);
  ssy=ssy+pow(y[i],2);  
}
float m,o,r;
m=(n*sxy-(sx * sy));
o=sqrt(((n*ssx)-pow(sx,2))*((n*ssy)-pow(sy,2)));
r=m/o;
printf("sx=%f\n,sy=%f\n,sxy=%f\n,ssx=%f\n,ssy=%f\n,m=%f\n,o=%f\n",sx,sy,sxy,ssx,ssy,m,o);
printf("the correlation coefficient of given data\n is %f",r);
    return 0;
}
 */
/*// I]
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter number of data\n");
    scanf("%d",&n);
    float x[n],y[n];
    printf("enter set of point given by (x,y) of data\n");
    for(int i=0;i<n;i++){
        scanf("%f%f",&x[i],&y[i]);
    }
    float syx=0,sx=0,sy=0,ssx=0;
    for(int i=0;i<n;i++){
    syx=syx+y[i]*x[i];
    sx=sx+x[i];
    sy=sy+y[i];
    ssx=ssx+pow(x[i],2);
    }
    float a,b;
    b=(n*syx-sx*sy)/(n*ssx-pow(sx,2));
    a=(sy/n)-b*(sx/n);
    printf("vlaue of a=%f\n value of b=%f\n",a,b);
    printf("equation of the straight line that fit data is given by:\n y=%0.2f+%0.2fx",a,b);
    return 0;
}
 */
/*
//J]
#include<stdio.h>
#include<math.h>
int main(){
int n;
printf("enter the number of point\n");
scanf("%d",&n);
int x[n],y[n];
printf("enter x and y coordinates of the points\n");
for(int i=0;i<n;i++){
scanf("%d%d",&x[i],&y[i]);
}
float consdistance[n-1];
for(int i=0;i<n-1;i++){
    consdistance[i]=sqrt(pow((x[i]-x[i+1]),2)+pow((y[i]-y[i+1]),2));
    printf("The distance between (%d,%d) and (%d,%d) is %f.\n",x[i],y[i],x[i+1],y[i+1],consdistance[i]);
}
float distance=0;
for(int i=0;i<n-1;i++){
    distance=distance+consdistance[i];
}
printf("the distance of last point from the first point is %f\n",distance);  
    return 0;
}
*/
// K]


