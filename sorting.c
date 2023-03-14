// sorting using selection sort
/* #include<stdio.h>
int main(){
int arr[5],i,j=1,k;
printf("enter five numbers\n");
for(i=0;i<5;i++){
scanf("%d",&arr[i]);
}
int t;
for(j=0;j<5;j++){
    t=arr[j];
    for(i=j;i<5;i++){
        if(t>arr[i]){
         k=t;
        t=arr[i];
        arr[i]=k;
        }
    }
    arr[j]=t;   
}
printf("after selection sort :\n");
for(i=0;i<5;i++){
    printf("%d\t",arr[i]);
}
return 0;
} */

// allocating memory dynamically;

/*  #include<stdlib.h>
#include<stdio.h>
int main(){
int *list;
list=(int*)malloc(3*sizeof(int)); 
if(list==NULL){
    free(list);
    return 1;
    }
list[0]=1;
list[1]=2;
list[2]=3;   
for(int i=0;i<3;i++){
    printf("%d\t",list[i]);
}
printf("\n");
int *tem;
tem=(int*)malloc(4*sizeof(int));
    if(tem==NULL){
        free(tem);
        return 1;
    }
for(int i=0;i<3;i++){
tem[i]=list[i];
}
tem[3]=4;
free(list);
list = tem;
for(int i=0;i<4;i++){

    printf("%d\n",list[i]);
}
free(list);
free(tem);
return 0;
}   */

// reallocating memory for same array using realloc(argu,argu);
#include<stdio.h>
#include<stdlib.h>
int main(){
int *list;
list=(int*)malloc(3*sizeof(int));
if(list==NULL){
    free(list);
    return 1;
}
list[0]=1;
list[1]=2;
list[2]=3;
int *tmp;
tmp=realloc(list,4*sizeof(int)); // u cannot use same list in place of tmp;
if(tmp==NULL){
    free(list);
    return 1;
}
tmp[3]=4; // or list[3]=4;
list=tmp;
for(int i=0;i<4;i++){
    printf("%d\n",list[i]);
}
free(list);
return 0;
}
