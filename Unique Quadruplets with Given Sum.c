#include <stdio.h>

int main() {
    int arr[] = {1,0,-1,0,-2,2};
    int n = 6, target = 0;

    for(int i = 0; i < n-3; i++)
        for(int j = i+1; j < n-2; j++)
            for(int k = j+1; k < n-1; k++)
                for(int l = k+1; l < n; l++)
                    if(arr[i] + arr[j] + arr[k] + arr[l] == target)
                        printf("%d %d %d %d\n",
                               arr[i], arr[j], arr[k], arr[l]);

    return 0;
}
