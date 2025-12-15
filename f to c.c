#include<stdio.h>

int main() {
    float c,f;
    scanf("%f",&f);

    c = (f-32)*5/9;
    printf("Celsius = %.2f\n",c);

    return 0;
}

