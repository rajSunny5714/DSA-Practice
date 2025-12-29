#include <stdio.h>

int main() {
    int a;
    float b;
    float result;
    printf("Enter an integer value: ");
    scanf("%d", &a);

    printf("Enter a float value: ");
    scanf("%f", &b);
    result = a + b;

    printf("Result after implicit type conversion: %.2f\n", result);
    return 0;
}
