#include <stdio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    if(n>=1 && n<=10)
        printf("Between 1 and 10");
    else
        printf("Not between 1 and 10");
    return 0;
}
