#include <stdio.h>

int main() {
    int m, n, k, i;

    printf("Enter M: ");
    scanf("%d", &m);

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Enter K (numbers to skip): ");
    scanf("%d", &k);

    for(i = m; i <= n; i += (k + 1)) {
        printf("%d ", i);
    }

    return 0;
}
