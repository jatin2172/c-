#include<stdio.h>
int main(){
	int n,i,k,j;
	char c;
	scanf("%d %c",&n,&c);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("%c",c);
		}
		printf("\n");
	}
	return 0;
}
