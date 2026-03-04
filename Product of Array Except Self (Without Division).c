#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4};
    int n = 4;
    int result[n];

    for(int i = 0; i < n; i++) {
        result[i] = 1;
        for(int j = 0; j < n; j++) {
            if(i != j)
                result[i] *= arr[j];
        }
    }

    for(int i = 0; i < n; i++)
        printf("%d ", result[i]);

    return 0;
}
