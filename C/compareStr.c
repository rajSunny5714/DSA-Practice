#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int i, flag=0;
    scanf("%[^\n]%*c%[^\n]",str1,str2);
    for(i=0; str1[i]!='\0' || str2[i]!='\0'; i++){
        if(str1[i]!=str2[i]) { flag=1; break; }
    }
    if(flag) printf("Not Equal");
    else printf("Equal");
    return 0;
}