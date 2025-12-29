#include <stdio.h>
int main() {
    int n, rev = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    for(rev = 0; temp != 0; temp /= 10) {
        rev = rev*10 + temp%10;
    }
    printf("Reversed number: %d", rev);
    return 0;
}
