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
#include<stdio.h>
struct student {
        int Roll; char Name[25]; char dep[10];char course[10]; int yoj;
    };
void func_stud(int,struct student);
void link_float();
void func_detail(int);

int main(){
    struct student t[5];
    int y,r;
    printf("Enter the roll num,name,department,course and year of joining respectively for 5 students\n");
    for(int i=0;i<5;i++){
        scanf("%d%s%s%s%d",&t[i].Roll,&t[i].Name,&t[i].dep,&t[i].course,&t[i].yoj);
        fflush(stdin);
    }
printf("enter the year to know who joined in that particular year\n");
scanf("%d",&y);
func_stud(y,&t[0]);
printf("enter the roll no to get students detail\n");
scanf("%d",&r);
func_detail(r);
    return 0;
}
void link_float(){
    float a=0,*b;
    b=&a;
    a=*b;
}
void func_stud(struct student t){
    int p=0;
 printf("In year %d name of student who joined are as follows:\n",x);
 for(int i=0;i<5;i++){
    if(x==t[i].yoj){
        p++;
        printf("%s\n",t[i].Name);
    }
 }
 if(p==0){
    printf("sorry no one joined in %d year\n",x);
 }
}
void func_detail(int m){
    int p=0;
    struct student t[5];
    printf("The detail of student is as follows:\n");
    for(int i=0;i<5;i++){   
    if(m==t[i].Roll){
        p++;
      printf("Name of student=%s\ndepartment=%s\ncourse=%s\nyear of joining=%d\n",t[i].Name,t[i].dep,t[i].course,t[i].yoj);
    }    
    }
    if(p==0){
        printf("sorry there is no detail for student with roll no %d",m);
    }
    
}
