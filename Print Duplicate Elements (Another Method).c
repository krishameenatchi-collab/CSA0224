#include <stdio.h>

int main() {
    int arr[] = {1,2,3,1,3,6,6};
    int n = 7;

    printf("Duplicates: ");
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    return 0;
}
