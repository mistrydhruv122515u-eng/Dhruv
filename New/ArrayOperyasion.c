#include <stdio.h>

int main() {

    int salary[5] = {4500, 7250, 15000, 7523, 18296};
    int max_salary = salary[0];
    for (int i = 1; i < 5; i++) {
        if (salary[i] > max_salary) {
            max_salary = salary[i];
        }
    }
    printf("The highest salary is: %d\n", max_salary);

    return 0;
}