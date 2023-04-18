#include<stdio.h>
int main(){
FILE *file;
file=fopen("nitesh.txt","r");
long int pos;
if(file == NULL){
    printf("unable to open file error\n");
    return 1;
}
pos=ftell(file);
printf("current position of file is %ld\n",pos);
char buffer[100];
fgets(buffer,100,file);
printf("read line %s",buffer);
rewind(file);
printf("rewinding the file pointer to the beginning\n");
fgets(buffer,100,file);
printf("read line: %s",buffer);
fclose(file);
return 0;
}