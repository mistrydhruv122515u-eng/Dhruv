#include <stdio.h>

int main() {
     
    int salary[5] = {4500, 7250, 15000, 7523, 18296};
    float total = 0;
    
    // 1. Add up all the salaries
    for (int i = 0; i < 5; i++) {
        total = total + salary[i];
    }
    
    // 2. Divide the total by 5 to get the average
    float average = total / 5;
    
    // 3. Print the result
    printf("The average salary is: %.2f\n", average);

    return 0;
}