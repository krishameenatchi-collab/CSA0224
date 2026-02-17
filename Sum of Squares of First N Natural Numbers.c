#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    printf("Enter value of N: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += i * i;
    }

    printf("Sum of squares = %d\n", sum);

    return 0;
}
