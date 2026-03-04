#include <stdio.h>

int kadane(int arr[], int n) {
    int max = arr[0], curr = arr[0];
    for(int i = 1; i < n; i++) {
        curr = (arr[i] > curr + arr[i]) ? arr[i] : curr + arr[i];
        if(curr > max)
            max = curr;
    }
    return max;
}

int main() {
    int arr[] = {8, -1, 3, 4};
    int n = 4;

    int max_kadane = kadane(arr, n);

    int total = 0;
    for(int i = 0; i < n; i++) {
        total += arr[i];
        arr[i] = -arr[i];
    }

    int max_wrap = total + kadane(arr, n);

    printf("Maximum Circular Sum: %d",
           (max_wrap > max_kadane) ? max_wrap : max_kadane);

    return 0;
}
