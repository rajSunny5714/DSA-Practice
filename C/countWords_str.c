#include <stdio.h>
int main() {
    char str[100];
    int words=0;
    scanf("%[^\n]",str);
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==' ' && str[i+1]!=' ' && str[i+1]!='\0') words++;
    }
    if(str[0]!='\0') words++;
    printf("%d",words);
    return 0;
}