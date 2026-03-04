#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int sorted = 1;

    for(int i = 0; i < n-1; i++) {
        if(arr[i] > arr[i+1]) {
            sorted = 0;
            break;
        }
    }

    if(sorted)
        printf("Array is sorted.");
    else
        printf("Array is not sorted.");

    return 0;
}
