#include <stdio.h>
int main() {
    int n, rev = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    for(; temp!=0; temp/=10){
        rev = rev*10 + temp%10;
    } 
    if(n == rev) {
        printf("%d is palindrome", n);
    }else{
        printf("%d is not palindrome", n);
    }
    return 0;
}
