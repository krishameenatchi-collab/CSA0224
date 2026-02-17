#include <stdio.h>

int main() {
    int num, temp, digit, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 9) {
        sum = 0;

        while (temp > 0) {
            digit = temp % 10;
            sum += digit;
            temp /= 10;
        }

        temp = sum;
    }

    if (temp == 1)
        printf("Magic Number.\n");
    else
        printf("Not a Magic Number.\n");

    return 0;
}
