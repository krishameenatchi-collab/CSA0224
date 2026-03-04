#include <stdio.h>

int main() {
    int arr[] = {3,4,-1,1,5,2};
    int n = 6;

    for(int i = 1; i <= n+1; i++) {
        int found = 0;
        for(int j = 0; j < n; j++) {
            if(arr[j] == i) {
                found = 1;
                break;
            }
        }
        if(!found) {
            printf("First Missing Positive: %d", i);
            break;
        }
    }
    return 0;
}
