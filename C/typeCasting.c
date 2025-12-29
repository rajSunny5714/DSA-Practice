#include <stdio.h>

int main() {
    int a, b;
    float result;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    result = (float)a / b;
    printf("Result: %.2f", result);
    return 0;
}