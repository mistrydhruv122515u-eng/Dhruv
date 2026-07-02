#include<stdio.h>
int main() {

    int price;
    int quentiy;

    printf("Enter the price: ");
    scanf("%d", &price);
    printf("Enter the quentiy : ");
    scanf("%d", &quentiy);
    printf("\nYour total salary is: %d",price * quentiy);
    return 0;
}