/*Malloc  : dynamic memory allocation
room 1=?
room 2=?
room 3=?

colloc
room 1=0
room 2=0
room 2=0
*/

#include<stdio.h>
#include<stdlib.h>
int main() {

    int n;
    printf("\nEnter number of student =");
    scanf("%d",&n);
    int *marks =(int *) malloc (n * sizeof(int));
    for(int i=0;i<n;i++) {
     scanf("%d",&marks[i]);
    }
     for(int i=0;i<n;i++) {
       printf("\n %d",marks[i]);
     }
    
    return 0;
    