#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n],max,second;
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    max=second=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){ second=max; max=arr[i]; }
        else if(arr[i]>second && arr[i]!=max) second=arr[i];
    }
    printf("%d",second);
    return 0;
}