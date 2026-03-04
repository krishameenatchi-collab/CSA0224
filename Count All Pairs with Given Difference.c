#include <stdio.h>

int main() {
    int arr[] = {1,5,3,4,2};
    int n = 5, diff = 2;
    int count = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(abs(arr[i] - arr[j]) == diff)
                count++;
        }
    }

    printf("Total Pairs: %d", count);
    return 0;
}
