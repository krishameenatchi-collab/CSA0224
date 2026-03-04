#include <stdio.h>

int main() {
    int arr[] = {2,2,1,5,1,3,3};
    int n = 7;

    for(int i = 0; i < n; i++) {
        int count = 1;
        if(arr[i] == -1) continue;

        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                arr[j] = -1;
            }
        }
        printf("%d : %d times\n", arr[i], count);
    }
    return 0;
}
