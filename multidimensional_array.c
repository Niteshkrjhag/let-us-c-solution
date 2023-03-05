/*
// wap to store roll number and marks obtained by a student side by side in a matrix.
#include<stdio.h>
int main(){
    int n;
    printf("enter number of students:\n");
    scanf("%d",&n);
int rm [n][2];
printf("enter the roll no and marks of students respectively\n");
for(int i=0;i<n;i++){
scanf("%d%d",&rm[i][0],&rm[i][1]);    
}

for(int i=0;i<n;i++){
    printf("marks of student with roll no %d is %d\n",rm[i][0],rm[i][1]);
    }   
    return 0;
}
*/
/*// pointer notation to access 2-D array elements.
#include<stdio.h>
int main(){
    int s[4][2]={{0,0},{0,1},{1,0},{1,1},{2,0},{2,1},{3,0},{3,1}};
    for(int i=0;i<4;i++){
        for(int j=0;j<=1;j++){
            printf("%d",*(*(s+i)+j));
            printf("\n");
        }
    }
    return 0;
}
*/
/*
//usage of pointer to an array.
#include<stdio.h>
int main(){
int s[4][2]={{1234,56},{1212,33},{1434,80},{1312,78}};
int i,j;
int (*p)[];
int *pri;
for (i=0;i<=3;i++){
    p=&s[i];
    pri= *p;
    printf("\n");
    for(j=0;j<=1;j++){
        printf("%d \t",*(pri+j));
    }
}    
    return 0;
}
*/
/*
// passing 2D array to a function.
#include<stdio.h>
void display(int q[][4],int,int);
int main(){
    int j[][4]={ 
                  1,2,3,4,
                  5,6,7,8,
                  9,0,1,6
                  };
    display (j,3,4);
    return 0;
}
void display(int k[][4],int row,int column){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
        printf("%d\t",k[i][j]);
        }
        printf("\n");
    }
}
*/
/*// array of pointers.
#include<stdio.h>
int main(){
int *arr[4];   // array of pointers.
int i=1,j=2,k=3,l=4;
arr[0]=&i,arr[1]=&j,arr[2]=&k,arr[3]=&l;
for(int i=0;i<4;i++){
printf("%d\n",*arr[i]);    
}
    return 0;
}
*/
/*
// array of pointers can even contain the addresses of other arrays elements.
#include<stdio.h>
int main(){
    static int a[]={0,1,2,3,4};
    int *p[]={a,a+1,a+2,a+3,a+4};
    printf("%u\n%u\n%d",p,*p,*(*p));
    return 0;
}
*/
/*
// solved examples of array:
#include<stdio.h>
int main(){
int rc[5][5]={11,1,7,9,7,
             13,54,56,2,5,
             23,43,89,22,13,
             14,15,17,16,19,
             45,3,6,8,10};          
int a=rc[0][0];
int i,j;
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
    if(a<rc[i][j]){
        a=rc[i][j];
    }
    }
}
printf("the largest number from a 5 row by 5 column matrix is:%d",a);
    return 0;
}
*/
/*
// find the transpose of the 4*4 matrix.
#include<stdio.h>
int main(){
  int mat[4][4]={1,2,3,4,
                 5,6,7,8,
                 9,10,11,12,
                 13,14,15,16};
int i,j,t,k;
for(i=1;i<4;i++){
    for(j=0;j<3;j++){
        k=mat[i][j];
        mat[i][j]=mat[j][i];
        mat[j][i]=k;       
        }       
}    
 for(i=0;i<4;i++){
    for(j=0;j<4;j++){    
  printf("%d\t",mat[i][j]);
}
        printf("\n");
}
    return 0;
}
*/
/*
// wap to find if a square matrix is symmetric.
#include<stdio.h>
int main(){
    int n;
    printf("enter the order of square matrix\n");
    scanf("%d",&n);
int mat[n][n];
printf("enter the element of row respectively");
for(int i=0;i<n;i++){
    for (int j=0;j<n;j++){
     scanf("%d",&mat[i][j]);
    }
}
printf("your square matrix is:\n");
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    printf("%d\t",mat[i][j]);
    }
    printf("\n");
} 
int i,j,count=0;
for (i=0;i<n-1;i++){
    for(j=1;j<n;j++){
        if(j>i){
            if(mat[i][j]==mat[j][i]){
                 count++;
                 }
           
        }
    }
}
printf("count is %d\n",count);
if(count==((n*(n-1))/2))
printf("your square matrix is symmetric.");   
    return 0;
}
*/

/*// program to copy one array into another in reverse order;
#include<stdio.h>
int main(){
    int arr1[5],arr2[5],i,j;
    printf("\nEnter 5 elements of array:\n");
    for(i=0;i<=4;i++)
    scanf("%d",&arr1[i]);
    for(i=0,j=4;i<=4;i++,j--)
    arr2[j]=arr1[i];
    printf("elements in reverse order:\n");
    for(i=0;i<=4;i++)
    printf("%d\t",arr2[i]);
    return 0;
}
*/
/*// wap to add two 6*6 matrics.
#include<stdio.h>

int main(){
    int n=6;
    int matA[6][6],matB[6][6],matR[6][6];
    printf("enter the element of the row respectively of first matrix:\n");
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            scanf("%d",&matA[i][j]);
        }
    }
   printf("enter the element of the row respectively of second matrix:\n");
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            scanf("%d",&matB[i][j]);
        }
    } 
    printf("your resultant matrix when first and second matrix is added is \n");
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
         matR[i][j]=matA[i][j]+matB[i][j];
         printf("%d\t",matR[i][j]);
        }
        printf("\n");
        }

    return 0;
}*/
/*// wap to multiply any two 3*3 matrix:
#include<stdio.h>
int main(){
  int a[3][3],b[3][3],ab[3][3],i,j,k;
printf("enter the element of first matrix row wise\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("enter the element of second matrix row wise\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&b[i][j]);
    }
}
printf("your first matrix is :\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
printf("your second matrix is :\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d\t",b[i][j]);
    }
    printf("\n");
}
printf("your resultant matrix when first and second matrix is multiplied is :\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
          int sum=0;
        for(k=0;k<3;k++){
            sum=sum+a[i][k]*b[k][j];
        }
        printf("%d\t",sum);
    }
    printf("\n");
}
    return 0;
}*/
/*// write a function to shift it circularly left by two positions.
 #include<stdio.h>
void fun (int*); 
 int main(){
    int arr[5],i;
    printf("enter five elements\n");
    for(i=0;i<5;i++)
    scanf("%d",&arr[i]);
    
    fun (arr);
    printf("when digit is left shift by 2 we get following numbers:\n");
    for (i=0;i<5;i++)
    printf("%d\t",arr[i]);
    return 0;
 }
 void fun (int*arr){
 int a,b,i;
    a=arr[0],b=arr[1];
    for(i=0;i<3;i++){
        arr[i]=arr[i+2];
    }
    arr[3]=a;
    arr[4]=b; 
    }   
   */
/*// wap to shift 4*5 matrix by two on left side:
#include<stdio.h>
int main(){
    int mat[4][5];
    printf("enter the data of 4*5 matrix row wise \n");
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&mat[i][j]);
    }
    }
    printf("your matrix is:\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            printf("%d\t",mat[i][j]);
    }
    printf("\n");
    }
int a[4][2],m,n;
    for(int i=0;i<4;i++){
    a[i][0]=mat[i][0];
    a[i][1]=mat[i][1];    
    }
    for(n=0;n<3;n++){
        for(m=0;m<4;m++){
            mat[m][n]=mat[m][n+2];
        }
    }
    for(int i=0;i<4;i++){
        mat[i][3]=a[i][0];
        mat[i][4]=a[i][1];
    }
    printf("when matrix is sifted by two on left side then:\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            printf("%d\t",mat[i][j]);
    }
    printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>
void fun(int [][5]);
int main(){
    int mat[4][5];
    printf("enter the data of 4*5 matrix row wise \n");
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&mat[i][j]);
    }
    }
    printf("your matrix is:\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            printf("%d\t",mat[i][j]);
    }
    printf("\n");
    }
    fun(mat); 
    printf("when matrix is sifted by two on left side then:\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            printf("%d\t",mat[i][j]);
    }
    printf("\n");
    } 
    return 0;
}
void fun (int mat[][5]){
    int a[4][2],m,n;
    for(int i=0;i<4;i++){
    a[i][0]=mat[i][0];
    a[i][1]=mat[i][1];    
    }
    for(n=0;n<3;n++){
        for(m=0;m<4;m++){
            mat[m][n]=mat[m][n+2];
        }
    }
    for(int i=0;i<4;i++){
        mat[i][3]=a[i][0];
        mat[i][4]=a[i][1];
    }
}*/

    