#include<stdio.h>
int main(){
	int n,i,j;
	char c;
	scanf("%d %c",&n,&c);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++){
			printf("%c",c);
		}
		printf("\n");
	}
	return 0;
}
