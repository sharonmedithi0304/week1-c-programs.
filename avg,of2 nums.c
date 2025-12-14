#include <stdio.h>

int main() {
    int num1, num2, sum;
    float avg;

    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    avg = sum/2;

    printf("avg = %d\n", avg);

    return 0;
}

