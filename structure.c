// wap for storing names,price and number of pages using array;
/* #include<stdio.h>
int main(){
    int page[3],i;
    char name[3];
    float price[3];
    printf("enter the names,price and numbers of pages of books respectively for 3 books\n");
    for(i=0;i<=2;i++){
        scanf("%c%f%d",&name[i],&price[i],&page[i]);
        fflush(stdin);
    }
    printf("YOur books overall details are:\n");
    for(i=0;i<=2;i++){
    printf("%c%f%d\n",name[i],price[i],page[i]);
    }
    return 0;
} */
// using structure;
/* #include<stdio.h>
int main(){
  struct book{
    char name;float price;int page;
  };
  struct book b1,b2,b3;
  printf("Enter the name,price and no of pages in book respectively\n");
  scanf("%c %f %d",&b1.name,&b1.price,&b1.page);
  fflush(stdin);
  scanf("%c %f %d",&b2.name,&b2.price,&b2.page);
  fflush(stdin);
  scanf("%c %f %d",&b3.name,&b3.price,&b3.page);
  fflush(stdin);
  printf("your result:\n");
  printf("%c %f %d\n",b1.name,b1.price,b1.page);
  printf("%c %f %d\n",b2.name,b2.price,b2.page);
  printf("%c %f %d\n",b3.name,b3.price,b3.page);
    return 0;
}
 */
/*// write above program using array of structures.
#include<stdio.h>
void linkfloat();
int main(){
    struct book{
        char name;float price;int page;
    };
    struct book b[10];
    printf("enter the name,price and page of book respectively\n ");
    for(int i=0;i<10;i++){
        scanf("%c%f%d\n",&b[i].name,&b[i].price,&b[i].page);
        fflush(stdin);
    }
    printf("The result is as follow\n");
    for(int j=0;j<10;j++){
        printf("%c %f %d\n",b[j].name,b[j].price,b[j].page);
    }
    return 0;
}
void linkfloat(){
    int a=0,*f;
    f=&a;
    a=*f;
}*/
/* // wap for copying of structure elements.
#include<stdio.h>
#include<string.h>
int main(){
struct copy{
    char name[10];float price;int paper;
};
struct copy e1={"sanjay",30,5500.50};
struct copy e2,e3;
// piece-meal copying
strcpy(e2.name,e1.name);
e2.price=e1.price;
e2.paper=e1.paper;
// copying all the elements at one go.
e3=e2;
printf("%s %f %d\n",e1.name,e1.price,e2.paper);
printf("%s %f %d\n",e2.name,e2.price,e3.paper);
printf("%s %f %d",e3.name,e3.price,e3.paper);
    return 0;
} */
/* // nested structure;
#include<stdio.h>
int main(){
    struct book{
        char name[10]; float price;int paper;
    };
    struct person{
        int rollno; struct book a;
    };
    struct person e={
        001,"science",12.00,506
    };
printf("roll no is %d name of book is %s price is %f no of pages is %d",e.rollno,e.a.name,e.a.price,e.a.paper);
    return 0;
}
 */
/*  // passing structure elements / structure variables;
#include<stdio.h>

struct book{
    char author[10]; char name[25];int pages;
};
void display1(char*,char*,int);
void display2(struct book);
void display3(struct book *);
int main(){
    struct book b={
        "nitesh","science",128
    };
    display1(b.author,b.name,b.pages);
    display2(b);
    display3(&b);
    return 0;
}
void display1(char*n,char*a,int c){
    printf("%s %s %d\n",n,a,c);
}
void display2(struct book l){
    printf("%s %s %d\n",l.author,l.name,l.pages);
}
void display3(struct book *m){
    printf("%s %s %d %s",m->author,m->name,m->pages,(*m).author);
} */

// solved examples..
/* 
// A stack is a data structure in which addition of new element or deletion of existing element always takes place at the same end known as ‘top’ of
//           stack. Write a program to implement a stack using a linked list.
#include<stdlib.h>
#include<stdio.h>
struct node{
int data;struct node *link;
};
void push(struct node **s,int item);
int pop(struct node **s);
int main(){
    struct node *top;
    int t,i,item;
    top=NULL;
    push(&top,45);push(&top,28);
    push(&top,63);push(&top,55);
    item=pop(&top);
    printf("popped:%d\n",item);
    item=pop(&top);
    printf("Popped: %d\n",item);
    return 0;
}
void push (struct node **s,int item){
    struct node *q;
    q=(struct node *)malloc(sizeof(struct node));
    q->data=item;
    q->link= *s;
    *s=q;
}
int pop (struct node **s){
    int item;
    struct node *q;
    if(*s== NULL)
        printf("Stack is empty\n");
        else{
            q=*s;
            item = q->data;
            *s=q->link;
            free(q);
            return(item);
        }
}
*/
/* #include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct node {
    int data;
    struct node* link;
};

// Push an item onto the stack
void push(struct node** s, int item) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = item;
    temp->link = *s;
    *s = temp;
}

// Pop an item from the stack
int pop(struct node** s) {
    if (*s == NULL) {
        printf("Error: stack underflow\n");
        return -1;
    }
    struct node* temp = *s;
    int item = temp->data;
    *s = temp->link;
    free(temp);
    return item;
}

int main() {
    struct node* top = NULL;
    int item;
    int i;

    // Take five inputs from user and push them onto the stack
    for (i = 0; i < 5; i++) {
        printf("Enter a number to push onto the stack: ");
        scanf("%d", &item);
        push(&top, item);
    }

    // Pop all the items from the stack and print them
    while (top != NULL) {
        item = pop(&top);
        printf("popped: %d\n", item);
    }

    return 0;
} */
/*   #include<stdio.h>
#include<string.h>
int main(){
  struct person{
char name[10];int age;int salary;
  };
  struct person p1,p2;
  printf("enter the name,age,and salary of two person respectively\n");
  scanf("%[^\n]s,p1.name");
  fflush(stdin);
  scanf("%d%d",&p1.age,&p1.salary);
  scanf("%[^\n]s,p2.name");
  scanf("%d%d",p2.name,&p2.age,&p2.salary);
  printf("%s%d%d",p1.name,p1.salary,p2.age);
  printf("%s%d%d",p2.name,p2.salary,p1.age);
    return 0;
} */
/* 
// Once check it correctly.
#include<stdio.h>

int main(){
    struct time{
        int hours;int mintutes;int seconds
    }t;
    struct time *p;
    p=&t;
    printf("%d\t%d",p->seconds,(*p).seconds);
    return 0;
}
 */
// B] Attempt the following questions.
// a)
/* #include<stdio.h>
#include<stdlib.h>
struct student{
int rn; char name[15]; char dep[15]; char course[15];int yoj;
};
void fun_yoj (int,struct student arr[]);
void fun_rn (int,struct student arr[]);
int main(){
    int x,m;
struct student a[3];
printf("enter the roll no,name,department,couse and year of joining respectively\n");
for(int i=0;i<3;i++){
scanf("%d",&a[i].rn);
scanf("%s",&a[i].name);
fflush(stdin);
scanf("%s",&a[i].dep);
scanf("%s",&a[i].course);
scanf("%d",&a[i].yoj);
}
printf("enter the year of joining of students to know all the names\n");
scanf("%d",&x);
fun_yoj (x,a);
printf("enter the roll no of student to get its detail\n");
scanf("%d",&m);
fun_rn (m,a);
return 0;
}
void fun_yoj (int y,struct student arr[]){
printf("Name of student who joined in %d year are:\n",y);
for(int i=0;i<3;i++) {
if (y==arr[i].yoj){
   printf("%s\n",&arr[i].name);
}
}
}
void fun_rn (int m,struct student brr[]){
printf("The details of students\n");
for(int i=0;i<3;i++){
    if (m==brr[i].rn){
        printf("roll no=%d\n name=%s\n department=%s\n couse=%s\n year of joining=%d\n\n",brr[i].rn,brr[i].name,brr[i].dep,brr[i].course,brr[i].yoj);
    }
}
} */
// b)
/* #include<stdio.h>
#include<stdio.h>
struct data{
    int an; char name[15]; int balance;
};
struct req{
    int acc;
};
void fun_below (int,struct data []);
void form (int,struct req);
int main(){
int m;
struct data a[3];
printf("enter the account number,name and balance in account respectively\n");
for(int i=0;i<3;i++){
  scanf("%d%s",&a[i].an,&a[i].name);
  fflush(stdin);
  scanf("%d",&a[i].balance);
}
fun_below (100,a);
printf("if you want to request for withdrawal or deposit then enter a number\n");
scanf("%d",&m);
struct req k;
    printf("enter the account number\n");
    scanf("%d",&k.acc);
if(m==1){
    printf("enter the ammount you want to deposit\n");
form (1,k);
}
else if (m==0){
    printf("enter the ammount you want to withdrawal\n");
    form (0,k);
}
return 0;
}
void fun_below (int x,struct data b[]){
    printf("Account number and name of each customer with balance less than hundred are\n");
    for(int i=0;i<3;i++){
        if(b[i].balance<x){
            printf("account number=%d\n name=%s\n",b[i].an,b[i].name);
        }
    }
}
void form (int x,struct req b){
   int m; 
   if(x==0){
        
        printf("you are in withdrawal section\n");
        printf("enter the ammount you want to withdrawl\n");
        scanf("%d",&m);
        if (m<100){
        printf("the balance is insufficient for the specified withdrawal\n");
    }
    else{
        printf("you withdrawal ammount=%d from account=%d\n ",m,b.acc);
    }    
    }
    else if(x==1){
        printf("you are in deposit section\n");
        printf("enter the amount you want to deposit\n");
        scanf("%d",&m);
        printf("you deposited %d ammount in %d account\n",m,b.acc);
    }
} */

// C]
/* // wap to store information corresponding to a part.
#include<stdio.h>
#include<string.h>
struct part{
            int yom; char mat[15]; int quantity;
            };
struct serial{
              char serial[4]; struct part s[2];
             };
int main(){
struct serial one[2];
printf("enter the detail with engine part starting from AA0 to FF9\n");
for(int i=0;i<=1;i++){
    scanf("%s%d%s%d",one[i].serial,&one[i].s[i].yom,one[i].s[i].mat,&one[i].s[i].quantity);
}
int num,r=0;
printf("enter the number of parts for which you want to get detail about\n");
scanf("%d",&num);
char s_no[num][4];
printf("enter the serial number of parts of which you want to get detail\n");
for(int i=0;i<num;i++){
scanf("%s",s_no[i][4]);
//fflush(stdin);        
}
printf("The information regarding part with serial no :\n");
for(int i=0;i<=1;i++){
if(strcmp(&s_no[i][4],one[i].serial)==0){
    r++;
printf("serial number=%s\nyear of manufacturing=%d\nmaterial=%s\nquantity=%d\n\n\n",one[i].serial,one[i].s[i].yom,one[i].s[i].mat,one[i].s[i].quantity);
}
}
if(r==0){
printf("sorry,you entered wrong serial no or we have no information regarding that part currently\n");
}
return 0;
} */

// ***** in the above program try to store serial number displaying to user and from aa1,aa2,aa3....cc4,cc5,cc6.....ff9
//e]
/* #include<stdio.h>
 struct doj{
int day;int month;int year;
};
struct employee {
int emp_code; char name[19]; struct doj l;
};
int main(){
    int day,month,year;
struct employee a[5];
printf("enter the employee code,employee name and doj(day-month-year)\n");
for(int i=0;i<5;i++){
    scanf("%d%s%d%d%d",&a[i].emp_code,a[i].name,&a[i].l.day,&a[i].l.month,&a[i].l.year);
}
printf("enter the current date(day,month and year)\n");
scanf("%d%d%d",&day,&month,&year);
int dd,dm,dy;
float result;
printf("The name of the employ who have completed 3 years or more are:\n");
for(int i=0;i<5;i++){
dd=day-a[i].l.day;
dm=month-a[i].l.month;
dy=year-a[i].l.year;
if(dd>=0 && dm>=0 && dy>=0){
result=dd/365.0+dm/12.0+dy;
if(result>=3){
    printf("%s\n",a[i].name);
}
}
else if(dd<0 && dm>=0 && dy>=0){
    result=dm/12.0-dd/365.0+dy;
    if(result>=3){
    printf("%s\n",a[i].name);
}
}
else if (dm<0 && dd>=0 && dy>=0){
    result=-dm/12.0+dd/365.0+dy;
    if(result>=3){
    printf("%s\n",a[i].name);
}
else if (dy<0){
    printf("you entered wrong current year");
}
}
}
return 0;
}*/

// ********** in the above wap to take user date in single line and find how many day happened from last entered date;
// i]
/*  #include<stdio.h>
 #include<string.h>
 struct library {
    char an[15];
    char tob[30]; 
    char author[30]; 
    int price;
    char flag[10];
 };
 int main(){
char aun[15];
char t[30];
struct library a[3];
printf("Enter the accession number, title of book,author name, price and flag\n");
for(int i=0;i<3;i++){
scanf("%s", a[i].an);
while (getchar() != '\n');
scanf("%s%s%d%s",a[i].tob,a[i].author,&a[i].price,a[i].flag);
}
printf("\nDisplaying book information\n");
for(int i=0;i<3;i++){
printf("accession number=%s\ntitle of the book=%s\nauthor=%s\nprice=%d\nflag=%s\n\n\n",a[i].an,a[i].tob,a[i].author,a[i].price,a[i].flag);
}
printf("enter the author name\n");
scanf("%s",aun);

for(int i=0;i<3;i++){
if(strcmp(aun,a[i].author)==0){
printf("book that are availabe of author %s are:\n",a[i].author);
printf("%s\n",a[i].tob);
}
} 
printf("\n\n");
for(int i=0;i<2;i++){
if(strcmp(a[i].an, a[i+1].an)>0){
strcpy(t, a[i].tob);
strcpy(a[i].tob, a[i+1].tob);
strcpy(a[i+1].tob, t);
}
}
printf("The books in the order of accession number\n");
for(int i=0;i<3;i++){
    printf("%s\n",a[i].tob);
}
return 0;
} */


//g]
#include<stdio.h>
#include<string.h>
struct data{
char day[3];char month[3];char year[5];
};
int main(){
struct data a[2];
printf("enter the day, month and year respectively\n");
scanf("%s%s%s",a[0].day,a[0].month,a[0].year);
scanf("%s%s%s",a[1].day,a[1].month,a[1].year);
if(strcmp(a[0].day,a[1].day)==0 && strcmp(a[0].month,a[1].month)==0 && strcmp(a[0].year,a[1].year)==0){
    printf("The return value is 0.");
return 0;
}
else{
printf("The return value is 1");
return 1;    
}
}