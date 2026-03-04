#include <stdio.h>

int main() {
    int arr[] = {4,3,6,2,1,1};
    int n = 6;

    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] == arr[j])
                printf("Repeating: %d\n", arr[i]);
        }
    }

    for(int i = 1; i <= n; i++) {
        int found = 0;
        for(int j = 0; j < n; j++) {
            if(arr[j] == i) {
                found = 1;
                break;
            }
        }
        if(!found)
            printf("Missing: %d", i);
    }

    return 0;
}
