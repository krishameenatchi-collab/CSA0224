#include <stdio.h>

int main() {
    int arr[] = {2,3,1,2,4,3};
    int n = 6, S = 7;
    int minLen = n+1;

    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += arr[j];
            if(sum >= S) {
                if(j - i + 1 < minLen)
                    minLen = j - i + 1;
                break;
            }
        }
    }

    printf("Minimum Length: %d", minLen);
    return 0;
}
