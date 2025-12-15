#include<stdio.h>

int main() {
    float basic, gross;
    printf("Enter basic salary:\n");
    scanf("%f",&basic);

    gross = basic + 0.2*basic + 0.1*basic;
    printf("Gross Salary = %.2f\n",gross);

    return 0;
}

