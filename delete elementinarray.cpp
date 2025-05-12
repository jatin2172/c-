#include <stdio.h>

int main() {
    int n, i,no;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d",&no);
    for (i = no; i < n; i++) {
	a[i]=a[i+1];
    }
    n=n-1;
        for (i = 0; i < n; i++) {
	printf("%d\t",a[i]);
    }
    return 0;
}
