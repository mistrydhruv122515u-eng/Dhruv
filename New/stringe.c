#include<stdio.h>
int main(){

   char adderss[100];
   printf("Enter your Address :");
  //scanf("%s",adderss);
  fgets(adderss,sizeof(adderss),stdin);
   printf("your Address is %s",adderss);

    return 0;
}

/*
char ch[5];
   char name[]="top";
   printf("name is %s",name);
*/