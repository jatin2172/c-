#include<stdio.h>
int main(){
	int n,i,j,k;
	char c;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf(" ");
			for(k=1;k<=i;k++)
				printf("a ");
					printf("\n");
	}
	return 0;
}
