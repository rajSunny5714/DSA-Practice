#include <stdio.h>

int main() {
    float num;
    int converted;
    printf("Enter a float number: ");
    scanf("%f", &num);
    converted = (int)num;
    printf("Converted integer: %d", converted);
    return 0;
}