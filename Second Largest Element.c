#include <stdio.h>

int main() {
    int arr[] = {5,1,4,2,8};
    int n = 5;
    int largest = arr[0], second = -1;

    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    printf("Second Largest: %d", second);
    return 0;
}
