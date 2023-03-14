// wap to reverse an array
/* #include<stdio.h>
int main(){
    int arr[6];
    printf("enter six number\n");
    for(int i=0;i<6;i++){
        scanf("%d",&arr[i]);
    }
    printf("number in reverse order are as follows:\n");
    for(int i=5;i>=0;i--){
        printf("%d\t",arr[i]);
    }
    return 0;
} */
/* #include<stdio.h>
int main(){
    int arr[5];
    printf("enter five number\n");
    for(int i=0;i<5;i++){
     scanf("%d",&arr[i]);
    }
    int t;
    t=arr[0];
    for(int i=1;i<5;i++){
        if(t>arr[i]){
            arr[i-1]=arr[i];
            arr[i]=t;
        }
        else{
            arr[i-1]=t;
            t=arr[i];
            arr[i]=t;
        }
    }
    printf("second highest no in array is: %d\n",arr[3]);
    return 0;
}
 */
/*  #include<stdio.h>
int main(){
int arr[5],*a[5];
printf("enter five elements\n");
for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<=4;i++){
a[i]=&arr[i];
}
printf("%d\t",*a[4]);
for(int i=3;i>=1;i--){
    printf("%d\t",*a[i]);
}
printf("%d\t",*a[0]);
    return 0;
}
 */
 // wap to print the no of digit in a number
// #include<stdio.h>
// #include<string.h>
// int main(){
// char num[30];
// printf("enter the number\n");
// scanf("%s",&num);
// printf("The number %s has %d digit\n",num,strlen(num));
// return 0;
// }


// wap to print the no in reverse order.
/* #include<stdio.h>
   #include<string.h>
int main(){
char num[30];
int len;
printf("enter the number\n");
scanf("%s",num);
len=strlen(num);
printf("The reverse order of entered number is:\n");
for(int i=len;i>=0;i--){
printf("%c",num[i]);
}
return 0;
} */

// wap to find addition and subtraction of two 2d array.
// #include<stdio.h>
// int main(){
// int a[2][2]={
//             {1,2},
//             {3,4}
//              };
// int b[2][2]={
//             {5,6},
//             {7,8}
//              };
// int c[2][2];
// printf("sum of 2D array is\n");
// for(int i=0;i<2;i++) {
//     for(int j=0;j<2;j++){
//         c[i][j]=a[i][j]+b[i][j];
//         printf("%3d",c[i][j]);
//     }
//     printf("\n");
// } 
// return 0;
// }

// wap to multiply the two matrix.
// #include<stdio.h>
// int main(){
// int a[][3]={
//             {1,2,3},
//             {4,5,6},
//             {7,8,9}
//            };
// int b[][3]={
//              {2,1,4},
//              {5,6,4},
//              {5,3,6}
//            };
// int c[3][3];
// printf("multiplication of 2 matrix is:\n");
// int t=0;
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         for (int k=0;k<3;k++){
//             t=t+(a[i][k])*(b[k][j]);
//         }
//     printf("%4d",t);
//     }
//     printf("\n");
// }
// return 0;
// }
// wap to print the no of digit in a number
/* #include<stdio.h>
#include<math.h>
int main(){
int num,len=0,k=1;
printf("enter the number\n");
scanf("%d",&num);
for(double i=10;i>0;i--){
int z=num/pow(10,i);
if(z>0){
    len++;
}
}
printf("No of digit in the number %d is %d\n",num,len+1);
return 0;
} */
// wap to check two matrics are identical or not.
/* #include<stdio.h>
int main(){
    int count=0;
int a[][2]={
            {1,2},
            {3,4}
           };
int b[][2]={
            {1,2},
            {3,4}
            };
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        if(a[i][j]==b[i][j]){
        count++;
        }
    }
}
if(count==4){
    printf("matric is identical\n");
}
else
printf("matric is not identical\n");
return (0);
} */

// wap to print number in reverse order
#include<stdio.h>
int main(){
int num,t;
printf("enter the number\n");
scanf("%d",&num);
printf("The reverse order of %d is ",num);
for(int i=0;i<10;i++){
if(num<=9 && num>0){
    printf("%d",num);
    break;
}
else{
t=num%10;
printf("%d",t);  
num=num/10;
}
}
return 0;
}

