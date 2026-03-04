#include <stdio.h>

void leftRotate(int arr[], int n, int k) {
    for(int i = 0; i < k; i++) {
        int temp = arr[0];
        for(int j = 0; j < n-1; j++)
            arr[j] = arr[j+1];
        arr[n-1] = temp;
    }
}

int main() {
    int arr[] = {1,2,3,4,5};
    int n = 5, k = 2;

    leftRotate(arr, n, k);

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
