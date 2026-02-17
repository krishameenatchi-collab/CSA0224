#include <stdio.h>

int main() {
    int num, temp, digit, sum;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 1 && temp != 4) {
        sum = 0;
        while (temp > 0) {
            digit = temp % 10;
            sum += digit * digit;
            temp /= 10;
        }
        temp = sum;
    }
    if (temp == 1)
        printf("Magic Number.\n");
    else
        printf("Not a Happy Number.\n");
    return 0;
}
