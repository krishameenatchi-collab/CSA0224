#include <stdio.h>

void sort(int arr[], int n) {
    for(int i = 0; i < n-1; i++)
        for(int j = 0; j < n-i-1; j++)
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
}

int main() {
    int arr[] = {7,10,4,3,20,15};
    int n = 6, k = 3;

    sort(arr, n);

    printf("Kth Smallest: %d\n", arr[k-1]);
    printf("Kth Largest: %d", arr[n-k]);

    return 0;
}
