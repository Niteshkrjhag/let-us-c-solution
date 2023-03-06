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
#include<stdio.h>
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
