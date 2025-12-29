#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter N: ");
    scanf("%d", &n);

    // for loop
    for(int i = 1; i <= n; i++) {
        sum += i;
    }

    /*
    // while loop
    int i = 1; sum = 0;
    while(i <= n) { sum += i; i++; }

    // do-while loop
    int i = 1; sum = 0;
    do { sum += i; i++; } while(i <= n);
    */
    printf("Sum: %d", sum);
    return 0;
}