//Array : is a colloction of data type of ame data type 
//stucture : colloction od data of different data type 

#include<stdio.h>
#include<string.h>

 struct Employee{
    int emp_id;
    float salary;
    char emp_name[50];
 };

int main() {
    
    struct Employee emp;
    emp.emp_id=1;
    emp.salary=4500000;
    strcpy(emp.emp_name,"Dhruv");
    printf("\n employee id is %d",emp.emp_id);
    printf("\n employee salary is %2f",emp.salary);
    printf("\n employee name is %",emp.emp_name);


    return 0;
}