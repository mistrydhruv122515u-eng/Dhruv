#include<stdio.h>
#include<string.h>
int main(){
 
    char source[]="tops";
    char destination[1000];
    strcpy(destination,source);
    printf("\n %s",destination);

    char email[]="zo@top.com";
    char backup[150];
    strcpy(backup,email);
    printf("\n %ss",backup);
     
    return 0;
}