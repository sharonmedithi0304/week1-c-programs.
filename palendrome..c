#include<stdio.h>

int main() {
    int n, rev = 0, temp, digit;

    printf("Enter a number:\n");
    scanf("%d", &n);

    temp = n;

    while(n > 0) {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    if(temp == rev)
        printf("Palindrome number\n");
    else
        printf("Not a palindrome number\n");

    return 0;
}

