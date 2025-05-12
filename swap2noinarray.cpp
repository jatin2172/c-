#include <stdio.h>

int main() {
    int n, i,temp;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
for(i=0;i<n-1;i++){
	temp=a[i];
	a[i]=a[i+1];
	a[i+1]=temp;
	i++;
}
for(i=0;i<n;i++){
	printf("%d\t",a[i]);
}
    return 0;
}

