#include <stdio.h>

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = 5;
    int max = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
    }

    printf("Maximum: %d", max);
    return 0;
}
