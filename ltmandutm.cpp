#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	int a[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
	printf("LTM\n");
		for(i=0;i<n;i++){
		for(j=0;j<=i;j++)
		printf("%d\t",a[i][j]);
		printf("\n");
	}
	printf("UTM\n");
		for(i=0;i<=n;i++){
		for(j=0;j<n;j++)
		if(i<=j)
		printf("%d\t",a[i][j]);
		else printf(" \t");
		printf("\n");
	}
	return 0;
}
