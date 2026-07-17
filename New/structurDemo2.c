//Array : is a colloction of data type of ame data type 
//stucture : colloction od data of different data type 

#include<stdio.h>
#include<string.h>

 struct student{
    int roll_no;
    float mark;
    char name[100];
 };

int main() {
    
    struct student s1;
    s1.roll_no=13;
    s1.mark=50.25;
    strcpy(s1.name,"Dhruv");
    printf("\n employee id is %d",s1.roll_no);
    printf("\n employee salary is %2f",s1.mark);
    printf("\n employee name is %s",s1.name);


    return 0;
}