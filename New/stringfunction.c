#include<stdio.h>
#include<string.h>
int main(){

     char passord[]="admin123";
     printf("length of pass is %d",strlen(passord));

     if(strlen(passord)>=8 && strlen(passord)<16){
     }else{
            printf("\n valid pasord lenth");
     }     
     

    return 0;
}

/*
char ch[5];
   char name[]="top";
   printf("name is %s",name);
*/