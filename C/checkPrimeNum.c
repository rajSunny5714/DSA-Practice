#include <stdio.h>
int main() {
    int n, flag = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    // for loop
    if(n <= 1) flag = 0;
    for(int i = 2; i*i <= n; i++)
        if(n % i == 0) { 
            flag = 0; break; 
        }
    /*
    // while loop
    int i = 2; flag = 1;
    if(n <= 1) flag = 0;
    while(i*i <= n) {
        if(n % i == 0) { flag = 0; break; }
        i++;
    }

    // do-while loop
    int i = 2; flag = 1;
    if(n <= 1) flag = 0;
    if(flag) {
        do {
            if(n % i == 0) { flag = 0; break; }
            i++;
        } while(i*i <= n);
    }
    */
    if(flag) printf("%d is prime", n);
    else printf("%d is not prime", n);
    return 0;
}