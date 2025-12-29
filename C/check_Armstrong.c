#include <stdio.h>
#include <math.h>
int main() {
    int n, temp, sum = 0, digits = 0, r;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    for(digits=0; temp!=0; temp/=10) digits++;
    temp = n; sum = 0;
    for(; temp!=0; temp/=10) {
        r = temp%10; sum += pow(r,digits); 
    }
    if(sum == n) 
    printf("%d is Armstrong", n);
    else 
    printf("%d is not Armstrong", n);
    return 0;
}
