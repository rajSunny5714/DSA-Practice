#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Sum=%d\nDiff=%d\nProduct=%d\nQuotient=%d", a+b, a-b, a*b, a/b);
    return 0;
}