#include<stdio.h>
int main(){
void printnumber(int i){
    if(i<=5){
        return ;
    }
    printf("\n%d",i);
    printnumber(i+1);
}

 printnumber(1);
    return 0;
}