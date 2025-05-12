#include<stdio.h>
int main(){
	int n,k,num;
	scanf("%d%d",&n,&k);
	num=n;
	while(n>0){
		printf("%d\t",n);
		n=n-k;
	}
	while(n<=num){
		printf("%d\t",n);
		n=n+k;
	}
	return 0;
}
