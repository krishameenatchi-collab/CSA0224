#include <stdio.h>

int main() {
    int arr[] = {10, 5, 2, 6};
    int n = 4, K = 100;

    for(int i = 0; i < n; i++) {
        int product = 1;
        for(int j = i; j < n; j++) {
            product *= arr[j];
            if(product < K) {
                printf("Subarray: ");
                for(int k = i; k <= j; k++)
                    printf("%d ", arr[k]);
                printf("\n");
            } else
                break;
        }
    }
    return 0;
}
