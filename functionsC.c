// wrp for basic functions..
/*#include<stdio.h>
    void italy();
    void mumbai();
    int main(){
        printf("i am in main\n");
        italy();
        mumbai();
        return 0;   
      }
       void italy(){
        printf("i am from italy\n");
        }
        void mumbai(){
            printf("i am form mumbai\n");
        } */



         /* #include<stdio.h>
        void message();
        int main(){
            
            message();
            printf(" i am in main\n");
            return 0;
        }
        void message(){
            printf(" i am message\n");
        }
        */

         // using function write a program to print sum of three numbers.
        
        /*
       #include<stdio.h>
        int calsum(int x,int y,int z);
        int main(){
            int a,b,c,sum;
            printf("enter the three value\n");
            scanf("%d%d%d",&a,&b,&c);
            sum = calsum (a,b,c); 
            printf ("sum=%d\n",sum); 
            return 0;
        }
        int calsum(int x,int y,int z){
        int d;
        d=x+y+z;
        return d;
        }
        */

       // solved problems

      /* #include<stdio.h>
       void fun (int);
       int main(){
        int a=10;
        printf("%d\n",a);
        fun (a);
        return 0;
       }
       void fun (int b){
        b=20;
        printf("%d\n",b);
       }
       */
      // using library functions.

     /*
      #include<stdio.h>
      #include<math.h>
      int main (){
        float a=0.5;
        float w,x,y,z;
        w=sin(a);
        x=cos(a);
        y=tan(a);
        z=pow(2,a);
        printf("%f\n%f\n%f\n%f\n",w,x,y,z);
      return 0;
      }
      */
      // checking the conditions.
      /* #include<stdio.h>
       
       int main(){
        int a,b;
        a=10;
        b=20;
        printf("%d %d\n%d\n",a,b);
        printf("%d\n",a,b);
        return 0;
       }
       */
       // wrp to obtain square of a floating point number using a function.
       /*
       #include<stdio.h>
       float square(float);
       int main(){
        float a,b;
        printf("enter a number");
        scanf("%f",&a);
        b=square(a);
        printf("square of %0.3f is %0.3f",a,b);
        return 0;
        }
        float square(float x){
            float y;
            y = x*x;
        return y;
        }
        */
       // wrp to calculate the factorial value of any integer entered through the keyword.
      
      /* #include<stdio.h>
       int factorial(int);
       int main(){
        int a,b;
        printf("enter a number\n");
        scanf("%d",&a);
        b = factorial(a);
        printf("factorial of %d is %d\n",a,b);
        return 0;
       }
        int factorial(int x){
            int y=1,z=1;
            for (y=1;y<=x;y++)
                z*=y;
                return z;    
        }
       */
      // write a function power {a,b},to calculate the value of a raised to b.
        /*
        #include<stdio.h>
        #include<math.h>
        int power(int x,int y);
        int main(){
            int a,b,y;
            printf("enter the two value");
            scanf("%d%d",&a,&b);
            y = power(a,b);
            printf("value of %d ^ %d is %d",a,b,y);
            return 0;
        }
        int power (int x,int y){
            int z;
            z=pow(x,y);
            return z;
        }
        */
       /*
       // write a function power {a,b},to calculate the value of a raised to b.
       #include<stdio.h>
       float pow(float x, float y);
       int main(){
        float a,b,y;
        printf("enter the two value");
        scanf("%f%f",&a,&b);
        y = pow(a,b);
        printf("The value of %0.2f ^ %0.2f is %0.2f",a,b,y);
        return 0;
       }
       float pow(float x,float y){
        int z;
        float pow=1;
        for (z=1;z<=y;z++)
           pow=x*pow;
           return pow;
       }
       */
      /*
      #include<stdio.h>
      int romanise (int);
      int main (){
      int yr,b;
      printf("enter a year\n");
      scanf("%d",&yr);
      b= romanise (yr);
      }
      romanise (int y){
        if(y>=1000){
            printf("%c",'M');
            romanise (y-1000);
        }
        else if(y>=500){
            printf("%c",'D');
            romanise (y-500);
        }
        else if(y>=100){
            printf("%c",'C');
            romanise (y-100);
        }
        else if (y>=50){
            printf("%c",'L');
            romanise (y-50);
        }
        else if(y>=10){
            printf("%c",'x');
            romanise (y-10);
        }
        else if(y>=5){
            printf("%c",'V');
            romanise (y-5);
        }
        else if (y>=1){
            printf("%c",'I');
            romanise (y-1);
        }
      }
      */
     /*  #include<stdio.h>
      int romanise (int,int,char);
      int main(){
      int yr;
      printf("enter year"); 
      scanf("%d",&yr);
      yr = romanise (yr,1000,'m');
      yr = romanise (yr,500,'d');
      yr = romanise (yr,100,'c');
      yr = romanise (yr,50,'l');
      yr = romanise (yr,10,'x');
      yr = romanise (yr,5,'v');
      romanise (yr,1,'i');
      return 0;
      }
      int romanise (int y, int k ,char ch)
      {
        int i,j;
        j = y/k;
        for (i=1;i<=j;i++)
        printf("%c",ch);
        return (y-k*j);
      }*/
      // exercise of function chapter
      // C] a)
      /*
      #include<stdio.h>
      void leapyear(int);
      void main(){
        int yr,b;
        printf("enter a year you want to check");
        scanf("%d",&yr);
        leapyear(yr);
      }
       void leapyear(int yr){
        if (yr%4==0 && yr%100!=0 || yr%400==0){
         printf("%d is leap year", yr);
        }
        else {
            printf("%d is not a leap year",yr);
        }    
      }
      */
       #include<stdio.h>
       int pf(int);
       int main(){
        int num,p;
        printf("enter a number");
        scanf("%d",&num);
        p = pf(num);
        return 0;
       }
       pf(int x){
        int i;
        for(i=2;i<=x;i++){
        if(x%i==0){
            printf("%d\n",i);
            x=x/i;
            i--;
        }
        }
       }
    