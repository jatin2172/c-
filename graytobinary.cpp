#include<stdio.h>
int main(){
	int n,i;
	char binary[16],gray[16];
	scanf("%d",&n);
	
	for(i=0;i<=n;i++){
		scanf("%c",&gray[i]);
			}
			binary[0]=gray[0];
			for(i=1;i<n;i++){
				binary[i]=(binary[i-1]-48)^(gray[i]-48)+48;
			}
			for(i=0;i<n;i++)
			printf("%c",binary[i]);
	return 0;
}
