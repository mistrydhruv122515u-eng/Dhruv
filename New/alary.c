#include<stdio.h>

int main() {

    int appraisal_amount = 200;
    int current_salary;

    printf("Enter the salary: ");
    scanf("%d", &current_salary);
    printf("\nYour total salary is: %d",
           current_salary + appraisal_amount);
    return 0;
}