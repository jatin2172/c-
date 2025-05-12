#include <stdio.h>

int main() {
    int n, i, j, count = 0;
    scanf("%d", &n);
    int a[n],status[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        status[i]=0;
    }
    
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if ((a[i] == a[j])&&(status[i]==0) ){
                count++;
                status[i]=1;
            }
        }
    }
    
    printf("%d\n", count);
    return 0;
}

