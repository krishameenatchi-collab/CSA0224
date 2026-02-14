#include <stdio.h>

int main() {
    float a, b, sum;
    
    printf("Enter two float numbers: ");
    scanf("%f %f", &a, &b);
    
    sum = a + b;
    
    printf("Sum = %.2f", sum);
    return 0;
}
