#include <stdio.h>

int main() {
    float height;

    printf("Enter height in cm: ");
    scanf("%f", &height);

    if(height > 170)
        printf("Taller\n");
    else if(height >= 150 && height <= 170)
        printf("Average\n");
    else
        printf("Dwarf\n");

    return 0;
}
