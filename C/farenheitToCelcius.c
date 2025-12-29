#include <stdio.h>
int main() {
    float f;
    scanf("%f", &f);
    printf("C = %.2f", (f - 32) * 5/9);
    return 0;
}