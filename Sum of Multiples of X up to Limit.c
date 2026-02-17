#include <stdio.h>

int main() {
    int x, limit, i;
    int sum = 0;

    printf("Enter value of X: ");
    scanf("%d", &x);

    printf("Enter limit: ");
    scanf("%d", &limit);

    for(i = 1; i <= limit; i++) {
        if(i % x == 0) {
            sum += i;
        }
    }

    printf("Sum of multiples of %d up to %d = %d\n", x, limit, sum);

    return 0;
}
