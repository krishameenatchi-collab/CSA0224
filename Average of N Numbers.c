#include <stdio.h>

int main() {
    int n, i;
    float num, sum = 0, average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        scanf("%f", &num);
        sum += num;
    }

    average = sum / n;
    printf("%.0f\n", average);

    return 0;
}
