#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d",i);
			if(j!=i)
			printf("*");
		}
		printf("\n");
	}
		for(i=n;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%d",i);
			if(j!=i)
			printf("*");
		}
		printf("\n");
	}
}
