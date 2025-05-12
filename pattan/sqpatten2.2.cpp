#include<stdio.h>
int main(){
	int n,i,j;
	char c;
	scanf("%d %c",&n,&c);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++){
			printf("%c",(c+j));
		}
		printf("\n");
	}
	return 0;
}
