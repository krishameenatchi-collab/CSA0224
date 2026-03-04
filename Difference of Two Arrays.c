#include <stdio.h>

int main() {
    int a[] = {1,2,3,4,5};
    int b[] = {3,4};
    int n1 = 5, n2 = 2;

    printf("Difference (A - B): ");
    for(int i = 0; i < n1; i++) {
        int found = 0;
        for(int j = 0; j < n2; j++) {
            if(a[i] == b[j]) {
                found = 1;
                break;
            }
        }
        if(!found)
            printf("%d ", a[i]);
    }

    return 0;
}
