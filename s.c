#include<stdio.h>
int main()
{
    int num;
    printf("\n enter the number:");
scanf("%d,&num");
int i,count=0;
printf("\n the factors of %d are:",num);
for(i=1;i<=num;i++)
{
    if(num% i==0)
    {
        ++count;
        printf("%d",i);
    }
} 
printf("\n\ntotal factors of %d : %d\n",num,count);
}