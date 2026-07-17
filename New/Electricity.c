#include <stdio.h>

int bill(int units)
{
    if (units <= 100)
        return units * 2;
    else if (units<200)
        return (100*3);
    else
        return (100*5);
}

int main()
{
    int units;

    printf("Enter electricity units: ");
    scanf("%d", &units);

    printf("Total Bill = Rs. %d", bill(units));

    return 0;
}