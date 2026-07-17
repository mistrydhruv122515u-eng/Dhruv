#include<stdio.h>
int main() {

   int mark[]={10,20,30};

   int *ptr=mark;
   printf("Adre \t value");
   for(int i=0;i<=3;i++){
    printf("\n%p \t %d",ptr,*ptr);
    ptr++;
   }
    return 0;
}