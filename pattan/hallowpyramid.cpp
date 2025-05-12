#include<stdio.h>
int main()
{
	int n,i,j,count;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		count=1;
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		printf("%d ",count);
		for(j=2;j<=i;j++){
		count++;
		if((i==j)||(i==n))
		printf("%d ",count);
		else
		printf("  ");
	}
	printf("\n");
	}
	return 0;
}
