#include<stdio.h>
int main(){
	int n,i,j;
	char ch='A';
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			printf("%c",ch+j);
		}
				for(j=i;j>=0;j--){
			printf("%c",ch+j);
		}
		printf("\n");
	}
	return 0;
}
