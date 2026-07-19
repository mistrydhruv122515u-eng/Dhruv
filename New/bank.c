#include <stdio.h>

float deposit(float balance, float amount)
{
    return balance + amount;
}

float withdraw(float balance, float amount)
{
    if (amount > balance)
    {
        printf("Insufficient balance\n");
        return balance;
    }
    return balance - amount;
}

int main()
{
    float balance = 15000, amount;

    printf("Enter deposit amount: ");
    scanf("%f", &amount);
    balance = deposit(balance, amount);

    printf("Enter withdraw amount: ");
    scanf("%f", &amount);
    balance = withdraw(balance, amount);

    printf("Balance = %.2f", balance);

    return 0;
}