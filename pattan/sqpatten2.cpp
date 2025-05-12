#include<stdio.h>
int main(){
	int n,i,j;
	char c,a;
	scanf("%d %c",&n,&c);
	a=c;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++){
			printf("%c",c);
			c++;
		}
		c=a;
		printf("\n");
	}
	return 0;
}
